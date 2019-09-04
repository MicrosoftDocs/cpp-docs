void CDCView::DoInvertRect(CDC *pDC)
{
   // invert rect from 20,20 to 50,50
   CRect rect(20, 20, 50, 50);
   pDC->InvertRect(rect);

   // inverting again restores to normal
   ::Sleep(1000);
   pDC->InvertRect(rect);
}