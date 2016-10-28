   // Typically you do not need to pass the application's hInstance
   // to Windows APIs directly because there are equivalent MFC
   // member functions that pass the hInstance for you.  The following
   // example is not typical:

   HCURSOR hCursor;
   hCursor = ::LoadCursor(AfxGetApp()->m_hInstance, 
      MAKEINTRESOURCE(IDC_MYCURSOR));

   // A more direct way to get the application's hInstance is to
   // call AfxGetInstanceHandle:
   hCursor = ::LoadCursor(AfxGetInstanceHandle(), 
      MAKEINTRESOURCE(IDC_MYCURSOR));

   // If you need the hInstance to load a resource, it is better
   // to call AfxGetResourceHandle instead of AfxGetInstanceHandle:
   hCursor = ::LoadCursor(AfxGetResourceHandle(), 
      MAKEINTRESOURCE(IDC_MYCURSOR));

   // A better way to load the cursor resource is to call
   // CWinApp::LoadCursor
   hCursor = AfxGetApp()->LoadCursor(IDC_MYCURSOR);