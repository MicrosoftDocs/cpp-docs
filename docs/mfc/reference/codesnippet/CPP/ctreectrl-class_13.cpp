// Use the highliight color for the insert mark color.
COLORREF crColor = ::GetSysColor(COLOR_HIGHLIGHT);
m_TreeCtrl.SetInsertMarkColor(crColor);
ASSERT(m_TreeCtrl.GetInsertMarkColor() == crColor);