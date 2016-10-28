void CChildView::OnSizing(UINT nSide, LPRECT lpRect)
{
   // The window size is changing; cancel any existing drawing tasks.
   m_DrawingTasks.cancel();
}