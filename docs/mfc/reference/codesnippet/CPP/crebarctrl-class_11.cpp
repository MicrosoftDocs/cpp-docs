int nCount = m_wndReBar.GetReBarCtrl().GetBandCount();
CString strText;
REBARBANDINFO rbbi = {0};
rbbi.cbSize = sizeof(rbbi);
for (int i = 0; i < nCount; i++)
{
   strText.Format(_T("Band #: %d"), i);
   rbbi.lpText = strText.GetBuffer();
   rbbi.cch = strText.GetLength() + 1;
   rbbi.fMask = RBBIM_TEXT;

   m_wndReBar.GetReBarCtrl().SetBandInfo(i, &rbbi);

   strText.ReleaseBuffer();
}