CString strKey;
ACCEL accel;
accel.fVirt = FVIRTKEY | FCONTROL;
accel.key = VK_DOWN;

CMFCAcceleratorKey helper(&accel);
helper.Format(strKey);