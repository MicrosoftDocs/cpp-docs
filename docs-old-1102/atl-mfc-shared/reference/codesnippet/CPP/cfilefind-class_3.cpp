            // This code fragment prints out a very verbose directory
            // listing for all the files in the root directory on the
            // C: drive. After the file's name, each attribute of the
            // file is printed, as are the creation, last access, and 
            // last write times.

            CFileFind finder;

            BOOL bWorking = finder.FindFile(_T("C:\\*.*"));

            while (bWorking)
            {
               bWorking = finder.FindNextFile();

               _tprintf_s(_T("%s\n\t"), (LPCTSTR)finder.GetFileName());
               _tprintf_s(_T("%c"), finder.IsArchived()   ? 'A' : 'a');
               _tprintf_s(_T("%c"), finder.IsCompressed() ? 'C' : 'c');
               _tprintf_s(_T("%c"), finder.IsHidden()     ? 'H' : 'h');
               _tprintf_s(_T("%c"), finder.IsNormal()     ? 'N' : 'n');
               _tprintf_s(_T("%c"), finder.IsReadOnly()   ? 'R' : 'r');
               _tprintf_s(_T("%c"), finder.IsSystem()     ? 'S' : 's');
               _tprintf_s(_T("%c"), finder.IsTemporary()  ? 'T' : 't');

               _tprintf_s(_T("\t%I64u byte(s)\n"), finder.GetLength());
               
               CTime tempTime;
               CString str;
               
               _tprintf_s(_T("\tCreated    : "));
               if (finder.GetCreationTime(tempTime))
               {
                  str = tempTime.Format(_T("%c"));
                  _tprintf_s(_T("%s\n"), (LPCTSTR) str);
               }
               else
               {
                  _tprintf_s(_T("(unavailable)\n"));
               }

               _tprintf_s(_T("\tLast Access: "));
               if (finder.GetLastAccessTime(tempTime))
               {
                  str = tempTime.Format(_T("%c"));
                  _tprintf_s(_T("%s\n"), (LPCTSTR) str);
               }
               else
               {
                  _tprintf_s(_T("(unavailable)\n"));
               }

               _tprintf_s(_T("\tLast Write : "));
               if (finder.GetLastWriteTime(tempTime))
               {
                  str = tempTime.Format(_T("%c"));
                  _tprintf_s(_T("%s\n"), (LPCTSTR) str);
               }
               else
               {
                  _tprintf_s(_T("(unavailable)\n"));
               }

               _tprintf_s(_T("\n"));
            } 