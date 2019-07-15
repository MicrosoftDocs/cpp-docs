// int cxProgress
// BOOL m_bInfiniteProgressMode
CMFCRibbonProgressBar *pProgressBar = new CMFCRibbonProgressBar(ID_STATUSBAR_PROGRESS, cxProgress);

pProgressBar->SetInfiniteMode(m_bInfiniteProgressMode);
pProgressBar->SetRange(0, 200);
pProgressBar->SetPos(200, true);