void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
   CPen pen(PS_SOLID, 0, TranslateColor(GetForeColor()));
   CBrush brush(TranslateColor(GetBackColor()));
   CPen* pPenSave = pdc->SelectObject(&pen);
   CBrush* pBrushSave = pdc->SelectObject(&brush);
   pdc->Rectangle(rcBounds);
   pdc->SelectObject(pPenSave);
   pdc->SelectObject(pBrushSave);
}