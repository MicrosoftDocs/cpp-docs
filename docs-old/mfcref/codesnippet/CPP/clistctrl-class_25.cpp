		POINT pt;

		// Move all items in the list control 100 pixels to the right.
		UINT i, nCount = m_myListCtrl.GetItemCount();

		for (i=0; i < nCount; i++)
		{
			m_myListCtrl.GetItemPosition(i, &pt);
			pt.x += 100;
			m_myListCtrl.SetItemPosition(i, pt);
		}   