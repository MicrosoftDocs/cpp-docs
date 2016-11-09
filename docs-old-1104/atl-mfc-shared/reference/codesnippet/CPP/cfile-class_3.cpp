            try
            {
               // try to open the file
               CFile sysFile(_T("C:\\WINDOWS\\SYSTEM.INI"), CFile::modeRead);

               // print out path name and title information
               _tprintf_s(_T("Path is : \"%s\"\n"),
                  (LPCTSTR) sysFile.GetFilePath());
               _tprintf_s(_T("Name is : \"%s\"\n"),
                  (LPCTSTR) sysFile.GetFileName());
               _tprintf_s(_T("Title is: \"%s\"\n"), 
                  (LPCTSTR) sysFile.GetFileTitle());

               // close the file handle
               sysFile.Close();
            }
            catch (CFileException* pEx)
            {
               // if an error occurs, just make a message box
               pEx->ReportError();
               pEx->Delete();
            }