BOOL CChildFrame::PreCreateWindow(CREATESTRUCT &cs)
{
   // Create a child window without the maximize button
   cs.style &= ~WS_MAXIMIZEBOX;

   return CMDIChildWnd::PreCreateWindow(cs);
}