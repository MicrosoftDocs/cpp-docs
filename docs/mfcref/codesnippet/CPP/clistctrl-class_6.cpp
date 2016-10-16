		int nCount = m_myListCtrl.GetItemCount();

		// Delete all of the items from the list view control.
		for (int i=0; i < nCount; i++)
		{
			m_myListCtrl.DeleteItem(0);
		}