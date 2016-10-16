void CMyView::OnDraw(CDC* pDC)
{
   CMyDoc* pDoc = GetDocument();
   ASSERT_VALID(pDoc);
   if (!pDoc)
      return;

   CString s = pDoc->GetData();   // Returns a CString
   CRect rect;
   GetClientRect(&rect);

   pDC->SetTextAlign(TA_BASELINE | TA_CENTER);
   pDC->TextOut(rect.right / 2, rect.bottom / 2, s, s.GetLength());
}