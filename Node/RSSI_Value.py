import serial
import requests
import struct
import json
import time

socket = None   # 全域變數初始化為 None
data = [None]*41


def get_LTE_rssi():
    rssi_value = None
    try:
        PLS_serial = serial.Serial("/dev/ttyACM2", 115200, timeout=1)
        csq = "AT+CSQ\r"
        PLS_serial.write(csq.encode('utf-8'))
        time.sleep(0.05)
        data_buf= PLS_serial.inWaiting()
        if data_buf >= 0:
            data = PLS_serial.read(data_buf)
            response = data.decode('utf-8')
            # print('response_1 = ',response)
            # print('len_1 = ',len(response))
            if "+CSQ:" in response:
                start_index = response.index("+CSQ:") + len("+CSQ:")
                end_index = response.index(",", start_index)
                rssi_value = int(response[start_index:end_index])
                rssi_value = rssi_value*2 - 113
                if rssi_value > 0:
                    print('RSSI disconnect')
                    return None
                print('4G RSSI: ',rssi_value)
                return rssi_value
        else:
            # print('response = ',response)
            # print('len = ',len(response))
            print("No valid response")
            return None
    except serial.serialutil.SerialException as e:
        print("Serial Exception:", e)
        return None
        
    
def get_Ace6_rssi():
    url = 'http://192.168.10.62/spectrum' # local Ace6 IP 
    try:
        response = requests.get(url)
        if response.status_code == 200:
            local_RSSI = response.json()["rssi"][0][0]
            print("local Ace6 RSSI : ",local_RSSI,end="\r")
            return local_RSSI
        else:
            print("requests fail status code is:", response.status_code)
    except requests.exceptions.RequestException as e:
        print("requests error:", e)
        
def get_Xbee_rssi():
    xbee_start      = b'\x7E'                               #1s
    xbee_length     = b'\x00\x04'                           #2s 
    xbee_AT_Command = b'\x08'                               #1s
    xbee_frameID    = b'\x01'                               #1s
    xbee_DB         = b'\x64\x62'                           #2s
    xbee_Check_Sum  = b'\x30'                               #1s
    try:
        Xbee_serial = serial.Serial("/dev/ttyXbee", 115200, timeout=1)
        packet = struct.pack('=1s2s1s1s2s1s',xbee_start,xbee_length,xbee_AT_Command,xbee_frameID,xbee_DB,xbee_Check_Sum)
        Xbee_serial.write(packet)
        # print(packet)
        time.sleep(0.05)
        status = Xbee_serial.inWaiting()
        # print('status ',status)
        if status >= 4:
            data = Xbee_serial.read(4)
            if data[0] == 0x7E and data[3] == 0x88:
                value = Xbee_serial.read(6)
                rssi_value = value[4]
                print('Xbee RSSI: -',rssi_value)
                # byte_rssi = bytes(rssi_value)
                # print(type(byte_rssi))
                return rssi_value
        return None
    except serial.serialutil.SerialException as e:
        return None

    
#while True:
#     get_LTE_rssi()
#     # get_Xbee_rssi()
#     time.sleep(1)
