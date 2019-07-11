// This code fragment is taken from CMainFrame::OnCreate
// CMainFrame is derived from CMDIFrameWnd.

//This example shows how to add text to toolbar buttons.
if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE
   | CBRS_TOP) || !m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
{
   TRACE0("Failed to create toolbar\n");
   return -1;      // fail to create
}

//Show text on toolbar buttons.
VERIFY(m_wndToolBar.SetButtonText(0, _T("New")));
VERIFY(m_wndToolBar.SetButtonText(1, _T("Open")));
VERIFY(m_wndToolBar.SetButtonText(2, _T("Save")));
VERIFY(m_wndToolBar.SetButtonText(4, _T("Cut")));
VERIFY(m_wndToolBar.SetButtonText(5, _T("Copy")));
VERIFY(m_wndToolBar.SetButtonText(6, _T("Paste")));
VERIFY(m_wndToolBar.SetButtonText(8, _T("Print")));
VERIFY(m_wndToolBar.SetButtonText(9, _T("About")));

CRect temp;
m_wndToolBar.GetItemRect(0, &temp);
m_wndToolBar.GetToolBarCtrl().SetButtonSize(CSize(temp.Width(),
   temp.Height()));