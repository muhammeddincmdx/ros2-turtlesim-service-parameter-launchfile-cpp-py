import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/lenovo/Desktop/mogi_ws/install/ros2_tutorials_py'
