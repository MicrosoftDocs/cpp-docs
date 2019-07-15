// The this pointer points to CMainFrame class which extends the CFrameWnd class.
if (!m_wndMenuBar.CreateEx(this, TBSTYLE_TRANSPARENT))
{
   TRACE0("Failed to create menubar\n");
   return -1; // fail to create
}