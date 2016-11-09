//A second example for CFile::Open.
//This function uses CFile to copy binary files.
bool BinaryFileCopy(LPCTSTR pszSource, LPCTSTR pszDest)
{
   // constructing these file objects doesn't open them
   CFile sourceFile;
   CFile destFile;

   // we'll use a CFileException object to get error information
   CFileException ex;

   // open the source file for reading
   if (!sourceFile.Open(pszSource,
      CFile::modeRead | CFile::shareDenyWrite, &ex))
   {
      // complain if an error happened
      // no need to delete the ex object

      TCHAR szError[1024];
      ex.GetErrorMessage(szError, 1024);
      _tprintf_s(_T("Couldn't open source file: %1024s"), szError);
      return false;
   }
   else
   {
      if (!destFile.Open(pszDest, CFile::modeWrite |
         CFile::shareExclusive | CFile::modeCreate, &ex))
      {
         TCHAR szError[1024];
         ex.GetErrorMessage(szError, 1024);
         _tprintf_s(_T("Couldn't open source file: %1024s"), szError);

         sourceFile.Close();
         return false;
      }

      BYTE buffer[4096];
      DWORD dwRead;

      // Read in 4096-byte blocks,
      // remember how many bytes were actually read,
      // and try to write that many out. This loop ends
      // when there are no more bytes to read.
      do
      {
         dwRead = sourceFile.Read(buffer, 4096);
         destFile.Write(buffer, dwRead);
      }
      while (dwRead > 0);

      // Close both files

      destFile.Close();
      sourceFile.Close();
   }

   return true;
}