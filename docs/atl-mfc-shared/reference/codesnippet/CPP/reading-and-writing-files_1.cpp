         TCHAR   szBuffer[256]; 
         UINT    nActual = 0; 
         CFile   myFile;

         if ( myFile.Open( _T("c:\\test\\myfile.dat"), CFile::modeCreate |   
            CFile::modeReadWrite ) )
         {
            myFile.Write( szBuffer, sizeof( szBuffer ) ); 
            myFile.Flush();
            myFile.Seek( 0, CFile::begin );
            nActual = myFile.Read( szBuffer, sizeof( szBuffer ) ); 
         }