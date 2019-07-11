void CMyAxOptCtrl::OnResetState()
{
   ResetVersion(MAKELONG(_wVerMinor, _wVerMajor));
   ResetStockProps();

   m_BoolProp = TRUE;
   m_ShortProp = 0;
   m_ColorProp = RGB(0xFF, 0x00, 0x00);
   m_StringProp.Empty();
}