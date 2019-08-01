// Show the item at the point myPoint in bold.
UINT uFlags;
HTREEITEM hItem = m_TreeCtrl.HitTest(myPoint, &uFlags);

if ((hItem != NULL) && (TVHT_ONITEM & uFlags))
{
   m_TreeCtrl.SetItem(hItem, TVIF_STATE, NULL, 0, 0, TVIS_BOLD,
                      TVIS_BOLD, 0);
}