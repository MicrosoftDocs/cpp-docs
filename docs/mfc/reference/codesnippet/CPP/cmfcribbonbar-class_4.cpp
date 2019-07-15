// Init main button:
// CMFCRibbonApplicationButton m_MainButton
m_MainButton.SetImage(IDB_MAIN);
m_MainButton.SetText(_T("\nf"));
m_MainButton.SetToolTipText(strTemp);

// CMFCRibbonBar m_wndRibbonBar
m_wndRibbonBar.SetApplicationButton(&m_MainButton, CSize(45, 45));