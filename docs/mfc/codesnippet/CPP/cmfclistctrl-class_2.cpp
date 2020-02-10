    // DWORD dwStyle
    // CRect rectDummy
    m_wndWatch.Create(dwStyle, rectDummy, this, ID_LIST_1);
    m_wndWatch.SendMessage(LVM_SETEXTENDEDLISTVIEWSTYLE, 0, LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
    m_wndWatch.InsertColumn(0, _T("Variable"), LVCFMT_LEFT, 100);
    m_wndWatch.InsertColumn(1, _T("Value"), LVCFMT_LEFT, 100);

    m_wndWatch.InsertItem(0, _T("m_nCount"));
    m_wndWatch.SetItemText(0, 1, _T("100"));

    m_wndWatch.SetFont(&m_Font);