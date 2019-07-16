int CMyApp::ExitInstance()
{
   if (m_pMySampleMem)
      delete m_pMySampleMem;

   DoCleanup();

   return CWinApp::ExitInstance();
}