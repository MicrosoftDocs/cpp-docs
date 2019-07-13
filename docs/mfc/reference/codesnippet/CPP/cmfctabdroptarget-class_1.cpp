HWND hWndTab = NULL;
CBasePane *basePane = new CBasePane();
CMFCBaseTabCtrl *pTabParent = basePane->GetParentTabWnd(hWndTab);
CMFCTabDropTarget *dropTarget = new CMFCTabDropTarget();
dropTarget->Register(pTabParent);