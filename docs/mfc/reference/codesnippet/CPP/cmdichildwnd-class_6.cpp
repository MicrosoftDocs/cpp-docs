// CMainFrame::OnRestoreWindow() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived class.
// It restores the current active MDI child window from maximized
// or minimized size.
void CMainFrame::OnRestoreWindow()
{
   BOOL maximized;
   CMDIChildWnd *child = MDIGetActive(&maximized);
   if (child && (maximized || child->IsIconic()))
      child->MDIRestore(); // or MDIRestore(child);
}