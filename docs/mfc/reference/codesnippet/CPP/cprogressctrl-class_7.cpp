// Get the step increment for the progress control.
CString str;
int incr = m_progressCtrl.GetStep();
str.Format(_T("The step increment is %d."), incr);
AfxMessageBox(str, MB_ICONEXCLAMATION);