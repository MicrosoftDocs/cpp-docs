   // The following example attaches a HWND to the CWindow
   // object and sends a WM_PAINT message to the window
   // wrapped by CWindow object using CWindow::SendMessage.

   CWindow myWindow;
   myWindow.Attach(hWnd);   
   myWindow.SendMessage(WM_PAINT, 0L, 0L);