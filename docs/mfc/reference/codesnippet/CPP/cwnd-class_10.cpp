// Moves MDI child windows to the top when a mouse passes
// over it. CMdiView is derived from CView.
void CMdiView::OnMouseMove(UINT nFlags, CPoint point) 
{
   UNREFERENCED_PARAMETER(nFlags);
   UNREFERENCED_PARAMETER(point);

   GetParentFrame()->BringWindowToTop();
}