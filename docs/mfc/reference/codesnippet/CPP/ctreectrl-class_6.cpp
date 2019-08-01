HTREEITEM hItem = m_TreeCtrl.GetSelectedItem();
// hmyItem is the item that I want to ensure is visible.
HTREEITEM hmyItem = m_TreeCtrl.GetChildItem(hItem);

// Expand the parent, if possible.
HTREEITEM hParent = m_TreeCtrl.GetParentItem(hmyItem);
if (hParent != NULL)
   m_TreeCtrl.Expand(hParent, TVE_EXPAND);

// Ensure the item is visible.
m_TreeCtrl.EnsureVisible(hmyItem);