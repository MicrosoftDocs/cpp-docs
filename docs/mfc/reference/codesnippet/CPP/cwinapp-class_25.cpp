// The following message map, produced by the Application Wizard, binds
// the File New, Open, and Print Setup menu commands to default
// framework implementations of these commands.
BEGIN_MESSAGE_MAP(CStdApp, CWinApp)
// Standard file based document commands
ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
// Standard print setup command
ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinApp::OnFilePrintSetup)
END_MESSAGE_MAP()