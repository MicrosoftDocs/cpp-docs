   //The following example attaches various HWNDs to the CWindow objects 
   //and calls CWindow::CenterWindow() for each of them

   CWindow childWindow, popupWindow, overlappedWindow;

   childWindow.Attach(hWndChild); //a window created with WS_CHILD style
   childWindow.CenterWindow();    //This will center the child 
                                  //window against its Parent window

   popupWindow.Attach(hWndPopup); //a window created with WS_POPUP style
   popupWindow.CenterWindow();    //This will center the popup window 
                                  //against its Owner window

   overlappedWindow.Attach(hWndOverlapped); //a window created with 
                                            //WS_OVERLAPPED style
   overlappedWindow.CenterWindow(::GetDesktopWindow()); //This will center 
                          //the overlapped window against the DeskTop window