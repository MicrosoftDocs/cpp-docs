// CBrush::CBrush.
CBrush brush1;                           // Must initialize!
brush1.CreateSolidBrush(RGB(0, 0, 255)); // Blue brush.

CRect rc;
GetClientRect(&rc);
ScreenToClient(&rc);

// Save original brush.
CBrush *pOrigBrush = (CBrush *)pDC->SelectObject(&brush1);

// Paint upper left corner with blue brush.
pDC->Rectangle(0, 0, rc.Width() / 2, rc.Height() / 2);

// These constructors throw resource exceptions.
try
{
   // CBrush::CBrush(COLORREF crColor)
   CBrush brush2(RGB(255, 0, 0)); // Solid red brush.

   // CBrush::CBrush(int nIndex, COLORREF crColor)
   // Hatched green brush.
   CBrush brush3(HS_DIAGCROSS, RGB(0, 255, 0));

   // CBrush::CBrush(CBitmap* pBitmap)
   CBitmap bmp;
   // Load a resource bitmap.
   bmp.LoadBitmap(IDB_BRUSH);
   CBrush brush4(&bmp);

   pDC->SelectObject(&brush2);

   // Paint upper right corner with red brush.
   pDC->Rectangle(rc.Width() / 2, 0, rc.Width(),
                  rc.Height() / 2);

   pDC->SelectObject(&brush3);

   // Paint lower left corner with green hatched brush.
   pDC->Rectangle(0, rc.Height() / 2, rc.Width() / 2,
                  rc.Height());

   pDC->SelectObject(&brush4);

   // Paint lower right corner with resource brush.
   pDC->Rectangle(rc.Width() / 2, rc.Height() / 2,
                  rc.Width(), rc.Height());
}
catch (CResourceException *e)
{
   e->ReportError();
   e->Delete();
}

// Reselect original brush into device context.
pDC->SelectObject(pOrigBrush);