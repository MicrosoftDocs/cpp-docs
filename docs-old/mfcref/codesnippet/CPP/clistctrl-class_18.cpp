	// GetGroupRect

	// Get the graphics rectangle that surrounds group 0.
	CRect rect;
	BOOL bRet = m_listCtrl.GetGroupRect( 0, &rect, LVGGR_GROUP); 
	// Draw a blue rectangle around group 0.
	if (bRet == TRUE) {
		m_listCtrl.GetDC()->Draw3dRect( &rect, RGB(0, 0, 255), RGB(0, 0, 255));
	}
	else {
		AfxMessageBox(_T("No group information was retrieved."), MB_ICONINFORMATION);
	}