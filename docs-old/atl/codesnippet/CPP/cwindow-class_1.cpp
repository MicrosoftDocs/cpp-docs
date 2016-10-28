   //The following example attaches an HWND to the CWindow object
   HWND hWnd  = ::GetDesktopWindow();
   CWindow myWindow;
   myWindow.Attach(hWnd);