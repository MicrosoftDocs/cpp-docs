	// If any item's data is equal to zero then reset it to -1.
	for (int i=0; i < m_myListCtrl.GetItemCount(); i++)
	{
		if (m_myListCtrl.GetItemData(i) == 0)
		{
			m_myListCtrl.SetItemData(i, (DWORD) -1);
		}
	}