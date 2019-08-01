void CMyAxUICtrl::OnLButtonDown(UINT nFlags, CPoint point)
{
   if (InCircle(point))
      FireClickIn(point.x, point.y);

   COleControl::OnLButtonDown(nFlags, point);
}