CDockingManager *pDockManager = GetDockingManager();
ASSERT_VALID(pDockManager);
pDockManager->AdjustPaneFrames();
pDockManager->EnableDockSiteMenu();
pDockManager->SetDockingMode(DT_STANDARD);