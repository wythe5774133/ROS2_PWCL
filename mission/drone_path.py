import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from std_msgs.msg import Float64
from geometry_msgs.msg import Point
import sys, signal
import time
import threading
from rclpy.qos import ReliabilityPolicy, QoSProfile
from mavros_msgs.msg import Altitude, State, PositionTarget, GlobalPositionTarget
from sensor_msgs.msg import BatteryState, NavSatFix, Imu
from geometry_msgs.msg import PoseStamped, Vector3, TwistStamped, Quaternion
from geographic_msgs.msg import GeoPoseStamped
from mavros_msgs.srv import CommandBool, SetMode, CommandTOL
from transforms3d import euler
from tutorial_interfaces.srv import DroneStatus, DroneMissionPath
#from mavros_msgs.srv import DroneStatus, DroneMissionPath
from enum import Enum
import numpy as np
import cmath
import math
import struct

drone_point = []

class groundControlCommand(Enum):
    DRONE_IDLE = '0'
    DRONE_TAKEOFF = '1'
    DRONE_MISSION_START = '2'
    DRONE_RSEARCH_START = '3'

class DroneSubscribeNode(Node):
    def __init__(self):
        super().__init__('drone_subscriber')
        self.AltitudeSub = self.create_subscription(Altitude, 'mavros/altitude', self.Altcb, QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        self.LocalPositionSub = self.create_subscription(PoseStamped, 'mavros/local_position/pose', self.LPcb, QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        self.velocitySub = self.create_subscription(TwistStamped, 'mavros/local_position/velocity_body', self.VELcb, QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        self.GlobalPositionSuub = self.create_subscription(NavSatFix, 'mavros/global_position/global', self.GPcb, QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        self.imuSub = self.create_subscription(Imu, 'mavros/imu/data', self.IMUcb, QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        self.headingSub = self.create_subscription(Float64, 'mavros/global_position/compass_hdg', self.HDcb, QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        self.StateSub = self.create_subscription(State, 'mavros/state', self.Statecb, QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        self.altitude = 0.0
        self.local_x = 0.0
        self.local_y = 0.0
        self.local_z = 0.0
        self.latitude = 0.0
        self.longitude = 0.0
        self.gps_altitude = 0.0
        self.roll = 0.0
        self.pithch = 0.0
        self.yaw = 0.0
        self.angu_x = 0.0
        self.angu_y = 0.0
        self.angu_z = 0.0
        self.acc_x = 0.0
        self.acc_y = 0.0
        self.acc_z = 0.0
        self.velocity = 0.0
        self.heading = 0.0
        self.state = State()

        #prevent unused variable warning
        self.AltitudeSub
    
    def Statecb(self, msg :State):
        self.state = msg
    
    def Altcb(self, msg): 
        #self.get_logger().info('I heard altitude: "%s"' % msg.relative)
        self.altitude = msg.relative

    def LPcb(self, msg :NavSatFix ):
        #self.get_logger().info('I heard local_x: "{}", local_y: "{}"'.format(msg.pose.position.x, msg.pose.position.y))
        self.local_x = msg.pose.position.x
        self.local_y = msg.pose.position.y
        self.local_z = msg.pose.position.z

    def GPcb(self, msg):
        self.latitude = msg.latitude
        self.longitude = msg.longitude
        self.gps_altitude = msg.altitude

    def IMUcb(self, msg :Imu):
        ned_euler_data = euler.quat2euler([msg.orientation.w,
                                        msg.orientation.x,
                                        msg.orientation.y,
                                        msg.orientation.z])
        self.pithch = radian_conv_degree(ned_euler_data[0])
        self.roll = radian_conv_degree(ned_euler_data[1])
        self.yaw = radian_conv_degree(ned_euler_data[2])

        #print(self.yaw)
    
        self.angu_x = msg.angular_velocity.x * 57.3
        self.angu_y = msg.angular_velocity.y * 57.3
        self.angu_z = msg.angular_velocity.z * 57.3
        
        self.acc_x = msg.linear_acceleration.x
        self.acc_y = msg.linear_acceleration.y
        self.acc_z = msg.linear_acceleration.z
    
    def VELcb(self, msg):
        self.velocity = msg.twist.linear.x 
    
    def HDcb(self, msg):
        self.heading = msg.data
        
    def get_altitude(self):
        return self.altitude
    def get_local_x(self):
        return self.local_x
    def get_local_y(self):
        return self.local_y
    def get_local_z(self):
        return self.local_z

class DronePublishNode(Node):
    def __init__(self, freqPositionLocal):
        super().__init__('drone_publisher')
        self.setPointPositionLocal_pub = self.create_publisher(PoseStamped, 'mavros/setpoint_position/local', 10)
        self.setPointPositionGlobal_pub = self.create_publisher(GlobalPositionTarget, 'mavros/setpoint_raw/global', 10)
        self.setPointPositionLocal_timer = self.create_timer(1/freqPositionLocal, self.setPointPositionLocal_callback)
        self.setPointPositionGlobal_timer = self.create_timer(1/50, self.setPointPositionGlobal_callback)
        # self.setRecvGC_timer = self.create_timer(1/10, self.recvGC)
        self.alwaysSend = False
        self.alwaysSendPosLocal = PoseStamped()
        self.alwaysSendGlobal = False
        self.alwaysSendPosGlobal = GlobalPositionTarget()

    def sendPositionLocal(self, data : PoseStamped): #用來做為單獨發送
        self.setPointPositionLocal_pub.publish(data)

    def setPointPositionLocal_callback(self): #用來作為連續發送
        if self.alwaysSend == True:
            self.setPointPositionLocal_pub.publish(self.alwaysSendPosLocal)

    def sendPositionGlobal(self, data : PoseStamped): #用來單獨發送
        self.setPointPositionGlobal_pub.publish(data)

    def setPointPositionGlobal_callback(self): #用來作為連續發送
        if self.alwaysSendGlobal == True:
            self.setPointPositionGlobal_pub.publish(self.alwaysSendPosGlobal)

    # def recvGC(self):
    #     global droneState
    #     result = drone_4g.drone_ground_control()
    #     if result == drone_4g.groundControlCommand.DRONE_TAKEOFF.value:
    #         droneState.droneState = drone_4g.groundControlCommand.DRONE_TAKEOFF.value
    #     if result == drone_4g.groundControlCommand.DRONE_MISSION_START.value:
    #         droneState.droneState = drone_4g.groundControlCommand.DRONE_MISSION_START.value
    
class DroneClientNode(Node):
    def __init__(self):
        super().__init__('drone_mavros_service')
        self._arming = self.create_client(CommandBool, 'mavros/cmd/arming')
        self._takeoff = self.create_client(CommandTOL, 'mavros/cmd/takeoff')
        self.land = self.create_client(CommandTOL, 'mavros/cmd/land')
        self._setMode = self.create_client(SetMode, 'mavros/set_mode')

        while not self._arming.wait_for_service(timeout_sec=1.0):
            time.sleep(1)
        print("arming service OK")
        while not self._takeoff.wait_for_service(timeout_sec=1.0):
            time.sleep(1)
        print("takeoff service OK")
        while not self.land.wait_for_service(timeout_sec=1.0):
            time.sleep(1)
        print("land service OK")
        while not self._setMode.wait_for_service(timeout_sec=1.0):
            time.sleep(1)
        print("setMode service OK")

        '''all_clients = [self._arming, self._takeoff, self.land, self._setMode]
        
        while not all([c.wait_for_service(timeout_sec=1.0) for c in all_clients]):
            self.get_logger().info('service not available, waiting again...')
        time.sleep(1)'''
        
    def requestCmdArm(self): #無人機解鎖 
        CmdArm = CommandBool.Request()
        CmdArm.value = True
        self.future = self._arming.call_async(CmdArm)
        rclpy.spin_until_future_complete(self, self.future, timeout_sec = 3.0)
        print("Drone Arming Now")
        print(self.future.result())
        return self.future.result()
    
    def requestSetMode(self, value):
        setModeCmdReq = SetMode.Request()
        setModeCmdReq.custom_mode = value
        self.future = self._setMode.call_async(setModeCmdReq)
        rclpy.spin_until_future_complete(self, self.future, timeout_sec=1.0)
        print("OFFBOARD mode now")
        return self.future.result()
    
    def requestLand(self): #無人機降落
        setModeCmdReq = SetMode.Request()
        setModeCmdReq.custom_mode = "AUTO.LAND"
        self.future = self._setMode.call_async(setModeCmdReq)
        rclpy.spin_until_future_complete(self, self.future, timeout_sec=1.0)
        print("landing------")
        return self.future.result()

    def requestRTL(self): #無人機降落
        setModeCmdReq = SetMode.Request()
        setModeCmdReq.custom_mode = "AUTO.RTL"
        self.future = self._setMode.call_async(setModeCmdReq)
        rclpy.spin_until_future_complete(self, self.future, timeout_sec=1.0)
        print("RTL------")
        return self.future.result()

class DroneServiceNode(Node):
    def __init__(self):
        super().__init__('drone_service')
        self.srv_missionpath = self.create_service(DroneMissionPath, 'drone_mission_path', self.drone_path_recv)
        self.srv_status = self.create_service(DroneStatus, 'drone_status', self.drone_command)
        #self.drone_path = None
        #self.dronr_State = '0'
    def drone_path_recv(self, request, response):
        global drone_point
        drone_point.clear()

        print('len(request.point_count)',len(request.point_count))
        for i in range(int(request.point_count)):
            print('point:',i,'---------------------------')
            print('latitude:', request.latitude[i])
            print('longitude:', request.longitude[i])
            print('altitude:', request.altitude[i])
            print('speed:', request.speed[i])
            print('yaw_delta:', request.yaw_delta[i])
        
            drone_point.append([request.speed[i], request.altitude[i], request.latitude[i], request.longitude[i], 0.0])
            print('len(drone_point)', len(drone_point))

        response.path_check = True
        print(request)
        print('response:',response)

        return response

    def drone_command(self, request, response):
        global droneState
        droneState.droneState = int(request.status)

        response.check = True
        print(request)
        print('response:',response)
        
        return response

class drone_state():
    def __init__(self):
        self.droneState = groundControlCommand.DRONE_IDLE.value

def takeoff(altitude, pub : DronePublishNode, sub : DroneSubscribeNode ,srv : DroneClientNode): #無人機起飛
    print("drone takeoff")
    data = PoseStamped()
    
    data.pose.position.x = 0.0
    data.pose.position.y = 0.0
    data.pose.position.z = altitude
    pub.sendPositionLocal(data)
    srv.requestSetMode("OFFBOARD")
    pub.alwaysSendPosLocal = data
    pub.alwaysSend = True

    while ((sub.get_altitude()) <= (altitude- 0.1)):
        time.sleep(0.5)
    print('takeoff complete')

def fly_to_global(pub : DronePublishNode, sub : DroneSubscribeNode, latitude, longitude, altitude, delta_yaw):
    print('fly to latitude', latitude," longitude:", longitude, " delta_yaw:", delta_yaw)

    pub.alwaysSendPosGlobal.latitude = latitude
    pub.alwaysSendPosGlobal.longitude = longitude
    pub.alwaysSendPosGlobal.altitude = altitude
    #pub.alwaysSendPosGlobal.yaw_rate = 24.3

    m_convert_lng = 1/101775.45 #台灣經度1度約為101775.45m
    m_convert_lat = 1/110936.2 #緯度1度約為110936.2m
    
    if latitude == 0.0:
        latitude = sub.latitude
    if longitude == 0.0:
        longitude = sub.longitude

    while ((abs(sub.latitude - latitude)*110936.32 > 3) or (abs(sub.longitude - longitude)*101775.45 > 3)):
        print("approaching target...")
        time.sleep(0.1)
    

    if (latitude != 0.0) and (longitude != 0.0):
        while ((abs(sub.latitude - latitude)*110936.2 > 1.5) or (abs(sub.longitude - longitude)*101775.45 > 1.5) ):  #or (abs(sub.altitude - altitude) > 1.5)
            print("lat distance:", abs(sub.latitude - latitude)*110936.2, "lng distance:", abs(sub.longitude - longitude)*101775.45, "alt distance:", abs(sub.altitude - altitude))
            time.sleep(0.1)
    '''if (latitude == 0.0) and (longitude != 0.0):
        while ((abs(sub.longitude - longitude) > m_convert_lng*0.5) and (abs(sub.altitude - altitude) < 0.1)):
            print("lng distance:", abs(sub.longitude - longitude)*101775.45, "alt distance:", abs(sub.altitude - altitude))
            time.sleep(0.1)
    if (latitude != 0.0) and (longitude == 0.0):
         while ((abs(sub.latitude - latitude) > m_convert_lat*0.5) and (abs(sub.altitude - altitude) < 0.1)):
            print("lat distance:", abs(sub.latitude - latitude)*110936.2, "alt distance:", abs(sub.altitude - altitude))
            time.sleep(0.1)'''

    time.sleep(1)
    print('reach the destination')
    
def radian_conv_degree(Radian) : 
    return ((Radian / math.pi) * 180)

def degree_conv_radian(Degree) : 
    return ((Degree / 180) * math.pi)

def _droneSpinThread(pub, sub, cli, srv):
    #print("_droneSpinThread start")

    executor = MultiThreadedExecutor()
    executor.add_node(sub)
    executor.add_node(pub)
    executor.add_node(srv)
    executor.spin()

def rotation_angle(current_heading, target_heading):
    """
    判斷當前航向和目標航向之間的旋轉角度

    參數：
    current_heading：當前航向，以度為單位
    target_heading：目標航向，以度為單位

    返回值：
    旋轉角度，以度為單位
    """
    diff = (target_heading - current_heading) % 360

    if diff <= 180:
        return float(diff)
    else:
        return float(diff - 360)

def check_arm(sub : DroneSubscribeNode, srv : DroneClientNode):
    if sub.state.armed == False:
        i = 0
        while not srv.requestCmdArm():
            i+=1
            print('wating arm')
            time.sleep(0.5)
            if i == 10:
                return False
        print("check arm done")
        return True

def takeoff_global(pub : DronePublishNode, sub : DroneSubscribeNode, srv : DroneClientNode, rel_alt : float):
    data = GlobalPositionTarget()
    data.coordinate_frame = 6 #FRAME_GLOBAL_REL_ALT 
    data.type_mask = 0
    data.velocity.x = 0.25
    data.velocity.y = 0.25
    current_latitude = sub.latitude
    current_longitude = sub.longitude
    data.latitude= current_latitude
    print(current_latitude)
    data.longitude = current_longitude
    print(current_longitude)
    data.altitude = rel_alt
    data.yaw = degree_conv_radian(sub.yaw)
    pub.alwaysSendPosGlobal = data
    pub.alwaysSendGlobal = True

    result = check_arm(sub, srv)
    if result == False:
        return False
    
    srv.requestSetMode("OFFBOARD")

    '''while ((sub.get_altitude()) <= (rel_alt- 1)):
    print(sub.get_altitude())
        time.sleep(1/50)
    print('takeoff complete')'''

def signal_handler(signal, frame):
    print("\nprogram exiting gracefully")
    rclpy.shutdown()
    sys.exit(0)

if __name__ == '__main__':

    #system interrrupt (ctrl + c)
    signal.signal(signal.SIGINT, signal_handler)

    global droneSub
    global dronePub
    global droneCli
    global droneSrv
    global droneState
    #global posLocal

    freq = 50 #publish發佈頻率
    takeoffAltitude = 10.0 #無人機起飛高度

    rclpy.init()

    dronePub = DronePublishNode(50)
    droneSub = DroneSubscribeNode()
    droneCli = DroneClientNode()
    droneSrv = DroneServiceNode()
    droneState = drone_state()

    droneSpinThread = threading.Thread(target=_droneSpinThread, args=(dronePub, droneSub, droneCli, droneSrv))
    droneSpinThread.start()
    #rclpy.spin(droneSrv)
    time.sleep(3)
    
    while droneSub.latitude == 0 and droneSub.latitude == 0:
        time.sleep(0.1)

    print("_droneSpinThread start")

    while True:
        if droneState.droneState == 1: #groundControlCommand.DRONE_TAKEOFF.value:
            print('TEST111111111111111111111111111111111111111111111111111111111111111')
            droneState.droneState = groundControlCommand.DRONE_IDLE.value
            
            origin_latitude = droneSub.latitude
            origin_longitude = droneSub.longitude
            takeoff_global(dronePub, droneSub, droneCli, takeoffAltitude)

            while True:
                if droneState.droneState == 2:
                    print("mission start---------")
                    
                    print('len',len(drone_point))
                    for row in range(len(drone_point)):
                        fly_to_global(dronePub, droneSub, drone_point[row][2], drone_point[row][3], drone_point[row][1], 0.0)
                    
                    fly_to_global(dronePub, droneSub, origin_latitude, origin_longitude, 5.0, 0.0)
                    droneCli.requestLand()

                    '''#當按下搜尋開始
                    for row in range(len(rsearch_point)):
                        if row == 0:
                            print("first point")
                            fly_to_global(dronePub, droneSub, rsearch_point[row][2], rsearch_point[row][3], rsearch_point[row][1], 0.0)
                        elif (row > 0) and (row+1 < point_len) :
                            print("new point")
                            fly_to_global(dronePub, droneSub, rsearch_point[row][2], rsearch_point[row][3], rsearch_point[row][1], rsearch_point[row+1][1])
                        else:
                            print("end point")
                            fly_to_global(dronePub, droneSub, rsearch_point[row][2], rsearch_point[row][3], rsearch_point[row][1], 0.0)

                    fly_to_global(dronePub, droneSub, origin_latitude, origin_longitude, 5.0, 0.0)
                    droneCli.requestLand()'''

                    droneState.droneState = 0
                time.sleep(0.1)
            #break
