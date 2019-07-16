// Set SCROLLINFO for the scroll bar. m_ScrollBarHorz is of type
// CScrollBar class, and it is a member variable in CMyDialog class.
SCROLLINFO info;
info.cbSize = sizeof(SCROLLINFO);
info.fMask = SIF_ALL;
info.nMin = 0;
info.nMax = 10;
info.nPage = 2;
info.nPos = 5;
info.nTrackPos = 2;
m_ScrollBarHorz.SetScrollInfo(&info);