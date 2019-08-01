// CMyComboBox is my owner-drawn combo box derived from CComboBox. This
// example compares two items using strcmp to sort items in reverse
// alphabetical order. The combo box control was created with the
// following code:
//   pmyComboBox->Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      CBS_SORT|CBS_OWNERDRAWVARIABLE,
//      myRect, pParentWnd, 1);
//
int CMyComboBox::CompareItem(LPCOMPAREITEMSTRUCT lpCompareItemStruct)
{
   int iComp = 0;
   ASSERT(lpCompareItemStruct->CtlType == ODT_COMBOBOX);
   LPCTSTR lpszText1 = (LPCTSTR)lpCompareItemStruct->itemData1;
   ASSERT(lpszText1 != NULL);
   LPCTSTR lpszText2 = (LPCTSTR)lpCompareItemStruct->itemData2;
   ASSERT(lpszText2 != NULL);

   if (NULL != lpszText1 && NULL != lpszText2)
   {
      iComp = _tcscmp(lpszText2, lpszText1);
   }

   return iComp;
}