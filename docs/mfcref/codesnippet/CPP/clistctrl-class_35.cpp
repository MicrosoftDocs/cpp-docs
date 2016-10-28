	// MapIndexToID
	int iCount = m_listCtrl.GetItemCount();
	UINT nId = 0;
	UINT nIndex = 0;
	for (int iIndexOriginal = 0; iIndexOriginal < iCount; iIndexOriginal++)
	{
		// Map index to ID.
		nId = m_listCtrl.MapIndexToID((UINT)iIndexOriginal);

		// Map ID to index.
		nIndex = m_listCtrl.MapIDToIndex(nId);

		if (nIndex != (UINT)(iIndexOriginal))
		{
			CString str;
			str.Format(_T("Mapped index (%d) is not equal to original index (%d)"),
				nIndex, (UINT)(iIndexOriginal));
			AfxMessageBox(str);
			return;
		}
	}
	AfxMessageBox(_T("The mapped indexes and original indexes are equal."), 
		MB_ICONINFORMATION);