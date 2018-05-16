// This example adds the WS_CLIPCHILDREN style to the window.
// No Styles are removed from the window.
void CMyView::OnInitialUpdate()
{
   CView::OnInitialUpdate();
   ModifyStyle(0, WS_CLIPCHILDREN);
}