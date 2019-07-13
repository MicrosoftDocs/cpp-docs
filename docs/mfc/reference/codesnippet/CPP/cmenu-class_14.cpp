// The code fragment shows how to get the File menu from the
// application window and displays it as a floating popup menu
// when the right mouse button is clicked in view.
// CMdiView is a CView-derived class.
void CMdiView::OnRButtonDown(UINT nFlags, CPoint point)
{
   CView::OnRButtonDown(nFlags, point);

   CMenu *menu_bar = AfxGetMainWnd()->GetMenu();
   CMenu *file_menu = menu_bar->GetSubMenu(0);
   ASSERT(file_menu);

   ClientToScreen(&point);
   file_menu->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x,
                             point.y, this);
}