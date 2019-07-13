ASSERT(m_TreeCtrl.GetImageList(TVSIL_NORMAL) == NULL);

m_TreeCtrl.SetImageList(&m_TreeImages, TVSIL_NORMAL);
ASSERT(m_TreeCtrl.GetImageList(TVSIL_NORMAL) == &m_TreeImages);