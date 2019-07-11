void CMyScrollView::OnUpdate(CView* /*pSender*/, LPARAM /*lHint*/,
   CObject* /*pHint*/)
{
   // Implement a GetMyDocSize() member function in 
   // your document class; it returns a CSize.
   CMyScrollDoc* pMyDoc = (CMyScrollDoc*)GetDocument();
   SetScrollSizes(MM_LOENGLISH, pMyDoc->GetMyDocSize());
   ResizeParentToFit();   // Default bShrinkOnly argument
}