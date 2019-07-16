// The following message map illustrates how to rebind the
// File New, Open and Print Setup menu commands to handlers that
// you implement in your CWinApp-derived class.
// Note, you can name the handler CCustomApp::OnFileNew instead of
// CCustomApp::OnMyFileNew, and likewise for the other handlers, if desired.
BEGIN_MESSAGE_MAP(CCustomApp, CWinApp)
ON_COMMAND(ID_FILE_NEW, &CCustomApp::OnMyFileNew)
ON_COMMAND(ID_FILE_OPEN, &CCustomApp::OnMyFileOpen)
ON_COMMAND(ID_FILE_PRINT_SETUP, &CCustomApp::OnMyFilePrintSetup)
END_MESSAGE_MAP()