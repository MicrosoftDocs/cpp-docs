void CDCView::DrawFC(CDC *pDC)
{
   CRect rc;
   GetClientRect(&rc);

   rc.left = rc.right - ::GetSystemMetrics(SM_CXHSCROLL);
   rc.top = rc.bottom - ::GetSystemMetrics(SM_CYVSCROLL);

   pDC->DrawFrameControl(rc, DFC_SCROLL, DFCS_SCROLLSIZEGRIP);
}