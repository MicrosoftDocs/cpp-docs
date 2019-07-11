if (!AmbientUserMode())
{
   // Draw the Text property at design-time
   pdc->FillRect(rcBounds,
      CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
   pdc->DrawText(m_strText, -1, (LPRECT)& rcBounds,
      DT_LEFT | DT_TOP | DT_SINGLELINE);
}
else
{
   DoSuperclassPaint(pdc, rcBounds);
}