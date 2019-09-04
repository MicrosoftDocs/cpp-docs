// Resource handle to bitmap.
HRSRC hRes;
// Global handles to bitmap resource.
HGLOBAL hData;
void *hLockedData;
CBrush brush;

// Find the resource handle.
hRes = ::FindResource(AfxGetResourceHandle(),
                      MAKEINTRESOURCE(IDB_BRUSH), RT_BITMAP);
if (hRes != NULL)
{
   // Lock and Load (or Load and Lock).
   if (((hData = ::LoadResource(AfxGetResourceHandle(),
                                hRes)) != NULL) &&
       ((hLockedData = ::LockResource(hData)) != NULL))
   {
      // Initialize the brush.
      brush.CreateDIBPatternBrush((const void *)hLockedData,
                                  DIB_RGB_COLORS);

      // Select the brush into the device context.
      CBrush *pOldBrush = pDC->SelectObject(&brush);

      // Draw.
      pDC->Rectangle(50, 50, 200, 200);

      // Restore the original device context.
      pDC->SelectObject(pOldBrush);

      // Free the resource.
      ::FreeResource(hLockedData);
   }
}