// alter the styles of the mdi frame window
BOOL CMdiChildFrame::PreCreateWindow(CREATESTRUCT &cs)
{
   // Create a window without min/max buttons or sizable border
   cs.style |= WS_OVERLAPPED | WS_SYSMENU | WS_BORDER;

   // Size the window to 1/3 screen size and center it
   cs.cy = ::GetSystemMetrics(SM_CYSCREEN) / 3;
   cs.cx = ::GetSystemMetrics(SM_CXSCREEN) / 3;
   cs.y = ((cs.cy * 3) - cs.cy) / 2;
   cs.x = ((cs.cx * 3) - cs.cx) / 2;

   return CMDIChildWnd::PreCreateWindow(cs);
}