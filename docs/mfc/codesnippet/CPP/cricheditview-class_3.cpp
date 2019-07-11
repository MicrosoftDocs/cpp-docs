void CMyRichEditView::OnPrint(CDC* pDC, CPrintInfo* pInfo)
{
   UNREFERENCED_PARAMETER(pInfo);

   // Get the current paper size and construct an actual printing
   // rectangle by leaving out one half inch margin from each side.
   CSize sizePaper = GetPaperSize();
   CRect rectMargins(720, 720, sizePaper.cx - 720,
      sizePaper.cy - 720);

   // Need to set the margins when printing from CRichEditView
   SetMargins(rectMargins);

   // Set up three rectangular regions spaced an inch apart
   CRect rectHeader(0, 0, rectMargins.right, 1440);
   CRect rectBody(0, 1440, rectMargins.right, 1440 * 2);
   CRect rectFooter(0, 1440 * 2, rectMargins.right, 1440 * 3);

   // Format the first 10 characters in the buffer.
   int nSavedDC = pDC->SaveDC();
   PrintInsideRect(pDC, rectHeader, 0, 10, TRUE); // characters 0-10
   pDC->RestoreDC(nSavedDC);

   // Format the second 10 characters in the buffer.
   nSavedDC = pDC->SaveDC();
   PrintInsideRect(pDC, rectBody, 10, 20, TRUE); // characters 10-20
   pDC->RestoreDC(nSavedDC);

   // Format the third 10 characters in the buffer.
   nSavedDC = pDC->SaveDC();
   PrintInsideRect(pDC, rectFooter, 20, 30, TRUE); // characters 20-30
   pDC->RestoreDC(nSavedDC);

   //   CRichEditView::OnPrint(pDC, pInfo);
}