   // The following example attaches a HWND to the CWindow object
   // and sets the window as an active window by calling 
   // CWindow::SetActiveWindow which returns the HWND of the
   // previously active window.

   CWindow myWindow;
   myWindow.Attach(hWnd);   
   HWND hWndPrev = myWindow.SetActiveWindow();