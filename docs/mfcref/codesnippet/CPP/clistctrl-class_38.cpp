		int nCount = m_myListCtrl.GetItemCount();
		BOOL fCheck = FALSE;

		// Set the check state of every other item to TRUE and 
		// all others to FALSE.
		for (int i = 0; i < nCount; i++)
		{
			m_myListCtrl.SetCheck(i, fCheck);
			ASSERT((m_myListCtrl.GetCheck(i) && fCheck) || 
				(!m_myListCtrl.GetCheck(i) && !fCheck));
			fCheck = !fCheck;
		}