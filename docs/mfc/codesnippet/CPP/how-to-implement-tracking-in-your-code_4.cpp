// put hatching over the item if it is currently open
if (pItem->GetItemState() == COleClientItem::openState ||
   pItem->GetItemState() == COleClientItem::activeUIState)
{
   pTracker->m_nStyle |= CRectTracker::hatchInside;
}