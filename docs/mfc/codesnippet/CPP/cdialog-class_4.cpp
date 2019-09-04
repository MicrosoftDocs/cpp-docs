void CSimpleDlg::OnRButtonUp(UINT nFlags, CPoint point)
{
   UNREFERENCED_PARAMETER(nFlags);
   // Do something

   int nRet = point.x; // Just any value would do!
   EndDialog(nRet);    // This value is returned by DoModal!

   // Do something

   return; // Dialog closed and DoModal returns only here!
}