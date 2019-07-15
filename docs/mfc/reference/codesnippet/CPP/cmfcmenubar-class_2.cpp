m_wndMenuBar.SetPaneStyle(m_wndMenuBar.GetPaneStyle() | CBRS_SIZE_DYNAMIC);
m_wndMenuBar.EnableCustomizeButton(TRUE, -1, _T(""));
// first parameter is the command ID for the button of the Help combo box
// third parameter is the width of the button for the combo box in pixels.
m_wndMenuBar.EnableHelpCombobox(1, _T("enter text here"), 30);
m_wndMenuBar.EnableMenuShadows();
m_wndMenuBar.SetMaximizeMode(true);