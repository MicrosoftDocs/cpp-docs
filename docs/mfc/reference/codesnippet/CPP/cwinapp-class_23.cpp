//First free the string allocated by MFC at CWinApp startup.
//The string is allocated before InitInstance is called.
free((void*)m_pszRegistryKey);
//Change the name of the registry key.
//The CWinApp destructor will free the memory.
m_pszRegistryKey = _tcsdup(
    _T("HKEY_CURRENT_USER\\Software\\mycompany\\myapp\\thissection\\thisvalue"));