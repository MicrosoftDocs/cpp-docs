m_ListImageList.Create(16, 16, ILC_COLOR, 2, 2);
m_ListImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
m_ListImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON2));
m_ListCtrl.SetImageList(&m_ListImageList, LVSIL_SMALL);