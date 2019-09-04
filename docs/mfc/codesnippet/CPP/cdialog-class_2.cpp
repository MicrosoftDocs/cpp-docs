void CMyDialog::OnMenuShowAboutDialog()
{
   // Construct the dialog box passing the
   // ID of the dialog template resource
   CDialog aboutDlg(IDD_ABOUTBOX);

   // Create and show the dialog box
   INT_PTR nRet = -1;
   nRet = aboutDlg.DoModal();

   // Handle the return value from DoModal
   switch (nRet)
   {
   case -1:
      AfxMessageBox(_T("Dialog box could not be created!"));
      break;
   case IDABORT:
      // Do something
      break;
   case IDOK:
      // Do something
      break;
   case IDCANCEL:
      // Do something
      break;
   default:
      // Do something
      break;
   };
}