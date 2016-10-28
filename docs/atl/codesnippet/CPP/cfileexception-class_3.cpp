         try
         {
            CFile f(_T("M_Cause_File.dat"), CFile::modeWrite);
         }
         catch(CFileException* e)
         {
            if( e->m_cause == CFileException::fileNotFound)
               TRACE(_T("ERROR: File not found\n"));
            e->Delete();
         }