HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

// Show all of the children of hmyItem in bold.
if (m_TreeCtrl.ItemHasChildren(hmyItem))
{
   HTREEITEM hItem = m_TreeCtrl.GetChildItem(hmyItem);

   while (hItem != NULL)
   {
      m_TreeCtrl.SetItemState(hItem, TVIS_BOLD, TVIS_BOLD);
      hItem = m_TreeCtrl.GetNextSiblingItem(hItem);
   }
}