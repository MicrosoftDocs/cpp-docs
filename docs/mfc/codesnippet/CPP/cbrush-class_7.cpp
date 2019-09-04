// Example for CBrush::GetLogBrush
LOGBRUSH logbrush;
brushExisting.GetLogBrush(&logbrush);
CBrush brushOther(logbrush.lbColor);

// Another example
// Declare a LOGBRUSH
LOGBRUSH logBrush;

// Using a bitmap for this example.
// The bitmap should be a project resource.
CBitmap bm;
bm.LoadBitmap(IDB_BRUSH);

try
{
   // Create a brush
   CBrush brush1(&bm);

   // Use GetLogBrush to fill the LOGBRUSH structure
   brush1.GetLogBrush(&logBrush);

   // Create a second brush using the LOGBRUSH data
   CBrush brush2;
   brush2.CreateBrushIndirect(&logBrush);

   // Use the first brush
   CBrush *pOldBrush = (CBrush *)pDC->SelectObject(&brush1);
   pDC->Rectangle(CRect(50, 50, 150, 150));

   // The second brush has the specified characteristics
   // of the first brush
   pDC->SelectObject(&brush2);
   pDC->Ellipse(200, 50, 300, 150);

   // Reselect the original brush
   pDC->SelectObject(pOldBrush);
}
catch (CResourceException *e)
{
   e->ReportError();
   e->Delete();
}