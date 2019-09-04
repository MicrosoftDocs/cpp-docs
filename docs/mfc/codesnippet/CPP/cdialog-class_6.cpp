BOOL CSimpleDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   // TODO: Add extra initialization here
   m_cMyEdit.SetWindowText(_T("My Name")); // Initialize control values
   m_cMyList.ShowWindow(SW_HIDE);          // Show or hide a control, etc.

   return TRUE; // return TRUE unless you set the focus to a control
   // EXCEPTION: OCX Property Pages should return FALSE
}