void CMyDataPathProperty::OnDataAvailable(DWORD dwSize, DWORD bscfFlag)
{
   CListCtrl list_ctrl;
   CEdit *edit = list_ctrl.GetEditControl();
   if ((bscfFlag & BSCF_FIRSTDATANOTIFICATION) && edit->m_hWnd)
   {
      edit->SetSel(0, -1);
      edit->Clear();
   }

   if (dwSize > 0)
   {
      CString string;
      LPTSTR str = string.GetBuffer(dwSize);
      UINT nBytesRead = Read(str, dwSize);
      if (nBytesRead > 0)
      {
         string.ReleaseBuffer(nBytesRead);
         edit->SetSel(-1, -1);
         edit->ReplaceSel(string);
      }
   }
}