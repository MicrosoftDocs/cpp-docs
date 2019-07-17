CReBarCtrl &refReBarCtrl = m_wndReBar.GetReBarCtrl();

UINT nBandCount = refReBarCtrl.GetBandCount();
CString msg;
msg.Format(_T("Band Count is: %u"), nBandCount);
AfxMessageBox(msg);