		// Ensure that the last item is visible.
		int nCount = m_myListCtrl.GetItemCount();
		if (nCount > 0)
			m_myListCtrl.EnsureVisible(nCount-1, FALSE);