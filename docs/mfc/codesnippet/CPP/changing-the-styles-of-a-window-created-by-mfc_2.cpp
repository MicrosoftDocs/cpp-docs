BOOL CMainFrame::PreCreateWindow(CREATESTRUCT &cs)
{
   // Call the base-class version
   if (!CFrameWnd::PreCreateWindow(cs))
      return FALSE;

   // Create a window without min/max buttons or sizable border
   cs.style = WS_OVERLAPPED | WS_SYSMENU | WS_BORDER;

   // Size the window to 1/3 screen size and center it
   cs.cy = ::GetSystemMetrics(SM_CYSCREEN) / 3;
   cs.cx = ::GetSystemMetrics(SM_CXSCREEN) / 3;
   cs.y = ((cs.cy * 3) - cs.cy) / 2;
   cs.x = ((cs.cx * 3) - cs.cx) / 2;

   return TRUE;
}