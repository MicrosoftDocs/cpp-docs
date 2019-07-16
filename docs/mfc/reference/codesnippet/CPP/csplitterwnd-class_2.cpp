// this function creates the panes for a static splitter window
BOOL CChildFrame::OnCreateClient(LPCREATESTRUCT /*lpcs*/, CCreateContext *pContext)
{
   m_bSplitterCreated = m_wndSplitter.CreateStatic(this, 1, 2);
   // CMyView and CMyOtherView are user-defined views derived from CView
   m_wndSplitter.CreateView(0, 0, RUNTIME_CLASS(CMyView), CSize(0, 0),
                            pContext);
   m_wndSplitter.CreateView(0, 1, RUNTIME_CLASS(CMyOtherView), CSize(0, 0),
                            pContext);

   return (m_bSplitterCreated);
}