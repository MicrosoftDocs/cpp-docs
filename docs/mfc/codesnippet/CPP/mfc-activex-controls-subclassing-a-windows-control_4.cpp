void CMyAxSubCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
   if (!pdc)
      return;

   DoSuperclassPaint(pdc, rcBounds);
}