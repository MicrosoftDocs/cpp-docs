   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::EnableWindow() to enable and disable the window
   //wrapped by the CWindow object

   CWindow myWindow;
   myWindow.Attach(hWnd);

   //The following call enables the window 
   //CWindow::EnableWindow() takes TRUE as the default parameter

   myWindow.EnableWindow();

   if(myWindow.IsWindowEnabled())
   {
      //Do something now that the window is enabled

      //Now it's time to disable the window again
      myWindow.EnableWindow(FALSE);
   }