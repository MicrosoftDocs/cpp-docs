            CFile f;
            CFileException e;
            TCHAR* pszFileName = _T("Open_File.dat");
            if(!f.Open(pszFileName, CFile::modeCreate | CFile::modeWrite, &e))
            {
               TRACE(_T("File could not be opened %d\n"), e.m_cause);
            }