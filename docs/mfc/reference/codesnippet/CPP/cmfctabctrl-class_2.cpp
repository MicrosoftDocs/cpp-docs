// Attach list windows to tab:
// CListCtrl m_wndList1
// CListCtrl m_wndList2
// CListCtrl m_wndList3
m_wndTabs.AddTab(&m_wndList1, _T("Output 1"), (UINT)-1);
m_wndTabs.AddTab(&m_wndList2, _T("Output 2"), (UINT)-1);
m_wndTabs.AddTab(&m_wndList3, _T("Output 3"), (UINT)-1);

m_wndTabs.EnableActiveTabCloseButton();
m_wndTabs.EnableInPlaceEdit(true);
m_wndTabs.EnableTabDocumentsMenu();
m_wndTabs.SetActiveTab(1);
m_wndTabs.SetDrawFrame();
m_wndTabs.SetFlatFrame();