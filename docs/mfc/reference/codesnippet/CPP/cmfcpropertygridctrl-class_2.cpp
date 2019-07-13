m_wndPropList.EnableHeaderCtrl();
m_wndPropList.EnableDescriptionArea();
m_wndPropList.SetVSDotNetLook(m_bDotNetLook);
// BOOL m_bMarkChanged
m_wndPropList.MarkModifiedProperties(m_bMarkChanged);
// BOOL m_bPropListCategorized
m_wndPropList.SetAlphabeticMode(!m_bPropListCategorized);
// BOOL m_bShowDragContext
m_wndPropList.SetShowDragContext(m_bShowDragContext);