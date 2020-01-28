// The following code snippet shows a caret when the left
// mouse button is pressed, and sets the caret's position to
// the cursor's position.
void CMyView::OnLButtonDown(UINT nFlags, CPoint point)
{
   //create a solid caret, the width is 2, the length is 20.
   CreateSolidCaret(2, 20);

   SetCaretPos(point);
   ShowCaret();

   CView::OnLButtonDown(nFlags, point);
}