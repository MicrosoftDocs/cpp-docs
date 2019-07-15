// CMyComboBox is my owner-drawn combo box derived from CComboBox. This
// example simply dumps the item's text. The combo box control was
// created with the following code:
//   pmyComboBox->Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      CBS_SORT|CBS_OWNERDRAWVARIABLE,
//      myRect, pParentWnd, 1);
//
void CMyComboBox::DeleteItem(LPDELETEITEMSTRUCT lpDeleteItemStruct)
{
   ASSERT(lpDeleteItemStruct->CtlType == ODT_COMBOBOX);
   LPTSTR lpszText = (LPTSTR)lpDeleteItemStruct->itemData;
   ASSERT(lpszText != NULL);

   AFXDUMP(lpszText);
}