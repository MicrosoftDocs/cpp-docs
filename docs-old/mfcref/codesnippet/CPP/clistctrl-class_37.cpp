	// Set the callback mask so that only the selected and focused states
	// are stored for each item.
	m_myListCtrl.SetCallbackMask(LVIS_SELECTED|LVIS_FOCUSED);
	ASSERT(m_myListCtrl.GetCallbackMask() == 
		(LVIS_SELECTED|LVIS_FOCUSED));