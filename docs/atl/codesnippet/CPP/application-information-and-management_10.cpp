   // Register your unique class name that you wish to use
   WNDCLASS wndcls;

   memset(&wndcls, 0, sizeof(WNDCLASS));   // start with NULL defaults

   wndcls.style = CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;

   //you can specify your own window procedure
   wndcls.lpfnWndProc = ::DefWindowProc; 
   wndcls.hInstance = AfxGetInstanceHandle();
   wndcls.hIcon = LoadIcon(wndcls.hInstance, MAKEINTRESOURCE(IDI_MYICON));
   wndcls.hCursor = LoadCursor(wndcls.hInstance, MAKEINTRESOURCE(IDC_ARROW));
   wndcls.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
   wndcls.lpszMenuName = NULL;

   // Specify your own class name for using FindWindow later
   wndcls.lpszClassName = _T("MyNewClass");

   // Register the new class and trace if it fails
   if(!AfxRegisterClass(&wndcls))
   {
      TRACE("Class Registration Failed\n");
   }