int strPartDim[4] = { 80, 160, 240, -1 };

m_StatusBarIcon = AfxGetApp()->LoadIcon(IDI_ICON1);

m_StatusBarCtrl.SetParts(4, strPartDim);
m_StatusBarCtrl.SetIcon(1, m_StatusBarIcon);
m_StatusBarCtrl.SetText(_T("Part 1"), 1, 0);