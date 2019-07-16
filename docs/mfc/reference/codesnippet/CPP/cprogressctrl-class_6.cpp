// Display the current state of the progress control.
CString str = _T("The progress control state is ");
int progState = m_progressCtrl.GetState();
if (progState == PBST_NORMAL)
   str += _T("NORMAL");
else if (progState == PBST_PAUSED)
   str += _T("PAUSED");
else if (progState == PBST_ERROR)
   str += _T("ERROR");
else
   str += _T("unknown");
AfxMessageBox(str, MB_ICONEXCLAMATION);