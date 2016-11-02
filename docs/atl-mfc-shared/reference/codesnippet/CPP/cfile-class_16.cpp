            TCHAR* pstrName = _T("C:\\test\\SetPath_File.dat");

            // open a file
            HANDLE hFile = ::CreateFile(pstrName, GENERIC_WRITE, FILE_SHARE_READ,
               NULL, CREATE_ALWAYS, 0, NULL);

            if (hFile != INVALID_HANDLE_VALUE)
            {
               // attach a CFile object to it
               CFile myFile(hFile);

               // At this point, myFile doesn't know the path name for the file
               // it owns because Windows doesn't associate that information
               // with the handle. Any CFileExceptions thrown by this object
               // won't have complete information.

               // Calling SetFilePath() remedies that problem by letting CFile
               // know the name of the file that's associated with the object.

               myFile.SetFilePath(pstrName);

               // write something to the file and flush it immediately
               DWORD dwValue = 1234;
               myFile.Write(&dwValue, sizeof(dwValue));
               myFile.Flush();

               // destroying the CObject here will call ::CloseHandle() on the file
            } 