	// GetItemIndexRect
	// Get the rectangle that bounds the second item in the first group.
	LVITEMINDEX lvItemIndex;
	lvItemIndex.iGroup = 0;
	lvItemIndex.iItem = 1;
	CRect rect;
	BOOL bRet = m_listCtrl.GetItemIndexRect(
		&lvItemIndex, 0, LVIR_BOUNDS, &rect);

	// Draw a red rectangle around the item.
	m_listCtrl.GetDC()->Draw3dRect( &rect, RGB(255, 0, 0), RGB(255, 0, 0) );