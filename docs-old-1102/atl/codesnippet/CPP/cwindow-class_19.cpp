   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::IsIconic() to determine if the window is minimized

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bIconic = myWindow.IsIconic();