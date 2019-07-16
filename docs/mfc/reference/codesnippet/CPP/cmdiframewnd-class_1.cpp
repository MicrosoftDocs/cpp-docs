// Create main MDI Frame window. CMainFrame is a CMDIFrameWnd-derived
// class. The default CFrameWnd::PostNcDestroy() handler will delete this
// object when destroyed.
CMainFrame *pMainFrame = new CMainFrame;