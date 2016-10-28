// activate an application with a window with a specific class name
BOOL CMyApp::FirstInstance()
{
   CWnd *pWndPrev, *pWndChild;

   // Determine if a window with the class name exists...
   pWndPrev = CWnd::FindWindow(_T("MyNewClass"), NULL);
   if (NULL != pWndPrev)
   {
      // If so, does it have any popups?
      pWndChild = pWndPrev->GetLastActivePopup();

      // If iconic, restore the main window
      if (pWndPrev->IsIconic())
         pWndPrev->ShowWindow(SW_RESTORE);

      // Bring the main window or its popup to the foreground
      pWndChild->SetForegroundWindow();

      // and you are done activating the other application
      return FALSE;
   }

   return TRUE;
}