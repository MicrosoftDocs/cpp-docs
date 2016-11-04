   // The following example attaches a HWND to the CWindow object
   // and sets the hWndParent as the parent window of the 
   // window wrapped by CWindow object using CWindow::SetParent.

   CWindow myWindow;
   myWindow.Attach(hWndChild);
   HWND hWndPrevParent = myWindow.SetParent(hWndParent);