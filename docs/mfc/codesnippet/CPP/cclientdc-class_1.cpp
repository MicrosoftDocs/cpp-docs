void CDCView::DrawInClientDC(CDC *pDC)
{
   UNREFERENCED_PARAMETER(pDC);
   CClientDC clientDC(this);
   clientDC.TextOut(10, 10, CString(_T("I used a client DC!")));
}