void CMyAxUICtrl::DoPropExchange(CPropExchange* pPX)
{
   ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
   COleControl::DoPropExchange(pPX);

   // TODO: Call PX_ functions for each persistent custom property.
}