// CMyODListBox is my owner-drawn list box derived from CListBox. This
// example draws an item's text centered vertically and horizontally. The
// list box control was created with the following code:
//   m_myODListBox.Create(
//      WS_CHILD|WS_VISIBLE|WS_BORDER|WS_HSCROLL|WS_VSCROLL|
//      LBS_SORT|LBS_MULTIPLESEL|LBS_OWNERDRAWVARIABLE|LBS_WANTKEYBOARDINPUT,
//      CRect(10,250,200,450), pParentWnd, IDC_MYODLISTBOX);
//
void CMyODListBox::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
   ASSERT(lpDrawItemStruct->CtlType == ODT_LISTBOX);
   LPCTSTR lpszText = (LPCTSTR)lpDrawItemStruct->itemData;
   ASSERT(lpszText != NULL);
   CDC dc;

   dc.Attach(lpDrawItemStruct->hDC);

   // Save these value to restore them when done drawing.
   COLORREF crOldTextColor = dc.GetTextColor();
   COLORREF crOldBkColor = dc.GetBkColor();

   // If this item is selected, set the background color
   // and the text color to appropriate values. Also, erase
   // rect by filling it with the background color.
   if ((lpDrawItemStruct->itemAction | ODA_SELECT) &&
       (lpDrawItemStruct->itemState & ODS_SELECTED))
   {
      dc.SetTextColor(::GetSysColor(COLOR_HIGHLIGHTTEXT));
      dc.SetBkColor(::GetSysColor(COLOR_HIGHLIGHT));
      dc.FillSolidRect(&lpDrawItemStruct->rcItem,
                       ::GetSysColor(COLOR_HIGHLIGHT));
   }
   else
   {
      dc.FillSolidRect(&lpDrawItemStruct->rcItem, crOldBkColor);
   }

   // If this item has the focus, draw a red frame around the
   // item's rect.
   if ((lpDrawItemStruct->itemAction | ODA_FOCUS) &&
       (lpDrawItemStruct->itemState & ODS_FOCUS))
   {
      CBrush br(RGB(255, 0, 0));
      dc.FrameRect(&lpDrawItemStruct->rcItem, &br);
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