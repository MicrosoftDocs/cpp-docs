	// GetGroupInfoByIndex
	const int GROUP_HEADER_BUFFER_SIZE = 40;

// Initialize the structure 
	LVGROUP gInfo = {0};
	gInfo.cbSize = sizeof(LVGROUP);
	wchar_t wstrHeadGet[GROUP_HEADER_BUFFER_SIZE] = {0};
	gInfo.cchHeader = GROUP_HEADER_BUFFER_SIZE;
	gInfo.pszHeader = wstrHeadGet;
	gInfo.mask = (LVGF_ALIGN | LVGF_STATE | LVGF_HEADER | LVGF_GROUPID);
	gInfo.state = LVGS_NORMAL;
	gInfo.uAlign  = LVGA_HEADER_LEFT;

	BOOL bRet = m_listCtrl.GetGroupInfoByIndex( 0, &gInfo );
	if (bRet == TRUE) {
		CString strHeader = CString( gInfo.pszHeader );
		CString str;
		str.Format(_T("Header: '%s'"), strHeader);
		AfxMessageBox(str, MB_ICONINFORMATION);
	}
	else
	{
		AfxMessageBox(_T("No group information was retrieved."));
	}