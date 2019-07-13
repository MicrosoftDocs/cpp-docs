m_wndSBC.SetBkColor(RGB(0, 0, 250));

HICON hIcon = AfxGetApp()->LoadIcon(IDI_PANE_0_ICON);
VERIFY(hIcon);
VERIFY(m_wndSBC.SetIcon(0, hIcon));