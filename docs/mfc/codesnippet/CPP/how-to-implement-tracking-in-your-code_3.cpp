// setup resize handles if item is selected
if (pItem == m_pSelection)
pTracker->m_nStyle |= CRectTracker::resizeInside;

// put correct border depending on item type
if (pItem->GetType() == OT_LINK)
pTracker->m_nStyle |= CRectTracker::dottedLine;
else
pTracker->m_nStyle |= CRectTracker::solidLine;