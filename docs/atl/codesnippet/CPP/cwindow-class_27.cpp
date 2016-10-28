   //The following example attaches an HWND to the CWindow object and 
   //posts a WM_PAINT message to the Window wrapped by the CWindow object 
   //using CWindow::PostMessage() with the default values of WPARAM and 
   //LPARAM

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.PostMessage(WM_PAINT);