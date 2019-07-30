// CMainFrame::OnCloseWindow() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived
// class. It closes and destroys the current active MDI child window.
void CMainFrame::OnCloseWindow()
{
   CMDIChildWnd *child = MDIGetActive();
   if (child)
      child->MDIDestroy();
}