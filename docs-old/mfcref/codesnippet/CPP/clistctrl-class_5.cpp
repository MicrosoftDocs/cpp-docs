		int nColumnCount = m_myListCtrl.GetHeaderCtrl()->GetItemCount();

		// Delete all of the columns.
		for (int i=0; i < nColumnCount; i++)
		{
			m_myListCtrl.DeleteColumn(0);
		}