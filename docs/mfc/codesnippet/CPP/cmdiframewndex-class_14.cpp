void CMainFrame::OnClose()
{
   SaveMDIState(theApp.GetRegSectionPath());
   CMDIFrameWndEx::OnClose();
}