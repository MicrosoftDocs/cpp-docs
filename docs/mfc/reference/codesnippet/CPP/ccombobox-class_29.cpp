// CMyComboBox is my owner-drawn combo box derived from CComboBox. This
// example measures an item and sets the height of the item to twice the
// vertical extent of its text. The combo box control was created with
// the following code:
//   pmyComboBox->Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      CBS_SORT|CBS_OWNERDRAWVARIABLE,
//      myRect, pParentWnd, 1);
//
void CMyComboBox::MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct)
{
   ASSERT(lpMeasureItemStruct->CtlType == ODT_COMBOBOX);

   if (lpMeasureItemStruct->itemID != (UINT)-1)
   {
      LPCTSTR lpszText = (LPCTSTR)lpMeasureItemStruct->itemData;
      ASSERT(lpszText != NULL);
      CSize sz;
      CDC *pDC = GetDC();

      sz = pDC->GetTextExtent(lpszText);

      ReleaseDC(pDC);

      lpMeasureItemStruct->itemHeight = 2 * sz.cy;
   }
}