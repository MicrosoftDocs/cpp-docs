// The this pointer points to CMainFrame class which extends the CFrameWnd class.
if (!m_wndToolBar.CreateEx(this, TBSTYLE_TRANSPARENT) ||
    !m_wndToolBar.LoadToolBar(IDR_MAINFRAME, uiToolbarColdID, uiMenuID,
                              FALSE /* Not locked */, 0, 0, uiToolbarHotID))
{
   TRACE0("Failed to create toolbar\n");
   return -1; // fail to create
}