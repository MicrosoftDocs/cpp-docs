   // The following example attaches a HWND to the CWindow object
   // and calls CWindow::GetParent to find out the parent
   // window of the window wrapped by CWindow object.

   CWindow myWindow;
   myWindow.Attach(hWnd);   
   HWND hWndParent = myWindow.GetParent();