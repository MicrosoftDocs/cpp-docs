   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetTopWindow() to get the top-level child window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   HWND hWndFavoriteChild = myWindow.GetTopWindow();