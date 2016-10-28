   CFile fileInput;
   CFileException ex;

   // try to open a file for reading.  
   // The file will certainly not
   // exist because there are too many explicit
   // directories in the name.

   // if the call to Open() fails, ex will be
   // initialized with exception
   // information.  the call to ex.ReportError() will
   // display an appropriate
   // error message to the user, such as
   // "\Too\Many\Bad\Dirs.DAT contains an
   // invalid path."  The error message text will be
   // appropriate for the
   // file name and error condition.

   if (!fileInput.Open(_T("\\Too\\Many\\Bad\\Dirs.DAT"), CFile::modeRead, &ex))
   {
      ex.ReportError();
   }
   else
   {
      // the file was opened, so do whatever work
      // with fileInput we were planning...

      fileInput.Close();
   }