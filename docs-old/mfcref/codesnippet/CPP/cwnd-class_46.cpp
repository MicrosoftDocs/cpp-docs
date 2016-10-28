// This example would make the dialog box transparent by
// changing the dialog window's extended styles.
int CAboutDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CDialog::OnCreate(lpCreateStruct) == -1)
      return -1;

   ModifyStyleEx(0, WS_EX_TRANSPARENT);   
   
   return 0;
}