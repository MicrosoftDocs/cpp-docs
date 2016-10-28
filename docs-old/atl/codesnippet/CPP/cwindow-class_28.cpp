   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::RedrawWindow() to update the entire window using the 
   //default arguments

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bRedrawn = myWindow.RedrawWindow();