// set the margins
m_wndColorBar.SetHorzMargin(0);
m_wndColorBar.SetVertMargin(0);
// enable the display of a dialog box that
// lets the user select more colors
m_wndColorBar.EnableOtherButton(_T("Other..."));
// create a color bar control window
m_wndColorBar.CreateControl(this, rectColorBar, IDC_COLORBAR, 5 /* columns */);
// set the currently selected color
m_wndColorBar.SetColor(RGB(255, 0, 0));