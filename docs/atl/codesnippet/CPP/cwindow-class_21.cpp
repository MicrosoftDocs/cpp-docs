   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsWindowEnabled() to verify if the window is enabled 
   //for receiving input

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bEnabled = myWindow.IsWindowEnabled();