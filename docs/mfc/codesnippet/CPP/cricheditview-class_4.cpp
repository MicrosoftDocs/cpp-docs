void CMyRichEditView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
   CRect rectPrintPage = GetPrintRect();  // Measured in MM_TWIPS

   pInfo->SetMaxPage((m_nDocSizeInInches * 1440) / rectPrintPage.Height());

   CRichEditView::OnBeginPrinting(pDC, pInfo);
}