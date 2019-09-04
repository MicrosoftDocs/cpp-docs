//First free the string allocated by MFC at CWinApp startup.
//The string is allocated before InitInstance is called.
free((void*)m_pszAppName);
//Change the name of the application file.
//The CWinApp destructor will free the memory.
m_pszAppName = _tcsdup(_T("c:\\somedir\\myapp.exe"));