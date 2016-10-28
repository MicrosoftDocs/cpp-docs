		UINT i, uSelectedCount = m_myListCtrl.GetSelectedCount();
		int  nItem = -1;

		// Update all of the selected items.
		if (uSelectedCount > 0)
		{
			for (i=0; i < uSelectedCount; i++)
			{
				nItem = m_myListCtrl.GetNextItem(nItem, LVNI_SELECTED);
				ASSERT(nItem != -1);
				m_myListCtrl.Update(nItem); 
			}
		}