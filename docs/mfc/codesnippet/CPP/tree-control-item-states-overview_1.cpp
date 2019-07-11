TVITEM curItem;
HTREEITEM hParentItem;

hParentItem = m_TreeCtrl.GetSelectedItem();

//modify the parent item to keep the '+' sign
curItem.mask = TVIF_STATE | TVIF_HANDLE;
curItem.hItem = hParentItem;
curItem.state = TVIS_EXPANDPARTIAL;
curItem.stateMask = TVIS_EXPANDPARTIAL;
m_TreeCtrl.SetItem(&curItem);