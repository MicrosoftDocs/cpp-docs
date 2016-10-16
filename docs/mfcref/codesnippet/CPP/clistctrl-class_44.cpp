		// Use the 3D button face color for the background.
		COLORREF crBkColor = ::GetSysColor(COLOR_3DFACE);
		m_myListCtrl.SetTextBkColor(crBkColor);
		ASSERT(m_myListCtrl.GetTextBkColor() == crBkColor);