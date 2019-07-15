void CMyView::OnPrint(CDC* pDC, CPrintInfo* pInfo)
{
   UNREFERENCED_PARAMETER(pInfo);

   // Print headers and/or footers, if desired.
   // Find portion of document corresponding to pInfo->m_nCurPage.
   OnDraw(pDC);
}