// Example 1:
// Create a horizontal CScrollBar control as a child window of CMyDialog
// class (a CDialog-derived class). The scroll bar is NOT visible until the
// call ShowScrollBar() is made. m_ScrollBarHorz is of type CScrollBar class,
// and it is a member variable in CMyDialog class.
VERIFY(m_ScrollBarHorz.Create(SBS_HORZ | SBS_TOPALIGN | WS_CHILD,
                              CRect(5, 5, 100, 30), this, IDC_SCROLLBARCTRL));

m_ScrollBarHorz.ShowScrollBar();

// Example 2:
// Create a vertical CScrollBar control as a child window of CMyDialog
// class (a CDialog-derived class). m_ScrollBarVert is of type CScrollBar
// class, and it is a member variable in CMyDialog class.
VERIFY(m_ScrollBarVert.Create(SBS_VERT | SBS_LEFTALIGN | WS_CHILD |
                                  WS_VISIBLE,
                              CRect(5, 30, 30, 130), this, IDC_SCROLLBARCTRL));