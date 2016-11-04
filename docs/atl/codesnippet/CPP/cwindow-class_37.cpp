   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::UpdateWindow() to update the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bUpdated = myWindow.UpdateWindow();