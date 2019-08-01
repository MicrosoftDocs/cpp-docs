CWinApp* pApp = AfxGetApp();

m_ToolBarImages.Create(16, 16, ILC_COLOR, 4, 4);
m_ToolBarImages.Add(pApp->LoadIcon(IDI_BLK));
m_ToolBarImages.Add(pApp->LoadIcon(IDI_RED));
m_ToolBarImages.Add(pApp->LoadIcon(IDI_YELL));
m_ToolBarImages.Add(pApp->LoadIcon(IDI_WHI));

m_ToolBarDisabledImages.Create(16, 16, ILC_COLOR, 4, 4);
m_ToolBarDisabledImages.Add(pApp->LoadIcon(IDI_DIS_BLK));
m_ToolBarDisabledImages.Add(pApp->LoadIcon(IDI_DIS_RED));
m_ToolBarDisabledImages.Add(pApp->LoadIcon(IDI_DIS_YELL));
m_ToolBarDisabledImages.Add(pApp->LoadIcon(IDI_DIS_WHI));

m_ToolBarCtrl.SetImageList(&m_ToolBarImages);
m_ToolBarCtrl.SetDisabledImageList(&m_ToolBarDisabledImages);