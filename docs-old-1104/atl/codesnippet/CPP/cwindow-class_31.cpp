   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::SetFocus() to set the input focus

   CWindow myWindow;
   myWindow.Attach(hWnd);
   HWND hWndLeftFocus = myWindow.SetFocus();