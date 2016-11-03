void CMFCActiveXControlCtrl::DoPropExchange(CPropExchange* pPX)
{
   ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
   COleControl::DoPropExchange(pPX);

   if (IsConvertingVBX())
      PX_VBXFontConvert(pPX, InternalGetFont());