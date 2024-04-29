# -*- coding: UTF-8 -*-

import gi
gi.require_version('Gst', '1.0')
gi.require_version('GstRtspServer','1.0')
from gi.repository import Gst, GLib, GstRtspServer

# 初始化GStreamer
Gst.init(None)

# 创建GstRtspServer服务器
server = GstRtspServer.RTSPServer()
server.set_service('8080')
# 创建GstRTSPMediaFactory
factory = GstRtspServer.RTSPMediaFactory()

#factory.set_launch("nvarguscamerasrc sensor-id=0 ! video/x-raw(memory:NVMM),width=1280,height=720,framerate=25/1 ! nvvidconv ! nvv4l2h265enc ! h265parse ! rtph265pay name=pay0 pt=96")
# 開啓 CSI 鏡頭z

factory.set_launch("v4l2src device=/dev/video0 ! image/jpeg,width=1280,height=720,framerate=30/1 ! jpegdec ! videoconvert ! queue max-size-time=20000000000 ! x265enc tune=zerolatency ! rtph265pay name=pay0 pt=96")
# 開啓 USB 鏡頭

factory.set_shared(True)

# 设置RTSP媒体工厂的挂载点路径
server.get_mount_points().add_factory("/test", factory)

# 启动服务器
server.attach(None)

print("RTSP server is ready")

# 设置GLib主循环，以处理GStreamer事件
main_loop = GLib.MainLoop()
try:
    main_loop.run()
except KeyboardInterrupt:
    pass

