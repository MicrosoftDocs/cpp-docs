	// Set the data of each item to be equal to its index.
	for (int i = 0; i < m_myListCtrl.GetItemCount(); i++)
	{
		m_myListCtrl.SetItemData(i, i);
	}