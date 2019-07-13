// Sets 3 check buttons in various ways.  Note BST_INDETERMINATE
// requires BS_3STATE or BS_AUTO3STATE in the button's style.
void CMyDlg::OnMarkButtons()
{
   CheckDlgButton(IDC_CHECK1, BST_UNCHECKED);     // 0
   CheckDlgButton(IDC_CHECK2, BST_CHECKED);       // 1
   CheckDlgButton(IDC_CHECK3, BST_INDETERMINATE); // 2
}