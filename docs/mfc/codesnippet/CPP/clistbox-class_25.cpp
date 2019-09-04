// CMyODListBox is my owner-drawn list box derived from CListBox. This
// example measures an item and sets the height of the item to twice the
// vertical extent of its text. The list box control was created with the
// following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
void CMyODListBox::MeasureItem(LPMEASUREITEMSTRUCT lpMeasureItemStruct)
{
   ASSERT(lpMeasureItemStruct->CtlType == ODT_LISTBOX);
   LPCTSTR lpszText = (LPCTSTR)lpMeasureItemStruct->itemData;
   ASSERT(lpszText != NULL);
   CSize sz;
   CDC *pDC = GetDC();

   sz = pDC->GetTextExtent(lpszText);

   ReleaseDC(pDC);

   lpMeasureItemStruct->itemHeight = 2 * sz.cy;
}