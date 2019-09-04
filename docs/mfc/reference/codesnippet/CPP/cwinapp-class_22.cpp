//First free the string allocated by MFC at CWinApp startup.
//The string is allocated before InitInstance is called.
free((void*)m_pszProfileName);
//Change the name of the .INI file.
//The CWinApp destructor will free the memory.
m_pszProfileName = _tcsdup(_T("c:\\somedir\\myini.ini"));