		// If the hover time is the default set to 1 sec.
		DWORD dwTime = m_myListCtrl.GetHoverTime();
		if (dwTime == -1)
			m_myListCtrl.SetHoverTime(1000);