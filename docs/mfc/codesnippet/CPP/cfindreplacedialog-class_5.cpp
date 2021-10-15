LRESULT CMyRichEditView::OnFindReplace(WPARAM wparam, LPARAM lparam)
{
   UNREFERENCED_PARAMETER(wparam);

   CFindReplaceDialog *pDlg = CFindReplaceDialog::GetNotifier(lparam);

   if (NULL != pDlg)
   {
      // Use pDlg as a pointer to the existing FindReplace dlg to
      // call CFindReplaceDialog member functions
      if (pDlg->IsTerminating())
      {
         CString csFindString;
         CString csReplaceString;

         csFindString = pDlg->GetFindString();
         csReplaceString = pDlg->GetReplaceString();

         VERIFY(AfxGetApp()->WriteProfileString(AfxGetApp()->m_pszAppName,
                                                _T("FindString"), csFindString));
         VERIFY(AfxGetApp()->WriteProfileString(AfxGetApp()->m_pszAppName,
                                                _T("ReplaceString"), csReplaceString));
      }
   }

   return 0;
}