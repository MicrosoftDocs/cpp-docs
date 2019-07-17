// CMainFrame::OnActivateNextWindow() is a menu command handler for
// CMainFrame class, which in turn is a CMDIFrameWnd-derived class.
// It activates the child window immediately behind the currently
// active child window and places the currently active child window
// behind all other child windows.
void CMainFrame::OnActivateNextWindow()
{
   MDINext();
}