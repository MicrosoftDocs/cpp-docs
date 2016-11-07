   //First free the string allocated by MFC at CWinApp startup.
   //The string is allocated before InitInstance is called.
   free((void*)m_pszHelpFilePath);
   //Change the name of the .HLP file.
   //The CWinApp destructor will free the memory.
   m_pszHelpFilePath = _tcsdup(_T("c:\\somedir\\myhelp.hlp"));