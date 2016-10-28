            CStdioFile cfile(_T("Stdio_Seek_File.dat"), CFile::modeWrite |
               CFile::modeCreate);
            LONGLONG lOff = 1000;
            ULONGLONG lActual = cfile.Seek(lOff, CFile::begin);