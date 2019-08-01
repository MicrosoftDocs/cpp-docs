// Set the item at the point myPoint as the drop target.
UINT uFlags;
HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
{
   m_TreeCtrl.SelectDropTarget(hItem);
   ASSERT(m_TreeCtrl.GetDropHilightItem() == hItem);
}