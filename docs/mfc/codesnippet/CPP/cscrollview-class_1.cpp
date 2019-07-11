BOOL CMyScrollView::OnEraseBkgnd(CDC* pDC)
{
   CBrush br(GetSysColor(COLOR_WINDOW));
   FillOutsideRect(pDC, &br);
   return TRUE;                   // Erased
}