   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::GetWindowProcessID() to retrieve the id of the 
   //process that created the window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   DWORD dwID = myWindow.GetWindowProcessID();