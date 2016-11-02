void CMyAxOptCtrl::OnForeColorChanged()
{
   m_pen.DeleteObject();
}

void CMyAxOptCtrl::OnBackColorChanged()
{
   m_brush.DeleteObject();
}