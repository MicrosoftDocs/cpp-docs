int OpenMyFileMap()
{
   // Create the file-mapping object.
   CAtlFileMappingBase myFileMap;

   // Create a file.
   CAtlFile myFile;
   myFile.Create(_T("myMapTestFile"),
      GENERIC_READ|GENERIC_WRITE|STANDARD_RIGHTS_ALL,
      FILE_SHARE_READ|FILE_SHARE_WRITE,
      OPEN_ALWAYS);

   // The file handle.
   HANDLE hFile = (HANDLE)myFile;

   // Test the file has opened successfully.
   ATLASSERT(hFile != INVALID_HANDLE_VALUE);

   // Open the file for file-mapping.
   // Must give a size as the file is zero by default.
   if (myFileMap.MapFile(hFile,
      1024,
      0,
      PAGE_READWRITE,
      FILE_MAP_READ) != S_OK)
   {
      CloseHandle(hFile);
      return 0;
   }

   // Confirm the size of the mapping file.
   ATLASSERT(myFileMap.GetMappingSize() == 1024);

   // Now the file-mapping object is open, a second
   // process could access the filemap object to exchange
   // data.

   return 0;
}