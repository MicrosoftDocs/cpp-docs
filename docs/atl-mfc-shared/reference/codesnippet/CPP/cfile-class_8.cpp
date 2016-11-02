            CFile cfile;
            cfile.Open(_T("LockRange_File.dat"), CFile::modeCreate |
               CFile::modeReadWrite);
            ULONGLONG dwPos = 10;
            ULONGLONG dwCount = 100;
            cfile.LockRange(dwPos, dwCount);

            // do something with the file

            cfile.UnlockRange(dwPos, dwCount);