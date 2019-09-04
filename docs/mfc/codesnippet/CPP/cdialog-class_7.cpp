void CSimpleDlg::OnOK()
{
   // TODO: Add extra validation here

   // Ensure that your UI got the necessary input
   // from the user before closing the dialog. The
   // default OnOK will close this.
   if (m_nMyValue == 0) // Is a particular field still empty?
   {
      // Inform the user that he can't close the dialog without
      // entering the necessary values and don't close the
      // dialog.
      AfxMessageBox(_T("Please enter a value for MyValue"));
      return;
   }

   CDialog::OnOK(); // This will close the dialog and DoModal will return.
}