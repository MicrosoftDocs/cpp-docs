BOOL CPenWidthsDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   // set timer to cause dialog to flash
   SetTimer(1, 500, NULL);
   return TRUE; // return TRUE unless you set the focus to a control
}

void CPenWidthsDlg::OnTimer(UINT_PTR nIDEvent)
{
   // cause the dialog to flash
   FlashWindow(TRUE);
   CDialog::OnTimer(nIDEvent);
}