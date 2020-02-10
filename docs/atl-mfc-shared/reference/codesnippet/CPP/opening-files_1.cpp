         TCHAR* pszFileName = _T("c:\\test\\myfile.dat");
         CFile myFile;
         CFileException fileException;

         if ( !myFile.Open( pszFileName, CFile::modeCreate |   
                 CFile::modeReadWrite, &fileException ) )
         {
            TRACE( _T("Can't open file %s, error = %u\n"),
               pszFileName, fileException.m_cause );
         }