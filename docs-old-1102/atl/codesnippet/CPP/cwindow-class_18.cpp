   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::Invalidate() to invalidate the entire client area

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.Invalidate();