void CInPlaceFrame::OnDestroy()
{
   m_wndToolBar.DestroyWindow();
   m_wndFormatBar.DestroyWindow();
   COleIPFrameWndEx::OnDestroy();
}

void CInPlaceFrame::RepositionFrame(LPCRECT lpPosRect, LPCRECT lpClipRect)
{
   CRect rectNew = lpPosRect;
   rectNew.left -= HORZ_TEXTOFFSET;
   rectNew.top -= VERT_TEXTOFFSET;
   m_wndResizeBar.BringWindowToTop();
   COleIPFrameWndEx::RepositionFrame(&rectNew, lpClipRect);
   CWnd *pWnd = GetActiveView();
   if (pWnd != NULL)
      pWnd->BringWindowToTop();
   m_wndRulerBar.BringWindowToTop();
}

void CInPlaceFrame::RecalcLayout(BOOL bNotify)
{
   if (m_wndResizeBar.m_hWnd != NULL)
      m_wndResizeBar.BringWindowToTop();
   COleIPFrameWndEx::RecalcLayout(bNotify);
   CWnd *pWnd = GetActiveView();
   if (pWnd != NULL)
      pWnd->BringWindowToTop();
   if (m_wndRulerBar.m_hWnd != NULL)
      m_wndRulerBar.BringWindowToTop();

   // at least 12 pt region plus ruler if it exists
   CDisplayIC dc;
   CSize size;
   size.cy = MulDiv(12, dc.GetDeviceCaps(LOGPIXELSY), 72) + 1;
   size.cx = dc.GetDeviceCaps(LOGPIXELSX) / 4; // 1/4"
   size.cx += HORZ_TEXTOFFSET;                 //adjust for offset
   size.cy += VERT_TEXTOFFSET;
   if (m_wndRulerBar.m_hWnd != NULL && m_wndRulerBar.IsVisible())
   {
      CRect rect;
      m_wndRulerBar.GetWindowRect(&rect);
      size.cy += rect.Height();
   }
   m_wndResizeBar.SetMinSize(size);
}

void CInPlaceFrame::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType)
{
   COleIPFrameWndEx::CalcWindowRect(lpClientRect, nAdjustType);
}