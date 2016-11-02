            CFile cfile;
            cfile.Open(_T("Write_File.dat"), CFile::modeCreate | 
               CFile::modeReadWrite);
            char pbufWrite[100];
            memset(pbufWrite, 'a', sizeof(pbufWrite));
            cfile.Write(pbufWrite, 100);         
            cfile.Flush();