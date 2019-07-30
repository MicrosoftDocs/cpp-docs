void CMyAxFontCtrl::DoPropExchange(CPropExchange* pPX)
{
   ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
   COleControl::DoPropExchange(pPX);

   // [...other PX_ function calls...]
   PX_Font(pPX, _T("HeadingFont"), m_fontHeading, &_fontdescHeading);
}