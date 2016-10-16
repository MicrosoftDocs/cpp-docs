            CFile cfile;
            cfile.Open(_T("SetLength_File.dat"), CFile::modeCreate |
               CFile::modeReadWrite);
            ULONGLONG dwNewLength = 10000;
            cfile.SetLength(dwNewLength);