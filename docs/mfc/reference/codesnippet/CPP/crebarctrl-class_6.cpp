int nCount = m_wndReBar.GetReBarCtrl().GetRowCount();
for (int i = 0; i < nCount; i++)
{
   UINT nHeight = m_wndReBar.GetReBarCtrl().GetRowHeight(i);
   CString msg;
   msg.Format(_T("Height of row %d is %u"), i, nHeight);
   AfxMessageBox(msg);
}