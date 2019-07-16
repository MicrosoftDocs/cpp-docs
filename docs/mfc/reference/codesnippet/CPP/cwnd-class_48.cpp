void CMdiView::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar *pScrollBar)
{
   // Get the minimum and maximum scroll-bar positions.
   int minpos;
   int maxpos;
   GetScrollRange(SB_HORZ, &minpos, &maxpos);
   maxpos = GetScrollLimit(SB_HORZ);

   // Get the current position of scroll box.
   int curpos = GetScrollPos(SB_HORZ);

   // Determine the new position of scroll box.
   switch (nSBCode)
   {
   case SB_LEFT: // Scroll to far left.
      curpos = minpos;
      break;

   case SB_RIGHT: // Scroll to far right.
      curpos = maxpos;
      break;

   case SB_ENDSCROLL: // End scroll.
      break;

   case SB_LINELEFT: // Scroll left.
      if (curpos > minpos)
         curpos--;
      break;

   case SB_LINERIGHT: // Scroll right.
      if (curpos < maxpos)
         curpos++;
      break;

   case SB_PAGELEFT: // Scroll one page left.
   {
      // Get the page size.
      SCROLLINFO info;
      GetScrollInfo(SB_HORZ, &info, SIF_ALL);

      if (curpos > minpos)
         curpos = max(minpos, curpos - (int)info.nPage);
   }
   break;

   case SB_PAGERIGHT: // Scroll one page right.
   {
      // Get the page size.
      SCROLLINFO info;
      GetScrollInfo(SB_HORZ, &info, SIF_ALL);

      if (curpos < maxpos)
         curpos = min(maxpos, curpos + (int)info.nPage);
   }
   break;

   case SB_THUMBPOSITION: // Scroll to absolute position. nPos is the position
      curpos = nPos;      // of the scroll box at the end of the drag operation.
      break;

   case SB_THUMBTRACK: // Drag scroll box to specified position. nPos is the
      curpos = nPos;   // position that the scroll box has been dragged to.
      break;
   }

   // Set the new position of the thumb (scroll box).
   SetScrollPos(SB_HORZ, curpos);

   CView::OnHScroll(nSBCode, nPos, pScrollBar);
}