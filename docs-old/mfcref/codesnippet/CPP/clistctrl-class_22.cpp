		ASSERT(m_myListCtrl.GetImageList(LVSIL_NORMAL) == NULL);

		m_myListCtrl.SetImageList(&m_lcImageList, LVSIL_NORMAL);
		ASSERT(m_myListCtrl.GetImageList(LVSIL_NORMAL) == &m_lcImageList);