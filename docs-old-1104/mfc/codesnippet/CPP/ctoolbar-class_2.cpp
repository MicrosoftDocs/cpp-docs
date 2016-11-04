// This example demonstrates CToolBar::CreateEx by creating a 
// toolbar as part of a child frame window. It also calls the 
// LoadToolbar and EnableDocking functions
int CChildFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CMDIChildWnd::OnCreate(lpCreateStruct) == -1)
      return -1;

   if (!m_wndMyToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
      | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
      !m_wndMyToolBar.LoadToolBar(IDR_MYTOOLBAR))
   {
      TRACE0("Failed to create toolbar\n");
      return -1;      // fail to create
   }

   m_wndMyToolBar.EnableDocking(CBRS_ALIGN_ANY);
   EnableDocking(CBRS_ALIGN_ANY);
   DockControlBar(&m_wndMyToolBar);

   return 0;
}