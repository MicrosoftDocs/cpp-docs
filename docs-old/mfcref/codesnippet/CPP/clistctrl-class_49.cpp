// The ListCompareFunc() method is a global function used by SortItemEx().
int CALLBACK ListCompareFunc(
							 LPARAM lParam1, 
							 LPARAM lParam2, 
							 LPARAM lParamSort)
{
	CListCtrl* pListCtrl = (CListCtrl*) lParamSort;
	CString    strItem1 = pListCtrl->GetItemText(static_cast<int>(lParam1), 1);
	CString    strItem2 = pListCtrl->GetItemText(static_cast<int>(lParam2), 1);

	int x1 = _tstoi(strItem1.GetBuffer());
	int x2 = _tstoi(strItem2.GetBuffer());
	int result = 0;
	if ((x1 - x2) < 0)
		result = -1;
	else if ((x1 - x2) == 0)
		result = 0;
	else
		result = 1;

	return result;
}

void CCListCtrl_s2Dlg::OnBnClickedButton1()
{
	// SortItemsEx
	m_listCtrl.SortItemsEx( ListCompareFunc, (LPARAM)&m_listCtrl );
}