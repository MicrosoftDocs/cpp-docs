   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetWindowThreadID() to retrieve the id of the thread 
   //that created the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   DWORD dwID = myWindow.GetWindowThreadID();