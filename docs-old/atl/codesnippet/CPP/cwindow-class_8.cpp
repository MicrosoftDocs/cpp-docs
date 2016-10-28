   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetClientRect() to get the client area rectangle
   //of the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   RECT rc;
   myWindow.GetClientRect(&rc);