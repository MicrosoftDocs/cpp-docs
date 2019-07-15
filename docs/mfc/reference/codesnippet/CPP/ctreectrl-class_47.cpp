TVSORTCB tvs;

// Sort the tree control's items using my
// callback procedure.
tvs.hParent = TVI_ROOT;
tvs.lpfnCompare = MyCompareProc;
tvs.lParam = (LPARAM)&m_TreeCtrl;

m_TreeCtrl.SortChildrenCB(&tvs);