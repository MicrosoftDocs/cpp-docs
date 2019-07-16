UINT nRowCount = m_wndReBar.GetReBarCtrl().GetRowCount();
CString msg;
msg.Format(_T("Row Count is %d"), nRowCount);
AfxMessageBox(msg);