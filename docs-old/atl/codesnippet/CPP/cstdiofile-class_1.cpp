            TCHAR* pFileName = _T("CStdio_File.dat");
            CStdioFile f1;
            if(!f1.Open(pFileName, CFile::modeCreate | CFile::modeWrite 
               | CFile::typeText)) 
            {
               TRACE(_T("Unable to open file\n"));
            }

            CStdioFile f2(stdout);
            try
            {
               CStdioFile f3( pFileName,
                  CFile::modeCreate | CFile::modeWrite | CFile::typeText );
            }
            catch(CFileException* pe)
            {
               TRACE(_T("File could not be opened, cause = %d\n"),
                  pe->m_cause);
               pe->Delete();
            }