            CStdioFile fileTest;
            TCHAR* pszFileName = _T("Abort_File.dat");

            // do stuff that may cause exceptions
            CFileException ex;
            if (!fileTest.Open(pszFileName, CFile::modeWrite, &ex))
            {
               ex.ReportError();
               fileTest.Abort();   // close file safely and quietly
            }