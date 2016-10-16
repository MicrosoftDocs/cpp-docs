   //First free the string allocated by MFC at CWinApp startup.
   //The string is allocated before InitInstance is called.
   free((void*)m_pszExeName);
   //Change the name of the .EXE file.
   //The CWinApp destructor will free the memory.
   m_pszExeName = _tcsdup(_T("c:\\somedir\\myapp"));