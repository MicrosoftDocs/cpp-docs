// Get the style of the first button separator
UINT nStyle = m_wndToolBar.GetButtonStyle(3);
// Augment the state for wrapping
nStyle |= TBBS_WRAPPED;
m_wndToolBar.SetButtonStyle(3, nStyle);

// Do the same for other wrap locations ...

// Set the bar style to size fixed
m_wndToolBar.SetBarStyle(m_wndToolBar.GetBarStyle() |
   CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_FIXED);

// Call docking/floating functions as needed ...