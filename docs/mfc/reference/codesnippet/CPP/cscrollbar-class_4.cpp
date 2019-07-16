// Sets minimum (0) and maximum (10) position values for the
// CScrollBar control. m_ScrollBarVert is of type CScrollBar class,
// and it is a member variable in CMyDialog class.
m_ScrollBarVert.SetScrollRange(0, 10);

// Set the position of the scroll box.
m_ScrollBarVert.SetScrollPos(5);

// Disable the down arrow of the scroll bar. By default, both arrows
// are enabled.
m_ScrollBarVert.EnableScrollBar(ESB_DISABLE_DOWN);