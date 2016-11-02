            CFileFind finder;
            static const TCHAR szFileToFind[] = _T("C:\\WINDOWS\\SYSTEM.INI");

            BOOL bResult = finder.FindFile(szFileToFind);

            if (bResult)
            {
               finder.FindNextFile();

               TRACE(_T("Root of %s is %s\n"), szFileToFind, 
                  (LPCTSTR)finder.GetRoot());

               TRACE(_T("Title of %s is %s\n"), szFileToFind, 
                  (LPCTSTR)finder.GetFileTitle());

               TRACE(_T("Path of %s is %s\n"), szFileToFind,
                  (LPCTSTR)finder.GetFilePath());

               TRACE(_T("URL of %s is %s\n"), szFileToFind,
                  (LPCTSTR)finder.GetFileURL());

               TRACE(_T("Name of %s is %s\n"), szFileToFind,
                  (LPCTSTR)finder.GetFileName());

               finder.Close();
            }
            else
            {
               TRACE(_T("You have no %s file.\n"), szFileToFind);
            }