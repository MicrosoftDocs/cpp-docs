   //The following example attaches an HWND to the CWindow object and 
   //calls CWindow::ModifyStyleEx() to add and remove the extended 
   //window styles

   CWindow myWindow;
   myWindow.Attach(hWnd);

   //The following line removes WS_EX_CONTEXTHELP extended style from 
   //the window and adds WS_EX_TOOLWINDOW extended style to the window 

   myWindow.ModifyStyleEx(WS_EX_CONTEXTHELP, WS_EX_TOOLWINDOW);