BOOL CExampleView::OnPreparePrinting(CPrintInfo* pInfo)
{
   //The document has 2 pages.
   pInfo->SetMaxPage(2);
   return CView::DoPreparePrinting(pInfo);
}