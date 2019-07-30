// Each rebar pane will ocupy its own row:
DWORD dwStyle = RBBS_GRIPPERALWAYS | RBBS_FIXEDBMP | RBBS_BREAK;
// CMFCMenuBar m_wndMenuBar
// CMFCToolBar m_wndToolBar
if (!m_wndReBar.Create(this) ||
    !m_wndReBar.AddBar(&m_wndMenuBar) ||
    !m_wndReBar.AddBar(&m_wndToolBar, NULL, NULL, dwStyle))
{
   TRACE0("Failed to create rebar\n");
   return -1; // fail to create
}