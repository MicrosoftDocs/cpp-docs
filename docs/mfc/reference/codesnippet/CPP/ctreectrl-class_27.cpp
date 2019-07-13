// Expand the selected item and make it visible, if possible.
HTREEITEM hItem = m_TreeCtrl.GetSelectedItem();

if ((hItem != NULL) && m_TreeCtrl.ItemHasChildren(hItem))
{
   m_TreeCtrl.Expand(hItem, TVE_EXPAND);
   m_TreeCtrl.EnsureVisible(hItem);
}