// Select the item that is at the point myPoint.
UINT uFlags;
HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
{
   m_TreeCtrl.SelectItem(hItem);
}