		CString strText;
		int nColumnCount = m_myListCtrl.GetHeaderCtrl()->GetItemCount();

		// Insert 10 items in the list view control.
		for (int i = 0; i < 10; i++)
		{
			strText.Format(TEXT("item %d"), i);

			// Insert the item, select every other item.
			m_myListCtrl.InsertItem(LVIF_TEXT | LVIF_STATE, i, strText, 
				(i % 2) == 0 ? LVIS_SELECTED : 0, LVIS_SELECTED, 0, 0);

			// Initialize the text of the subitems.
			for (int j = 1; j < nColumnCount; j++)
			{
				strText.Format(TEXT("sub-item %d %d"), i, j);
				m_myListCtrl.SetItemText(i, j, strText);
			}
		}