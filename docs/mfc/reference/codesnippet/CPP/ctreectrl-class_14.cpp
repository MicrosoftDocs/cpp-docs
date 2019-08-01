HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

// Delete all of the children of hmyItem whose item data is
// not equal to zero.
if (m_TreeCtrl.ItemHasChildren(hmyItem))
{
   HTREEITEM hNextItem;
   HTREEITEM hChildItem = m_TreeCtrl.GetChildItem(hmyItem);

   while (hChildItem != NULL)
   {
      hNextItem = m_TreeCtrl.GetNextItem(hChildItem, TVGN_NEXT);

      if (m_TreeCtrl.GetItemData(hChildItem) != 0)
      {
         m_TreeCtrl.DeleteItem(hChildItem);
      }

      hChildItem = hNextItem;
   }
}