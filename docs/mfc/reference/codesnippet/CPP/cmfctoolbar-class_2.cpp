m_wndToolBar.SetWindowText(_T("Standard"));
m_wndToolBar.SetBorders();

//------------------------------------
// Remove toolbar gripper and borders:
//------------------------------------
m_wndToolBar.SetPaneStyle(m_wndToolBar.GetPaneStyle() &
                          ~(CBRS_GRIPPER | CBRS_BORDER_TOP | CBRS_BORDER_BOTTOM | CBRS_BORDER_LEFT | CBRS_BORDER_RIGHT));

m_wndToolBar.EnableCustomizeButton(TRUE, ID_VIEW_CUSTOMIZE, _T("Customize..."));