void CMyHeaderCtrl::OnMouseMove(UINT nFlags, CPoint point)
{
   SetHotDivider(point);

   CHeaderCtrl::OnMouseMove(nFlags, point);
}