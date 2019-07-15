void CMyAxOptCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
   if (m_pen.m_hObject == NULL)
      m_pen.CreatePen(PS_SOLID, 0, TranslateColor(GetForeColor()));
   if (m_brush.m_hObject == NULL)
      m_brush.CreateSolidBrush(TranslateColor(GetBackColor()));
   CPen* pPenSave = pdc->SelectObject(&m_pen);
   CBrush* pBrushSave = pdc->SelectObject(&m_brush);
   pdc->Rectangle(rcBounds);
   if (!IsOptimizedDraw())
   {
      pdc->SelectObject(pPenSave);
      pdc->SelectObject(pBrushSave);
   }
}