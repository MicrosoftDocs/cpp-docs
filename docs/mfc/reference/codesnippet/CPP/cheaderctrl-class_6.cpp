// NOTE: CMyHeaderCtrl is a class derived from CHeaderCtrl.
// The CMyHeaderCtrl object was created as follows:
//
//   CMyHeaderCtrl m_myHeader;
//   myHeader.Create(WS_CHILD | WS_VISIBLE | HDS_HORZ,
//      CRect(10, 10, 600, 50), pParentWnd, 1);

// This example implements the DrawItem method for a
// CHeaderCtrl-derived class that draws every item as a
// 3D button using the text color red.
void CMyHeaderCtrl::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
   // This code only works with header controls.
   ASSERT(lpDrawItemStruct->CtlType == ODT_HEADER);

   HDITEM hdi;
   const int c_cchBuffer = 256;
   TCHAR lpBuffer[c_cchBuffer];

   hdi.mask = HDI_TEXT;
   hdi.pszText = lpBuffer;
   hdi.cchTextMax = c_cchBuffer;

   GetItem(lpDrawItemStruct->itemID, &hdi);

   // Draw the button frame.
   ::DrawFrameControl(lpDrawItemStruct->hDC,
                      &lpDrawItemStruct->rcItem, DFC_BUTTON, DFCS_BUTTONPUSH);

   // Draw the items text using the text color red.
   COLORREF crOldColor = ::SetTextColor(lpDrawItemStruct->hDC,
                                        RGB(255, 0, 0));
   ::DrawText(lpDrawItemStruct->hDC, lpBuffer,
              (int)_tcsnlen(lpBuffer, c_cchBuffer),
              &lpDrawItemStruct->rcItem, DT_SINGLELINE | DT_VCENTER | DT_CENTER);
   ::SetTextColor(lpDrawItemStruct->hDC, crOldColor);
}