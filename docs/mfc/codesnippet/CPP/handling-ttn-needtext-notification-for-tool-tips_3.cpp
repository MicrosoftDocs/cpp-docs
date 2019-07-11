BOOL CMyDialog::OnTtnNeedText(UINT id, NMHDR* pNMHDR, LRESULT* pResult)
{
   UNREFERENCED_PARAMETER(id);

   NMTTDISPINFO* pTTT = (NMTTDISPINFO*)pNMHDR;
   UINT_PTR nID = pNMHDR->idFrom;
   BOOL bRet = FALSE;

   if (pTTT->uFlags & TTF_IDISHWND)
   {
      // idFrom is actually the HWND of the tool
      nID = ::GetDlgCtrlID((HWND)nID);
      if (nID)
      {
         _stprintf_s(pTTT->szText, sizeof(pTTT->szText) / sizeof(TCHAR),
            _T("Control ID = %d"), nID);
         pTTT->hinst = AfxGetResourceHandle();
         bRet = TRUE;
      }
   }

   *pResult = 0;

   return bRet;
}