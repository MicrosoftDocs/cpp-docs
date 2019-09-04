// CMyODListBox is my owner-drawn list box derived from CListBox. This
// example simply frees the item's text. The list box control was created
// with the following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
void CMyODListBox::DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct)
{
   ASSERT(lpDeleteItemStruct->CtlType == ODT_LISTBOX);
   LPVOID lpszText = (LPVOID)lpDeleteItemStruct->itemData;
   ASSERT(lpszText != NULL);

   free(lpszText);

   CListBox::DeleteItem(lpDeleteItemStruct);
}