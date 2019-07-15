   else if (m_Tracker.HitTest(point) < 0)
   {
   // just to demonstrate CRectTracker::TrackRubberBand
   CRectTracker trackerRubber;
   if (trackerRubber.TrackRubberBand(this, point, TRUE))
   {
      MessageBeep(0); // beep indicates TRUE

      // See if rubber band intersects 
      // with the doc's tracker
      CRect rectT;
      // so intersect rect works
      trackerRubber.m_rect.NormalizeRect();
      if (rectT.IntersectRect(trackerRubber.m_rect, m_Tracker.m_rect))
      {
         // If so, put resize handles on it (i.e. select it)
         if (m_Tracker.m_nStyle & CRectTracker::resizeInside)
         {
            // swap from resize inside to resize outside for effect
            m_Tracker.m_nStyle &= ~CRectTracker::resizeInside;
            m_Tracker.m_nStyle |= CRectTracker::resizeOutside;
         }
         else
         {
            // Just use inside resize handles on first time
            m_Tracker.m_nStyle &= ~CRectTracker::resizeOutside;
            m_Tracker.m_nStyle |= CRectTracker::resizeInside;
         }
         GetDocument()->SetModifiedFlag();
         GetDocument()->UpdateAllViews(NULL);
      }
   }
   }