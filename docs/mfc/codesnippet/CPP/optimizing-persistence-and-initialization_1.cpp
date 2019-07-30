void CMyAxOptCtrl::DoPropExchange(CPropExchange* pPX)
{
   ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
   COleControl::DoPropExchange(pPX);

   PX_Bool(pPX, _T("BoolProp"), m_BoolProp, TRUE);
   PX_Short(pPX, _T("ShortProp"), m_ShortProp, 0);
   PX_Color(pPX, _T("ColorProp"), m_ColorProp, RGB(0xFF, 0x00, 0x00));
   PX_String(pPX, _T("StringProp"), m_StringProp, _T(""));
}