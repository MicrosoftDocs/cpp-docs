if (NULL == m_pTestDlg)
{
   m_pTestDlg = new CTestDialog(this);
   m_pTestDlg->Create(CTestDialog::IDD, this);
}
m_pTestDlg->ShowWindow(SW_SHOW);