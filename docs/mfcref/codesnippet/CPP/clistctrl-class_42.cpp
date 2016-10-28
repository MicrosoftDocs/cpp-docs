		CString str;

		// Add 1024 items to the list view control.

		// Force my virtual list view control to allocate 
		// enough memory for my 1024 items.
		m_myVirtualListCtrl.SetItemCountEx(1024, LVSICF_NOSCROLL|
			LVSICF_NOINVALIDATEALL);

		for (int i = 0; i < 1024; i++)
		{
			str.Format(TEXT("item %d"), i);
			m_myVirtualListCtrl.InsertItem(i, str);
		}