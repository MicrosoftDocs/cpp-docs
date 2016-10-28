	// Set the selection mark to the first item only if no other item is 
	// selected.
	if (m_myListCtrl.GetSelectionMark() == -1)
		m_myListCtrl.SetSelectionMark(0);