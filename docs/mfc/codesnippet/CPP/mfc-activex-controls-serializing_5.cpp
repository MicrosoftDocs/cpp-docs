void CMyAxSerCtrl::DoPropExchange(CPropExchange* pPX)
{
   ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
   COleControl::DoPropExchange(pPX);

   PX_Long(pPX, _T("ReleaseDate"), m_ReleaseDate);
   if (pPX->GetVersion() >= MAKELONG(0, 2))
   {
      PX_Long(pPX, _T("OriginalDate"), m_OriginalDate);
   }
   else
   {
      if (pPX->IsLoading())
         m_OriginalDate = 0;
   }