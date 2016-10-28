   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::MessageBox() to pop up a Windows message box

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.MessageBox(_T("Hello World"));