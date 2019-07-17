CPalette *pPalette = m_wndReBar.GetReBarCtrl().GetPalette();
if (pPalette)
{
   int nEntries = pPalette->GetEntryCount();
   CString msg;
   msg.Format(_T("Number of palette entries: %d"), nEntries);
   AfxMessageBox(msg);
}
else
{
   AfxMessageBox(_T("No palette!"));
}