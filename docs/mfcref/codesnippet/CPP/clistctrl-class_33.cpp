void CListCtrlDlg::OnRClick(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;
	CPoint point(pia->ptAction);

	// Select the item the user clicked on.
	UINT uFlags;
	int nItem = m_myListCtrl.HitTest(point, &uFlags);

	if (uFlags & LVHT_ONITEMLABEL)
	{
		m_myListCtrl.SetItem(nItem, 0, LVIF_STATE, NULL, 0, LVIS_SELECTED, 
			LVIS_SELECTED, 0);
	}

	*pResult = 0;
}