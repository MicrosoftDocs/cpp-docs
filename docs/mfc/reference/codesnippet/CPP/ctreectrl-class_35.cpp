m_TreeCtrl.ModifyStyle(0, TVS_CHECKBOXES);

HTREEITEM aItem = m_TreeCtrl.InsertItem(_T("AAA"));
m_TreeCtrl.SetCheck(aItem);