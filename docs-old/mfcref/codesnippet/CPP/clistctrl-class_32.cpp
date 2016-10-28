		// Make sure the focus is set to the list view control.
		m_myListCtrl.SetFocus();

		// Select all of the items that are completely visible.
		int n = m_myListCtrl.GetTopIndex();
		int nLast = n + m_myListCtrl.GetCountPerPage();

		for (; n < nLast; n++)
		{
			m_myListCtrl.SetItemState(n, LVIS_SELECTED, LVIS_SELECTED);
			ASSERT(m_myListCtrl.GetItemState(n, LVIS_SELECTED) == LVIS_SELECTED); 
		}