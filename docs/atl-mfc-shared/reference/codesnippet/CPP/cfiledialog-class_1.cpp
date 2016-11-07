            #define MAX_CFileDialog_FILE_COUNT 99
            #define FILE_LIST_BUFFER_SIZE ((MAX_CFileDialog_FILE_COUNT * (MAX_PATH + 1)) + 1)

            CString fileName;
            wchar_t* p = fileName.GetBuffer( FILE_LIST_BUFFER_SIZE );
            CFileDialog dlgFile(TRUE);
            OPENFILENAME& ofn = dlgFile.GetOFN( );
            ofn.Flags |= OFN_ALLOWMULTISELECT;
            ofn.lpstrFile = p;
            ofn.nMaxFile = FILE_LIST_BUFFER_SIZE;

            dlgFile.DoModal();
            fileName.ReleaseBuffer();

            wchar_t* pBufEnd = p + FILE_LIST_BUFFER_SIZE - 2;
            wchar_t* start = p;
            while( ( p < pBufEnd ) && ( *p ) )
              p++;
            if( p > start )
            {
              _tprintf(_T("Path to folder where files were selected:  %s\r\n\r\n"), start );
              p++;

              int fileCount = 1;
              while( ( p < pBufEnd ) && ( *p ) )
              {
                start = p;
                while( ( p < pBufEnd ) && ( *p ) )
                  p++;
                if( p > start )
                  _tprintf(_T("%2d. %s\r\n"), fileCount, start );
                p++;
                fileCount++;
              }
            }