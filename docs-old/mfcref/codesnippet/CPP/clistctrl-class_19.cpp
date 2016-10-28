		// Set the hot cursor to be the system app starting cursor.
		HCURSOR hCursor = ::LoadCursor(NULL, IDC_APPSTARTING);
		m_myListCtrl.SetHotCursor(hCursor);
		ASSERT(m_myListCtrl.GetHotCursor() == hCursor);