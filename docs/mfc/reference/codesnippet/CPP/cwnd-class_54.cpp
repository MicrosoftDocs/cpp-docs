void CMyDlg::SetSpinRange()
{
   //set the min and max range of the up/down or spin control
   SendDlgItemMessage(IDC_SPIN1, UDM_SETRANGE, 0, (LPARAM)MAKELONG(8, 1));
}