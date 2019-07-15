// Helper exit function for automation server
BOOL CMainFrame::CanExit()
{
   if (AfxOleCanExitApp())
   {
      // No outstanding object counts - go ahead and exit
      return TRUE;
   }
   else
   {
      // There are outstanding OLE object counts...
      // hide app to give user impression that application has exited.
      ShowWindow(SW_HIDE);
      // take user out of control of the app
      AfxOleSetUserCtrl(FALSE);
      return FALSE;
   }
}