BOOL CCustomDialog::OnInitDialog()
{
   CDialog::OnInitDialog();
   CRect rect(85, 110, 180, 210);

   m_edit.Create(WS_CHILD | WS_VISIBLE | WS_TABSTOP |
                     ES_AUTOHSCROLL | WS_BORDER,
                 rect, this, IDC_EXTRA_EDIT);
   m_edit.SetFocus();
   return FALSE;
}