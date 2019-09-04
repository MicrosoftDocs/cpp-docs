// This implementation uses GDI paths to draw the outline of
// some text in a TrueType font. The path is used to record the way
// the TrueType font would be drawn. Then, the function uses the data
// returned from CDC::GetPath() to draw the font--without filling it.
void CDCView::DrawPath(CDC *pDC)
{
   // Describe a 24-point truetype font of normal weight
   LOGFONT lf;
   memset(&lf, 0, sizeof(lf));
   lf.lfHeight = -MulDiv(24, pDC->GetDeviceCaps(LOGPIXELSY), 72);
   lf.lfWeight = FW_NORMAL;
   lf.lfOutPrecision = OUT_TT_ONLY_PRECIS;

   // create and select it
   CFont newFont;
   if (!newFont.CreateFontIndirect(&lf))
      return;
   CFont *pOldFont = pDC->SelectObject(&newFont);

   // use a path to record how the text was drawn
   pDC->BeginPath();
   pDC->TextOut(10, 10, _T("Outline this!"));
   pDC->EndPath();

   // Find out how many points are in the path. Note that
   // for long strings or complex fonts, this number might be
   // gigantic!
   int nNumPts = pDC->GetPath(NULL, NULL, 0);
   if (nNumPts == 0)
      return;

   // Allocate memory to hold points and stroke types from
   // the path.
   LPPOINT lpPoints = NULL;
   LPBYTE lpTypes = NULL;
   try
   {
      lpPoints = new POINT[nNumPts];
      lpTypes = new BYTE[nNumPts];
   }
   catch (CException *pe)
   {
      delete[] lpPoints;
      lpPoints = NULL;
      delete[] lpTypes;
      lpTypes = NULL;
      pe->Delete();
   }
   if (lpPoints == NULL || lpTypes == NULL)
      return;

   // Now that we have the memory, really get the path data.
   nNumPts = pDC->GetPath(lpPoints, lpTypes, nNumPts);

   // If it worked, draw the lines. Windows 98 doesn't support
   // the PolyDraw API, so we use our own member function to do
   // similar work. If you're targeting only later versions of
   // Windows, you can use the PolyDraw() API and avoid the
   // COutlineView::PolyDraw() member function.

   if (nNumPts != -1)
      pDC->PolyDraw(lpPoints, lpTypes, nNumPts);

   // Release the memory we used
   delete[] lpPoints;
   delete[] lpTypes;

   // Put back the old font
   pDC->SelectObject(pOldFont);

   return;
}