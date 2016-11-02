   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsWindowUnicode() to determine if the window is a 
   //UNICODE window or an ANSI one.

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bUnicode = myWindow.IsWindowUnicode();