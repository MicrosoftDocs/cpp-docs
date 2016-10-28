   // Declare the temporary file object
   CAtlTemporaryFile myTempFile;

   // Create the temporary file, without caring where it
   // will be created, but with both read and write access.
   ATLVERIFY (myTempFile.Create(NULL, GENERIC_READ|GENERIC_WRITE) == S_OK);

   // Create some data to write to the file

   int nBuffer[100];
   DWORD bytes_written = 0, bytes_read = 0;
   int i;

   for (i = 0; i < 100; i++)
      nBuffer[i] = i;

   // Write some data to the file
   myTempFile.Write(&nBuffer, sizeof(nBuffer), &bytes_written);

   // Confirm it was written ok
   ATLASSERT(bytes_written == sizeof(nBuffer));

   // Flush the data to disk
   ATLVERIFY(myTempFile.Flush() == S_OK);

   // Reset the file pointer to the beginning of the file
   ATLVERIFY(myTempFile.Seek(0, FILE_BEGIN) == S_OK);

   // Read in the data
   myTempFile.Read(&nBuffer, sizeof(nBuffer), bytes_read);

   // Confirm it was read ok
   ATLASSERT(bytes_read == sizeof(nBuffer));

   // Close the file, making a copy of it at another location
   ATLVERIFY(myTempFile.Close(_T("c:\\temp\\mydata.tmp")) == S_OK);