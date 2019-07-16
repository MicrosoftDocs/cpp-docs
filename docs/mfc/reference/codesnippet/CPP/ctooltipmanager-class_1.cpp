CMFCToolTipInfo params;
params.m_bVislManagerTheme = TRUE;

theApp.GetTooltipManager()->SetTooltipParams(AFX_TOOLTIP_TYPE_ALL, RUNTIME_CLASS(CMFCToolTipCtrl), &params);