   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetStyle() to retrieve the styles of the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   DWORD dwStyles = myWindow.GetStyle();