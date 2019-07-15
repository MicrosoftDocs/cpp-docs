UINT uCount = m_TreeCtrl.GetVisibleCount();
HTREEITEM hItem = m_TreeCtrl.GetFirstVisibleItem();

// Toggle the check state of all the visible items.
for (UINT i = 0; i < uCount; i++)
{
   ASSERT(hItem != NULL);
   m_TreeCtrl.SetCheck(hItem, !m_TreeCtrl.GetCheck(hItem));
   hItem = m_TreeCtrl.GetNextVisibleItem(hItem);
}