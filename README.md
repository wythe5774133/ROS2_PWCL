# ROS2_PWCL
以ROS2架構實現無人機雙工通訊系統
# 功能介紹:
根據使用者的需求可以使用"Ace6、4G、Xbee"通訊模組來開啟相對應的Node與無人機通訊
# 注意事項:
請先安裝以下插件包

GStreamer
Reference: https://gstreamer.freedesktop.org/documentation/installing/on-linux.html?gi-language=c
```shell
sudo apt-get install libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev libgstreamer-plugins-bad1.0-dev gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly gstreamer1.0-libav gstreamer1.0-tools gstreamer1.0-x gstreamer1.0-alsa gstreamer1.0-gl gstreamer1.0-gtk3 gstreamer1.0-qt5 gstreamer1.0-pulseaudio
```

RTSP server
```shell
sudo apt-get update
sudo apt-get install libgstrtspserver-1.0-0
sudo apt-get install gir1.2-gst-rtsp-server-1.0
```
# Build & Source 工作空間
```shell
colcon build
source install/setup.bash
```
