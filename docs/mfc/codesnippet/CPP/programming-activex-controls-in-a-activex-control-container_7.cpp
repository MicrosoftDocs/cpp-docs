BOOL CContainerDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   m_circctl.SetCaption(_T("Circ 2 Control"));
   if (!m_circctl.GetCircleShape())
      m_circctl.SetCircleShape(TRUE);

   return TRUE;  // return TRUE unless you set the focus to a control
}