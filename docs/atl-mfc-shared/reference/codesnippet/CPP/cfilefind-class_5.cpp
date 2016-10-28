            // This code fragment shows all of the files in the root directory
            // of drive C: which have either the hidden attribute or the system
            // attribute, or both.

            CFileFind finder;

            BOOL bWorking = finder.FindFile(_T("C:\\*.*"));

            while (bWorking)
            {
               bWorking = finder.FindNextFile();

               if (finder.MatchesMask(FILE_ATTRIBUTE_HIDDEN | 
                  FILE_ATTRIBUTE_SYSTEM))
               {
                  _tprintf_s(_T("%s\n"), (LPCTSTR) finder.GetFileName());
               }
            }