void CMyDialog::OnMenuShowSimpleModal()
{
   CSimpleDlg myDlg;
   INT_PTR nRet = myDlg.DoModal();

   if (nRet == IDOK || nRet == 5)
   {
      AfxMessageBox(_T("Dialog closed successfully"));
   }
}