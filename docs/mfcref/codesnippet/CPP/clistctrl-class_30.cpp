		CString strColumn;
		int nWidth;

		// Insert six columns in the list view control. Make the width of
		// the column be the width of the column header plus 50%.
		for (int i = 0; i < 6; i++)
		{
			strColumn.Format(_T("column %d"), i);
			nWidth = 3*m_myListCtrl.GetStringWidth(strColumn)/2;
			m_myListCtrl.InsertColumn(i, strColumn, LVCFMT_LEFT, nWidth);
		}