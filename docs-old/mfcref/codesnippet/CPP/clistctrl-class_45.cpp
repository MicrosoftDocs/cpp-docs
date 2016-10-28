	// Use the window text color for
	// the item text of the list view control.
	COLORREF crTextColor = ::GetSysColor(COLOR_WINDOWTEXT);
	m_myListCtrl.SetTextColor(crTextColor);
	ASSERT(m_myListCtrl.GetTextColor() == crTextColor);