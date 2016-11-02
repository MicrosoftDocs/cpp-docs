   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetWindowDC() to retrieve the DC of the entire window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   HDC hDC = myWindow.GetWindowDC();