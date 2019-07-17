CRect rect;
HTREEITEM hLast = m_treeCtrl.GetLastVisibleItem();
m_treeCtrl.GetItemPartRect(hLast, TVGIPR_BUTTON, &rect);
m_treeCtrl.GetDC()->Draw3dRect(&rect, RGB(255, 0, 0), RGB(0, 0, 255));