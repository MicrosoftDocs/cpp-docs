// Set the color for the text in the control and
// assure it was set properly. Unlike the GetMonthCalCtrl() member,
// GetMonthCalColor() and SetMonthCalColor() can be used at any time.
m_DateTimeCtrl.SetMonthCalColor(MCSC_TEXT, RGB(255, 0, 0));
VERIFY(m_DateTimeCtrl.GetMonthCalColor(MCSC_TEXT) == RGB(255, 0, 0));