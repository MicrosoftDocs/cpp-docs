BOOL CMyDlgBar::OnEraseBkgnd(CDC *pDC)
{
   CWnd *pParent = GetParent();
   ASSERT_VALID(pParent);
   CPoint pt(0, 0);
   MapWindowPoints(pParent, &pt, 1);
   pt = pDC->OffsetWindowOrg(pt.x, pt.y);
   LRESULT lResult = pParent->SendMessage(WM_ERASEBKGND,
                                          (WPARAM)pDC->m_hDC, 0L);
   pDC->SetWindowOrg(pt.x, pt.y);
   return (BOOL)lResult;
}