   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsWindowVisible() to determine the visibility state 
   //of the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bVisible = myWindow.IsWindowVisible();