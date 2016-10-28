		LVFINDINFO info;
		int nIndex;

		info.flags = LVFI_PARTIAL|LVFI_STRING;
		info.psz = _T("item");

		// Delete all of the items that begin with the string.
		while ((nIndex = m_myListCtrl.FindItem(&info)) != -1)
		{
			m_myListCtrl.DeleteItem(nIndex);
		}