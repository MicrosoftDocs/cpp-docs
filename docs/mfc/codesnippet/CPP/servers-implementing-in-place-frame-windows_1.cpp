BOOL CInPlaceFrame::OnCreateControlBars(CFrameWnd* pWndFrame, CFrameWnd* pWndDoc)
{
   UNREFERENCED_PARAMETER(pWndDoc);

   // Set owner to this window, so messages are delivered to correct app
   m_wndToolBar.SetOwner(this);

   // Create toolbar on client's frame window
   if (!m_wndToolBar.CreateEx(pWndFrame, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
      | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
      !m_wndToolBar.LoadToolBar(IDR_SRVR_INPLACE))
   {
      TRACE0("Failed to create toolbar\n");
      return FALSE;
   }

   // TODO: Delete these three lines if you don't want the toolbar to be dockable
   m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
   pWndFrame->EnableDocking(CBRS_ALIGN_ANY);
   pWndFrame->DockControlBar(&m_wndToolBar);

   return TRUE;
}