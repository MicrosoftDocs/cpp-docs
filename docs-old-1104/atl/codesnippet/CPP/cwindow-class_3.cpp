   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::BringWindowToTop() to bring the window to the top 
   //of the z-order.

   CWindow myWindow;
   myWindow.Attach(hWnd);
   BOOL bOnTop = myWindow.BringWindowToTop();

   //check if we could bring the window on top
   if(bOnTop)
   {
      //Do something
   }