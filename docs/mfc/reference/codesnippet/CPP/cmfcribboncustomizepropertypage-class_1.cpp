// Create "Customize" page
// CMFCRibbonBar m_wndRibbonBar
CMFCRibbonCustomizePropertyPage pageCustomize(&m_wndRibbonBar);

// Create a list of popular items:
CList<UINT, UINT> lstPopular;
lstPopular.AddTail(ID_FILE_NEW);
lstPopular.AddTail(ID_FILE_OPEN);

// add a custom category
pageCustomize.AddCustomCategory(_T("Popular Commands"), lstPopular);