// Set the insert mark to be before the item at the point myPoint.
UINT uFlags;
HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
{
   m_TreeCtrl.SetInsertMark(hItem, FALSE);
}