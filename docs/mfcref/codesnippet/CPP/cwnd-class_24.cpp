// This sample shows how to avoid any button handling in base class,
// if any, and call the default window procedure directly.
void CMyDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);
   UNREFERENCED_PARAMETER(point);

   CWnd::Default();
}