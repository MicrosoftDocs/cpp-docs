		// Reverse the order of the columns in the list view control
		// (i.e. make the first column the last, the last column
		// the first, and so on...).
		CHeaderCtrl* pHeaderCtrl = m_myListCtrl.GetHeaderCtrl();

		if (pHeaderCtrl != NULL)
		{
			int  nColumnCount = pHeaderCtrl->GetItemCount();
			LPINT pnOrder = (LPINT) malloc(nColumnCount*sizeof(int));
			ASSERT(pnOrder != NULL);

			m_myListCtrl.GetColumnOrderArray(pnOrder, nColumnCount);

			int i, j, nTemp;
			for (i = 0, j = nColumnCount-1; i < j; i++, j--)
			{
				nTemp = pnOrder[i];
				pnOrder[i] = pnOrder[j];
				pnOrder[j] = nTemp;
			}

			m_myListCtrl.SetColumnOrderArray(nColumnCount, pnOrder);
			free(pnOrder);
		}