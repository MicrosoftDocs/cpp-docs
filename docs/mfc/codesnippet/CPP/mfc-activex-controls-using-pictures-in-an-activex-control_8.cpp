void CMyAxPicCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
   if (!pdc)
      return;

   m_pic.Render(pdc, rcBounds, rcBounds);
}