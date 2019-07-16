//The following line send a WM_CLOSE message
//   to the Application's main window. This will cause the
//   Application to exit.
AfxGetMainWnd()->PostMessage(WM_CLOSE, 0, 0);