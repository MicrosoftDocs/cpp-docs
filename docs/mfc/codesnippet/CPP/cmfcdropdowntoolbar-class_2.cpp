// Create Resource toolbar:
// The this pointer points to CMainFrame class which extends the CMDIFrameWndEx class
if (!m_wndToolbarResource.Create(this, WS_CHILD | CBRS_TOP | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_HIDE_INPLACE | CBRS_SIZE_DYNAMIC | CBRS_GRIPPER | CBRS_BORDER_3D, IDR_TOOLBAR_RESOURCE) || !m_wndToolbarResource.LoadToolBar(IDR_TOOLBAR_RESOURCE))
{
   TRACE0("Failed to create build toolbar\n");
   return FALSE;      // fail to create
}