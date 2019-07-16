HTREEITEM hItem = m_TreeCtrl.GetSelectedItem();

CImageList *pImageList = m_TreeCtrl.CreateDragImage(hItem);

// Do something with the image list.

delete pImageList;