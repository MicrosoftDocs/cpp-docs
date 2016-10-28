		POSITION pos = m_myListCtrl.GetFirstSelectedItemPosition();
		if (pos == NULL)
		{
			TRACE(_T("No items were selected!\n"));
		}
		else
		{
			while (pos)
			{
				int nItem = m_myListCtrl.GetNextSelectedItem(pos);
				TRACE(_T("Item %d was selected!\n"), nItem);
				// you could do your own processing on nItem here
			}
		}