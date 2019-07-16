// Resize the edit control contained in the view to
// fill the entire view when the view's window is
// resized. CMdiView is a CView derived class.
void CMdiView::OnSize(UINT nType, int cx, int cy)
{
   CView::OnSize(nType, cx, cy);
   // Resize edit to fill the whole view.
   // OnSize can be called before OnInitialUpdate
   // so make sure the edit control has been created.
   if (::IsWindow(m_Edit.GetSafeHwnd()))
   {
      m_Edit.MoveWindow(0, 0, cx, cy);
   }
}