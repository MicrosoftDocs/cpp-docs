CRect rectDummy(0, 0, 0, 0);
// The this pointer points to CExplorerView class which extends the CView class.
m_wndList.Create(WS_CHILD | WS_VISIBLE | LVS_REPORT, rectDummy, this, 1);