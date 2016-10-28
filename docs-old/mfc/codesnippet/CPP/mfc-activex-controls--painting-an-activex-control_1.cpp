void CMyAxUICtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
   if (!pdc)
      return;

   // TODO: Replace the following code with your own drawing code.
   pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
   pdc->Ellipse(rcBounds);
}