   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsWindow() to verify if the HWND corresponds 
   //to an existing window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bWindow = myWindow.IsWindow();