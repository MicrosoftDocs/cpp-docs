void CChildView::OnDestroy()
{
   // The window is being destroyed; cancel any existing drawing tasks.
   m_DrawingTasks.cancel();
   // Wait for any existing tasks to finish.
   m_DrawingTasks.wait();
}