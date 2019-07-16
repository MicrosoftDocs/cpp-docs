// In this example, tool tips were set up to
// pop up when the user moves the mouse
// over this edit control.
// If the mouse is moved to the upper left-hand
// corner, the tool tip would disappear because of
// calling CancelToolTips.
void CMyEdit::OnMouseMove(UINT nFlags, CPoint point)
{
   CRect corner(0, 0, 10, 10);
   if (corner.PtInRect(point))
      CancelToolTips();
   CEdit::OnMouseMove(nFlags, point);
}