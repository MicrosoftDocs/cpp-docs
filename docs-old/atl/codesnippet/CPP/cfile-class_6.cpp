            CFile cfile;
            cfile.Open(_T("SetLength_File.dat"), CFile::modeCreate |
               CFile::modeReadWrite);
            ULONGLONG dwNewLength = 10000;
            cfile.SetLength(dwNewLength);
            CFileStatus status;
            if(cfile.GetStatus(status))    // virtual member function
            {
               TRACE(_T("File size = %u\n"), status.m_size);
            }
            TCHAR* pszFileName = _T("SetLength_File.dat");
            if(CFile::GetStatus(pszFileName, status))   // static function
            {
               TRACE(_T("Full file name = %s\n"), status.m_szFullName);
            }