		CString str;

		// Add 1024 items to the list view control.
		m_myListCtrl.SetItemCount(1024);

		for (int i = 0; i < 1024; i++)
		{
			str.Format(TEXT("item %d"), i);
			m_myListCtrl.InsertItem(i, str);
		}