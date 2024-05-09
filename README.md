# 功能介紹:
根據使用者的需求可以使用"Ace6、4G、Xbee"通訊模組來開啟相對應的Node與無人機通訊，並透過該通訊節點實現無人機**路徑規劃**以及**區域搜索**之任務
# 需要的插件與安裝包:
## GStreamer
Reference: https://gstreamer.freedesktop.org/documentation/installing/on-linux.html?gi-language=c
```shell
sudo apt-get install libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev libgstreamer-plugins-bad1.0-dev gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly gstreamer1.0-libav gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-alsa gstreamer1.0-gl gstreamer1.0-gtk3 gstreamer1.0-qt5 gstreamer1.0-pulseaudio
```
安裝RTSP Server需要的插件包
```shell
sudo apt-get update
sudo apt-get install libgstrtspserver-1.0-0
sudo apt-get install gir1.2-gst-rtsp-server-1.0
```
## ROS2 foxy
安裝方式請參考ROS官方網站：https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html
## MAVROS(Binary)
下載mavros的github檔
```shell
cd /home/"使用者名稱"
git clone https://github.com/mavlink/mavros.git
```
使用apt安裝
```shell
sudo apt install ros-foxy-mavros
```
執行 install_geographiclib_datasets.sh 腳本
```shell
cd ~/mavros/mavros/scripts/
```
由於Ubuntu20.04版本缺失所以需要打下列指令並輸入使用者密碼
```shell
sudo su
. install_geographiclib_datasets.sh
```
```shell
exit
```
安裝詳情可參考：https://github.com/mavlink/mavros/blob/ros2/mavros/README.md

# 使用流程
### 1.開啟Terminal並Build工作空間
```shell
colcon build
```
### 2.Source工作空間
**每個進入該工作空間的終端機都必須Source**
```shell
source install/setup.bash
```
### 3.開啟任務程式
```shell
cd mission
```
```shell
python3 drone_path.py #路徑規劃任務
```
或是
```shell
python3 drone_search.py #搜索任務
```
### 4.開啟通訊節點(以Xbee為例)
```shell
cd Node
```
```shell
python3 Xbee_Node.py
```
# 注意事項
1.根據不同的無人機需要改變`ipaddr`、`port`、`drone_id`參數，分別可以在各個通訊節點程式中的29~32行修改

2.使用Xbee通訊時需要更改**xbee_v4.py**中的`xbee_mac`參數來匹配地面監控基站的Xbee模組的MAC碼

3.**xbee_v4.py**中的第14與25行已設置名稱給指定的Serial port如果你的Ubuntu系統中沒有特別命名請自行切換該名稱給指定的串列埠
