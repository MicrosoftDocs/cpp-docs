		UINT i, uCount = m_myListCtrl.GetNumberOfWorkAreas();
		LPRECT lpRects = (LPRECT) malloc(uCount*sizeof(RECT));

		if (lpRects != NULL)
		{
			// Dump all of the work area dimensions.
			m_myListCtrl.GetWorkAreas(uCount, lpRects);

			for (i=0; i < uCount; i++)
			{
				TRACE(_T("Work area %d; left = %d, top = %d, right = %d, ")
					_T("bottom = %d\r\n"),
					i, lpRects[i].left, lpRects[i].top, lpRects[i].right, 
					lpRects[i].bottom);
			}

			free(lpRects);
		}
		else
		{
			TRACE(_T("Couldn't allocate enough memory!"));   
		}
