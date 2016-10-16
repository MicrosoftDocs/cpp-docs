         HANDLE hFile = CreateFile(_T("CFile_File.dat"),
            GENERIC_WRITE, FILE_SHARE_READ,
            NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

         if (hFile == INVALID_HANDLE_VALUE)
         {
            AfxMessageBox(_T("Couldn't create the file!"));
         }
         else
         {
            // Attach a CFile object to the handle we have.
            CFile myFile(hFile);

            static const TCHAR sz[] = _T("I love CFile!");

            // write string
            myFile.Write(sz, sizeof(sz));

            // We need to call Close() explicitly. Note that there's no need to 
            // call CloseHandle() on the handle returned by the API because 
            // Close() automatically calls CloseHandle() for us.
            myFile.Close();