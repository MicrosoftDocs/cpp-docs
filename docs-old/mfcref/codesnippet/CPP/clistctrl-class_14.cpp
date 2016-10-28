		// The string replacing the text in the edit control.
		LPCTSTR lpszmyString = _T("custom label!");

		// If possible, replace the text in the label edit control.
		CEdit* pEdit = m_myListCtrl.GetEditControl();

		if (pEdit != NULL)
		{
			pEdit->SetWindowText(lpszmyString);
		}