int CMyView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
   if (CView::OnCreate(lpCreateStruct) == -1)
      return -1;

   m_myCtl.Create(NULL, WS_VISIBLE, CRect(50, 50, 100, 100), this, 0);
   m_myCtl.SetCaption(_T("Control created"));

   return 0;
}