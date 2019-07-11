// This code fragment is taken from CMainFrame::OnCreate
// CMainFrame is derived from CMDIFrameWnd.

//This example creates a dockable toolbar.
if (!m_wndToolBar.Create(this) ||
   !m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
{
   TRACE0("Failed to create toolbar\n");
   return -1;      // fail to create
}

//Make the toolbar dockable
m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
EnableDocking(CBRS_ALIGN_ANY);
DockControlBar(&m_wndToolBar);