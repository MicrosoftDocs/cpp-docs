// Parse command line for standard shell commands, DDE, file open
CCommandLineInfo cmdInfo;
ParseCommandLine(cmdInfo);

if (cmdInfo.m_nShellCommand == CCommandLineInfo::FileNew)
{
   if (!pMainFrame->LoadMDIState(GetRegSectionPath()))
   {
      m_pStartDocTemplate->OpenDocumentFile(NULL);
   }
}
else
{
   // Dispatch commands specified on the command line
   if (!ProcessShellCommand(cmdInfo))
   {
      return FALSE;
   }
}