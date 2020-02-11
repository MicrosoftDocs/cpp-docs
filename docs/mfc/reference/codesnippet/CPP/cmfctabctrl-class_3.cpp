    // Create tabs window:
    // CRect rectDummy
    // this is a pointer to a parent window
    // fourth parameter is the id of the tab control
    if (!m_wndTabs.Create (CMFCTabCtrl::STYLE_FLAT, rectDummy, this, 1))
    {
        TRACE0("Failed to create output tab window\n");
        return -1;      // fail to create
    }