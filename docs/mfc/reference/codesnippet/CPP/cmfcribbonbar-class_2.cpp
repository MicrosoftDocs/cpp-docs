// m_wndRibbonBar is declared as a protected member variable
// CMFCRibbonBar m_wndRibbonBar.
// strTemp is a CString variable.
strTemp.LoadString(IDS_RIBBON_FILE);
CMFCRibbonMainPanel *pMainPanel = m_wndRibbonBar.AddMainCategory(strTemp,
                                                                 IDB_FILESMALL, IDB_FILELARGE);