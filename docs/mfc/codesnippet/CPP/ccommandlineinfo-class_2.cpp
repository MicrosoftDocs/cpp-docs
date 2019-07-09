// From CMyWinApp::InitInstance

// Parse command line for standard shell commands, DDE, file open
CCommandLineInfo cmdInfo;
ParseCommandLine(cmdInfo);

// DON'T display a new MDI child window during startup!!!
cmdInfo.m_nShellCommand = CCommandLineInfo::FileNothing;

// Dispatch commands specified on the command line
if (!ProcessShellCommand(cmdInfo))
{
   return FALSE;
}