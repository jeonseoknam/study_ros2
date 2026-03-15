import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/misys/robotics_lecture/parameter/param_ws/install/turtle_param_control'
