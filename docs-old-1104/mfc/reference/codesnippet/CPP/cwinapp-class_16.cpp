   if (m_lpCmdLine[0] == _T('\0'))
   {
      // Create a new (empty) document.
      OnFileNew();
   }
   else
   {
      // Open a file passed as the first command line parameter.
      OpenDocumentFile(m_lpCmdLine);
   }