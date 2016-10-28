   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::HideCaret() to hide the caret of the window owning 
   //the caret

   CWindow myWindow;
   myWindow.Attach(hWndEdit);
   myWindow.HideCaret();