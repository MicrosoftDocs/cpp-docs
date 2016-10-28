// Sort the items by passing in the comparison function.
void CListCtrlDlg::Sort()
{
	m_myListCtrl.SortItems(&CListCtrlDlg::MyCompareProc, 0);
}