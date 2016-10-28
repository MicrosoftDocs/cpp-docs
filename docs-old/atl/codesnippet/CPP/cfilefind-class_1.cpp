            CFileFind finder;
            BOOL bWorking = finder.FindFile(_T("*.*"));
            while (bWorking)
            {
               bWorking = finder.FindNextFile();
               TRACE(_T("%s\n"), (LPCTSTR)finder.GetFileName());
            } 