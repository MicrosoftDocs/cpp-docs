   // The following example attaches a HWND to the CWindow object,
   // calls CWindow::GetDC to retrieve the DC of the client
   // area of the window wrapped by CWindow Object, and calls
   // CWindow::ReleaseDC to release the DC. 

   CWindow myWindow;
   myWindow.Attach(hWnd);   
   HDC hDC = myWindow.GetDC();

   // Use the DC

   myWindow.ReleaseDC(hDC);
   hDC = NULL;