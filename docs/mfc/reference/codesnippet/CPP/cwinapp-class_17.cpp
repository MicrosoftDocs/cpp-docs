// The following code fragment is taken from CMyApp::InitInstance.
// CMyApp is derived from CWinApp.

// The main window has been initialized, so show and update it
// using the nCmdShow parameter passed to the application when it
// was first launched.
// pMainFrame is the main MDI frame window of our app and is derived
// from CMDIFrameWnd.
pMainFrame->ShowWindow(m_nCmdShow);
pMainFrame->UpdateWindow();