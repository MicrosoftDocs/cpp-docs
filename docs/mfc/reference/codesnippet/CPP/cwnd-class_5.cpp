// Use BeginPaint and EndPaint when responding to WM_PAINT message
// An alternative method is to use CPaintDC in place of
// BeginPaint and EndPaint
void CMdiView::OnPaint()
{
   PAINTSTRUCT ps;
   CDC *pDC = BeginPaint(&ps);

   pDC->Rectangle(CRect(0, 0, 100, 100));

   EndPaint(&ps);

   // Do not call CView::OnPaint() for painting messages
}