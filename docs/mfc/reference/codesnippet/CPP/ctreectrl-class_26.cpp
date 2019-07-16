HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

// Show all of the previous visible items of hmyItem in bold.
HTREEITEM hItem = hmyItem;

while (hItem != NULL)
{
   m_TreeCtrl.SetItemState(hItem, TVIS_BOLD, TVIS_BOLD);
   hItem = m_TreeCtrl.GetPrevVisibleItem(hItem);
}