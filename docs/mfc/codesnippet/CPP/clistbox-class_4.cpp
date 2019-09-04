// CMyODListBox is my owner-drawn list box derived from CListBox. This
// example compares two items using _tcscmp to sort items in reverse
// alphabetical order. The list box control was created with the
// following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
int CMyODListBox::CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct)
{
   ASSERT(lpCompareItemStruct->CtlType == ODT_LISTBOX);
   LPCTSTR lpszText1 = (LPCTSTR)lpCompareItemStruct->itemData1;
   ASSERT(lpszText1 != NULL);
   LPCTSTR lpszText2 = (LPCTSTR)lpCompareItemStruct->itemData2;
   ASSERT(lpszText2 != NULL);

   return _tcscmp(lpszText2, lpszText1);
}