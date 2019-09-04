// The command handler for ID_SHAPE_COLOR (menu command to change
// the color of the currently selected shape) was added to the message
// map of CMyShape (note, not CMyView) using the Properties window.
// The menu item will be automatically enabled or disabled, depending
// on whether a CMyShape is currently selected in the view, that is,
// depending on whether CMyView::m_pActiveView is NULL.  It is not
// necessary to implement an ON_UPDATE_COMMAND_UI handler to enable
// or disable the menu item.
BEGIN_MESSAGE_MAP(CMyShape, CCmdTarget)
ON_COMMAND(ID_SHAPE_COLOR, &CMyShape::OnShapeColor)
END_MESSAGE_MAP()