   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::SetRedraw() to set and reset the redraw flag

   CWindow myWindow;
   myWindow.Attach(hWnd);
   myWindow.SetRedraw();      //sets the redraw flag to TRUE
   //
   //
   myWindow.SetRedraw(FALSE); //sets the redraw flag to FALSE