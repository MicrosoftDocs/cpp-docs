BOOL CMyApp::OnDDECommand(LPTSTR lpszCommand)
{
   if (CWinApp::OnDDECommand(lpszCommand))
      return TRUE;

   // Handle any DDE commands recognized by your application
   // and return TRUE.  See implementation of CWinApp::OnDDEComand
   // for example of parsing the DDE command string.

   // Return FALSE for any DDE commands you do not handle.
   return FALSE;
}