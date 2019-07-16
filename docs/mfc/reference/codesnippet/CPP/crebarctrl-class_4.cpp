CRect rc;
m_wndReBar.GetReBarCtrl().GetRect(0, &rc);
CString msg;
msg.Format(_T("rect.left = %d, rect.top = %d, ")
           _T("rect.right = %d, rect.bottom = %d"),
           rc.left,
           rc.top, rc.right, rc.bottom);
AfxMessageBox(msg);