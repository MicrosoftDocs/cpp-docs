		// Make sure the focus is set to the list view control.
		m_myListCtrl.SetFocus();

		// Show the edit control on the label of the first
		// item in the list view control.
		CEdit* pmyEdit = m_myListCtrl.EditLabel(1);
		ASSERT(pmyEdit != NULL);