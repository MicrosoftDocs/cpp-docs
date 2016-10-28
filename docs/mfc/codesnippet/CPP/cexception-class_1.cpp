   CFile* pFile = NULL;

   // Constructing a CFile object with this override may throw
   // a CFile exception, and won't throw any other exceptions.
   // Calling CString::Format() may throw a CMemoryException,
   // so we have a catch block for such exceptions, too. Any
   // other exception types this function throws will be
   // routed to the calling function.

   // Note that this example performs the same actions as the 
   // example for CATCH, but uses C++ try/catch syntax instead
   // of using the MFC TRY/CATCH macros. This sample must use
   // CException::Delete() to delete the exception objects
   // before closing the catch block, while the CATCH example
   // implicitly performs the deletion via the macros.

   try
   {
      pFile = new CFile(_T("C:\\WINDOWS\\SYSTEM.INI"),
         CFile::modeRead | CFile::shareDenyNone);

      ULONGLONG ullLength = pFile->GetLength();

      CString str;
      str.Format(_T("Your SYSTEM.INI file is %u bytes long."), ullLength);

      AfxMessageBox(str);
   }
   catch(CFileException* pEx)
   {
      // Simply show an error message to the user.

      pEx->ReportError();
      pEx->Delete();
   }
   catch(CMemoryException* pEx)
   {
      // We can't recover from this memory exception, so we'll
      // just terminate the app without any cleanup. Normally, an
      // an application should do everything it possibly can to
      // clean up properly and _not_ call AfxAbort().

      pEx->Delete();
      AfxAbort();
   }

   // If an exception occurrs in the CFile constructor,
   // the language will free the memory allocated by new
   // and will not complete the assignment to pFile.
   // Thus, our clean-up code needs to test for NULL.

   if (pFile != NULL)
   {
      pFile->Close();
      delete pFile;
   }   