         CFile theFile;
         TCHAR* szFileName = _T("c:\\test\\myfile.dat");
         BOOL bOpenOK;

         CFileStatus status;
         if( CFile::GetStatus( szFileName, status ) )
         {
            // Open the file without the Create flag
            bOpenOK = theFile.Open( szFileName, 
               CFile::modeWrite );
         }
         else
         {
            // Open the file with the Create flag
            bOpenOK = theFile.Open( szFileName, 
               CFile::modeCreate | CFile::modeWrite );
         }