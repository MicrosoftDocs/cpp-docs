BOOL CSubDialog::OnInitDialog()
{
   CDialog::OnInitDialog();

   m_wndMyBtn.SubclassDlgItem(IDC_MYBTN, this);

   return TRUE;
}