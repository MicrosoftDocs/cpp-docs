// OnClick is the handler for the NM_CLICK notification
void CListCtrlDlg::OnClick(NMHDR* pNMHDR, LRESULT* pResult)
{
	UNREFERENCED_PARAMETER(pResult);

	LPNMITEMACTIVATE pia = (LPNMITEMACTIVATE)pNMHDR;

	// Get the current mouse location and convert it to client
	// coordinates.
	CPoint pos( ::GetMessagePos() ); 
	ScreenToClient(&pos);

	// Get indexes of the first and last visible items in 
	// the listview control.
	int index = m_myListCtrl.GetTopIndex();
	int last_visible_index = index + m_myListCtrl.GetCountPerPage();
	if (last_visible_index > m_myListCtrl.GetItemCount())
		last_visible_index = m_myListCtrl.GetItemCount();

	// Loop until number visible items has been reached.
	while (index <= last_visible_index)
	{
		// Get the bounding rectangle of an item. If the mouse
		// location is within the bounding rectangle of the item,
		// you know you have found the item that was being clicked.
		CRect r;
		m_myListCtrl.GetItemRect(index, &r, LVIR_BOUNDS);
		if (r.PtInRect(pia->ptAction))
		{
			UINT flag = LVIS_SELECTED | LVIS_FOCUSED;
			m_myListCtrl.SetItemState(index, flag, flag);
			break;
		}

		// Get the next item in listview control.
		index++;
	}
}