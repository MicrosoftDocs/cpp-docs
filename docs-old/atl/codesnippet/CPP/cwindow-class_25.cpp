   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::ModifyStyle() to add and remove the window styles

   CWindow myWindow;
   myWindow.Attach(hWnd);

   //The following line removes the WS_CLIPCHILDREN style from the 
   //window and adds the WS_CAPTION style to the window
   myWindow.ModifyStyle(WS_CLIPCHILDREN, WS_CAPTION);