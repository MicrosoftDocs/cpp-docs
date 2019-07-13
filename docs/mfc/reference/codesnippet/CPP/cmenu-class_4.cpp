// Override DrawItem() to implement drawing for an owner-draw CMenu object.
// CColorMenu is a CMenu-derived class.
void CColorMenu::DrawItem(LPDRAWITEMSTRUCT lpDIS)
{
   CDC *pDC = CDC::FromHandle(lpDIS->hDC);
   COLORREF cr = (COLORREF)lpDIS->itemData; // RGB in item data

   if (lpDIS->itemAction & ODA_DRAWENTIRE)
   {
      // Paint the color item in the color requested
      CBrush br(cr);
      pDC->FillRect(&lpDIS->rcItem, &br);
   }

   if ((lpDIS->itemState & ODS_SELECTED) &&
       (lpDIS->itemAction & (ODA_SELECT | ODA_DRAWENTIRE)))
   {
      // item has been selected - hilite frame
      COLORREF crHilite = RGB(255 - GetRValue(cr),
                              255 - GetGValue(cr), 255 - GetBValue(cr));
      CBrush br(crHilite);
      pDC->FrameRect(&lpDIS->rcItem, &br);
   }

   if (!(lpDIS->itemState & ODS_SELECTED) &&
       (lpDIS->itemAction & ODA_SELECT))
   {
      // Item has been de-selected -- remove frame
      CBrush br(cr);
      pDC->FrameRect(&lpDIS->rcItem, &br);
   }
}