// CMainFrame::OnFileNewCMdiChildWnd() is a menu command handler for the
// CMainFrame class, which in turn is a CMDIFrameWnd-derived class.
// It shows the creation of a standard Windows MDI child window using
// the registered CMDIChildWnd class.
void CMainFrame::OnFileNewMdiChildWnd()
{
   CMDIChildWnd *pMDIChildWnd = new CMDIChildWnd;
   VERIFY(pMDIChildWnd->Create(
       NULL,                                        // standard CMDIChildWnd class
       _T("My MDIChildWnd"),                        // caption of MDI child window
       WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW, // window styles
       rectDefault,                                 // default rectangle size
       this));                                      // parent window; can be NULL

   // the default PostNcDestroy handler will delete this object when destroyed
}