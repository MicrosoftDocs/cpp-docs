void CListCtrlDlg::OnDblClk(NMHDR* pNMHDR, LRESULT* pResult)
{
	UNREFERENCED_PARAMETER(pResult);

	LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;
	LVHITTESTINFO lvhti;

	// Clear the subitem text the user clicked on.
	lvhti.pt = pia->ptAction;
	m_myListCtrl.SubItemHitTest(&lvhti);

	if (lvhti.flags & LVHT_ONITEMLABEL)
	{
		m_myListCtrl.SetItemText(lvhti.iItem, lvhti.iSubItem, NULL);
	}
}