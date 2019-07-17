DWORD width = m_monthCalCtrl.GetMaxTodayWidth();
CString str;
str.Format(_T("The maximum today width is %d."), width);
AfxMessageBox(str, MB_ICONINFORMATION);