            CFile cfile;
            cfile.Open(_T("Seek_File.dat"), CFile::modeCreate |
               CFile::modeReadWrite);
            LONGLONG lOffset = 1000;
            ULONGLONG lActual;
            lActual = cfile.Seek(lOffset, CFile::begin);