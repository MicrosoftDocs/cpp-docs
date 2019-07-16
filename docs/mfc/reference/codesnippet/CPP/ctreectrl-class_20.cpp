// Show all of the visible items in bold.
HTREEITEM hItem = m_TreeCtrl.GetFirstVisibleItem();

while (hItem != NULL)
{
   m_TreeCtrl.SetItemState(hItem, TVIS_BOLD, TVIS_BOLD);
   ASSERT(TVIS_BOLD & m_TreeCtrl.GetItemState(hItem, TVIS_BOLD));
   hItem = m_TreeCtrl.GetNextVisibleItem(hItem);
}