void CMyScrollView::OnInitialUpdate()
{
   CScrollView::OnInitialUpdate();

   // The GetMyDocSize() member function is implemented in 
   // your document class. The return type is CSize.
   CMyScrollDoc* pMyDoc = (CMyScrollDoc*)GetDocument();
   SetScrollSizes(MM_TEXT, pMyDoc->GetMyDocSize());
}