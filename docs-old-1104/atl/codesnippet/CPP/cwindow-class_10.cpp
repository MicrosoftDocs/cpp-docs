   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetExStyle() to retrieve the extended styles of 
   //the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   DWORD dwExStyles = myWindow.GetExStyle();