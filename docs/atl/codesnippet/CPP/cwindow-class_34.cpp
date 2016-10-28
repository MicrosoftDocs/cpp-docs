   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::SetWindowText() to set the new title-text of the 
   //window

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.SetWindowText(_T("Hello ATL"));