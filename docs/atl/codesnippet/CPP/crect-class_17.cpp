BOOL CMyDlg::OnInitDialog()
{
   CDialog::OnInitDialog();

   // CWnd::GetWindowRect() takes a LPRECT, but we can
   // simply pass our CRect object because of the LPRECT
   // cast operator in the CRect class.

   CRect rect;
   GetWindowRect(rect);

   // Similarly, CWnd::MoveWindow() takes a LPCRECT but
   // the LPCRECT cast operator is used implicitly:

   MoveWindow(rect, FALSE);

   return TRUE;
}