// CMainFrame::OnHello() is a menu command handler for the CMainFrame
// class, which in turn is a CMDIFrameWnd-derived class.
// It shows the creation of a Windows MDI child window using a custom
// window class. The custom window class is registered in
// CHelloWnd::Create(). CHelloWnd is a CMDIChildWnd-derived class.
void CMainFrame::OnHello()
{
   CHelloWnd *pHelloWnd = new CHelloWnd;
   if (!pHelloWnd->Create(_T("Hello"),
                          WS_CHILD | WS_VISIBLE | WS_OVERLAPPEDWINDOW,
                          rectDefault, this))
      return;

   // the default PostNcDestroy handler will delete this object when destroyed
}