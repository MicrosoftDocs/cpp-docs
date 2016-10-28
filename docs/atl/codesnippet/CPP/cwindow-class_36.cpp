   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::ShowWindow() to show the window in its maximized state

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.ShowWindow(SW_SHOWMAXIMIZED);