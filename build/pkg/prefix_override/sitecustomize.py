import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/habiba-elghazouly/Tsk2_ws/install/pkg'
