   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::DestroyWindow() to destroy the window

   CWindow myWindow;
   myWindow.Attach(hWndChild);
   //call the CWindow wrappers
 
   myWindow.DestroyWindow();
   hWndChild = NULL;