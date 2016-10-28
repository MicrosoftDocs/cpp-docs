// Sort items by associated lParam
int CALLBACK CListCtrlDlg::MyCompareProc(LPARAM lParam1, LPARAM lParam2, 
	LPARAM lParamSort)
{
	UNREFERENCED_PARAMETER(lParamSort);

	return (int)(lParam1 - lParam2);
}