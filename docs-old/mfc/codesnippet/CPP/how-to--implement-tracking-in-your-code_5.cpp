BOOL CMainView::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message)
{
   if (pWnd == this && m_pSelection != NULL)
   {
      // give the tracker for the selection a chance
      CRectTracker tracker;
      SetupTracker(&tracker, m_pSelection);
      if (tracker.SetCursor(this, nHitTest))
         return TRUE;
   }
   return CScrollView::OnSetCursor(pWnd, nHitTest, message);
}