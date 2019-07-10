// The following code fragment is from CMyWinApp::InitInstance.
// CMyWinApp is derived from CWinApp.

// Establish the document type
// supported by the application
AddDocTemplate(new CSingleDocTemplate(IDR_MAINFRAME,
   RUNTIME_CLASS(CMyDoc),
   RUNTIME_CLASS(CMainFrame),       // main SDI frame window
   RUNTIME_CLASS(CMyView)));