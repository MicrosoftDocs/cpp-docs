// CMyComboBox is my owner-drawn combo box derived from CComboBox. This
// example draws an item's text centered vertically and horizontally. The
// combo box control was created with the following code:
//   pmyComboBox->Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      CBS_SORT|CBS_OWNERDRAWVARIABLE,
//      myRect, pParentWnd, 1);
//
void CMyComboBox::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
   ASSERT(lpDrawItemStruct->CtlType == ODT_COMBOBOX);
   LPCTSTR lpszText = (LPCTSTR)lpDrawItemStruct->itemData;
   ASSERT(lpszText != NULL);
   CDC dc;

   dc.Attach(lpDrawItemStruct->hDC);

   // Save these value to restore them when done drawing.
   COLORREF crOldTextColor = dc.GetTextColor();
   COLORREF crOldBkColor = dc.GetBkColor();

   // If this item is selected, set the background color
   // and the text color to appropriate values. Erase
   // the rect by filling it with the background color.
   if ((lpDrawItemStruct->itemAction & ODA_SELECT) &&
       (lpDrawItemStruct->itemState & ODS_SELECTED))
   {
      dc.SetTextColor(::GetSysColor(COLOR_HIGHLIGHTTEXT));
      dc.SetBkColor(::GetSysColor(COLOR_HIGHLIGHT));
      dc.FillSolidRect(&lpDrawItemStruct->rcItem, ::GetSysColor(COLOR_HIGHLIGHT));
   }
   else
   {
      dc.FillSolidRect(&lpDrawItemStruct->rcItem, crOldBkColor);
   }

   // Draw the text.
   dc.DrawText(
       lpszText,
       (int)_tcslen(lpszText),
       &lpDrawItemStruct->rcItem,
       DT_CENTER | DT_SINGLELINE | DT_VCENTER);

   // Reset the background color and the text color back to their
   // original values.
   dc.SetTextColor(crOldTextColor);
   dc.SetBkColor(crOldBkColor);

   dc.Detach();
}