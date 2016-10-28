            CFile f;
            f.Open(_T("Seeker_File.dat"), CFile::modeCreate |
               CFile::modeReadWrite);
            f.SeekToBegin();
            ULONGLONG ullEnd = f.SeekToEnd();