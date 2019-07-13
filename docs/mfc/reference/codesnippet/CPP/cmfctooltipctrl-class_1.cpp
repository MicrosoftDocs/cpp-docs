CMFCToolTipInfo *params = new CMFCToolTipInfo();

params->m_bBoldLabel = FALSE;
params->m_bDrawDescription = FALSE;
params->m_bDrawIcon = FALSE;
params->m_bRoundedCorners = TRUE;
params->m_bDrawSeparator = FALSE;
params->m_clrFill = RGB(255, 255, 255);
params->m_clrFillGradient = RGB(228, 228, 240);
params->m_clrText = RGB(61, 83, 80);
params->m_clrBorder = RGB(144, 149, 168);

CMFCToolTipCtrl *tipCtrl = new CMFCToolTipCtrl(params);
tipCtrl->SetDescription(_T("tool tip control"));
tipCtrl->SetFixedWidth(100, 150);