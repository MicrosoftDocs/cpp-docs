//modify the third item to be highlighted
TCITEM curItem = {0};

m_TabCtrl.DeselectAll(FALSE); //reset all tab items
curItem.mask = TCIF_STATE;
m_TabCtrl.GetItem(2, &curItem);
curItem.mask = TCIF_STATE;
curItem.dwState = TCIS_HIGHLIGHTED;
curItem.dwStateMask = TCIS_HIGHLIGHTED;
m_TabCtrl.SetItem(2, &curItem);