// Add "Home" category.
// CMFCRibbonBar m_wndRibbonBar
strTemp.LoadString(IDS_RIBBON_HOME);
CMFCRibbonCategory *pCategoryHome = m_wndRibbonBar.AddCategory(strTemp,
                                                               IDB_WRITESMALL, IDB_WRITELARGE);