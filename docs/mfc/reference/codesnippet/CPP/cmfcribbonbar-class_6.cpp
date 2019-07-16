CMFCRibbonQuickAccessToolBarDefaultState *qaToolBarState =
    new CMFCRibbonQuickAccessToolBarDefaultState();
qaToolBarState->AddCommand(ID_FILE_NEW, true);
qaToolBarState->AddCommand(ID_FILE_OPEN, true);
// CMFCRibbonBar m_wndRibbonBar
m_wndRibbonBar.SetQuickAccessDefaultState(*qaToolBarState);