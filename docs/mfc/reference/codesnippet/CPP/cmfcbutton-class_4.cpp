    // Resize the button.
    m_Button.SizeToContent();
    m_Button.EnableFullTextTooltip(true);
    // Use the application menu font at the button text font.
    m_Button.EnableMenuFont();
    // Use the current Windows theme to draw the button borders.
    m_Button.EnableWindowsTheming(true);
    // Set the button to auto-repeat mode.
    m_Button.SetAutorepeatMode();
    // Set the background color for the button text.
    m_Button.SetFaceColor(RGB(255,0,0),true);
    m_Button.SetTextColor(RGB(0,0,255));
    // Set the tooltip of the button.
    m_Button.SetTooltip(_T("this is a button!"));