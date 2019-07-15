// CMainFrame::OnMaximizeWindow() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived
// class. It maximizes the current active MDI child window.
void CMainFrame::OnMaximizeWindow()
{
   BOOL maximized;
   CMDIChildWnd *child = MDIGetActive(&maximized);
   if (child && (!maximized))
      child->MDIMaximize(); // or MDIMaximize(child);
}