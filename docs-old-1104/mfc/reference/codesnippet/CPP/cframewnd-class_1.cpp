void CChildFrame::ActivateFrame(int nCmdShow)
{
   // Create the child frame window maximized
   nCmdShow = SW_MAXIMIZE;

   CMDIChildWnd::ActivateFrame(nCmdShow);
}