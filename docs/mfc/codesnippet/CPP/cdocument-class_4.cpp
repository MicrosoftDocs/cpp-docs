//To get the first view in the list of views:
//To get the first view in the list of views:
// POSITION pos = GetFirstViewPosition();
// CView* pFirstView = GetNextView(pos);
//
// This example uses CDocument::GetFirstViewPosition
// and GetNextView to repaint each view.
// An easier way to accomplish the same result is to call
// UpdateAllViews(NULL);
void CExampleDoc::OnRepaintAllViews()
{
   POSITION pos = GetFirstViewPosition();
   while (pos != NULL)
   {
      CView *pView = GetNextView(pos);
      pView->UpdateWindow();
   }
}