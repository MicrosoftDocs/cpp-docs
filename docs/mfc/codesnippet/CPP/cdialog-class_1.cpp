void CMyDialog::OnMenuShowSimpleDialog()
{
   //m_pSimpleDialog initialized to NULL in the constructor of CMyDialog class
   m_pSimpleDlg = new CSimpleDlg();
   //Check if new succeeded and we got a valid pointer to a dialog object
   if (m_pSimpleDlg != NULL)
   {
      BOOL ret = m_pSimpleDlg->Create(IDD_SIMPLEDIALOG, this);

      if (!ret) //Create failed.
      {
         AfxMessageBox(_T("Error creating Dialog"));
      }

      m_pSimpleDlg->ShowWindow(SW_SHOW);
   }
   else
   {
      AfxMessageBox(_T("Error Creating Dialog Object"));
   }
}