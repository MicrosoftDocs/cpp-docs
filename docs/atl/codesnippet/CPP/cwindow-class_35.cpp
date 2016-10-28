   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::ShowCaret() to show the caret

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.ShowCaret();