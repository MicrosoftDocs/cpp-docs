// Look at all of the root-level items
HTREEITEM hCurrent = m_TreeCtrl.GetChildItem(TVI_ROOT);
while (hCurrent != NULL)
{
   // Get the text for the item. Notice we use TVIF_TEXT because
   // we want to retrieve only the text, but also specify TVIF_HANDLE
   // because we're getting the item by its handle.
   TVITEM item;
   TCHAR szText[1024];
   item.hItem = hCurrent;
   item.mask = TVIF_TEXT | TVIF_HANDLE;
   item.pszText = szText;
   item.cchTextMax = 1024;

   BOOL bWorked = m_TreeCtrl.GetItem(&item);

   // Try to get the next item
   hCurrent = m_TreeCtrl.GetNextItem(hCurrent, TVGN_NEXT);

   // If we successfuly retrieved an item, and the item's text
   // contains a lowercase letter 'e', delete the item.
   if (bWorked && _tcschr(item.pszText, 'e'))
      m_TreeCtrl.DeleteItem(item.hItem);
}