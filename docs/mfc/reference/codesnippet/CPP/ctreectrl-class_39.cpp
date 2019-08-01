CString str;
HTREEITEM hItem;

// Insert 20 items into the tree control making every item's
// data be the handle of the item.
for (int i = 0; i < 20; i++)
{
   str.Format(TEXT("item %d"), i);
   hItem = m_TreeCtrl.InsertItem(str);

   if (hItem != NULL)
   {
      m_TreeCtrl.SetItemData(hItem, (DWORD_PTR)hItem);
   }
}