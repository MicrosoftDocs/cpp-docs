// In this example a CTabCtrl data member, m_TabCtrl, changes the
// text of the tabs in the tab control.  A call to GetItem is used
// to get the current text, and then the text is changed.  A call
// to SetItem is used to update the tab with the new text.

void CTabDlg::OnChangeItem()
{
   TCITEM tcItem;
   CString pszString;

   //  Get text for the tab item.
   GetDlgItemText(IDC_ITEM_TEXT, pszString);

   //  Get the current tab item text.
   TCHAR buffer[256] = {0};
   tcItem.pszText = buffer;
   tcItem.cchTextMax = 256;
   tcItem.mask = TCIF_TEXT;
   m_TabCtrl.GetItem(0, &tcItem);
   TRACE(_T("Changing item text from %s to %s..."), tcItem.pszText, pszString);

   //  Set the new text for the item.
   tcItem.pszText = pszString.LockBuffer();

   //  Set the item in the tab control.
   m_TabCtrl.SetItem(0, &tcItem);

   pszString.UnlockBuffer();
}