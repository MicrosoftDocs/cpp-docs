// Clear the text of the item at point myPoint.
UINT uFlags;
HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
{
   m_TreeCtrl.SetItemText(hItem, NULL);
}