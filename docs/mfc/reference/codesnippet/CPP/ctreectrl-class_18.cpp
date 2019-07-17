CRect rect;
HTREEITEM hUS = m_treeCtrl.MapAccIdToItem(accIdUS);
m_treeCtrl.GetItemPartRect(hUS, TVGIPR_BUTTON, &rect);
m_treeCtrl.GetDC()->Draw3dRect(&rect, RGB(255, 0, 0), RGB(0, 0, 255));