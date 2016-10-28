		LVCOLUMN col;

		col.mask = LVCF_WIDTH;

		// Double the column width of the first column.
		if (m_myListCtrl.GetColumn(0, &col))
		{
			col.cx *= 2;
			m_myListCtrl.SetColumn(0, &col);
		}