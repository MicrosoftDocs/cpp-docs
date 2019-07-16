// Member function implementation of class COleObjectFactory::UpdateRegistry
//
BOOL CMyAxCtrl::CMyAxCtrlFactory::UpdateRegistry(BOOL bRegister)
{
   // TODO: Verify that your control follows apartment-model threading rules.
   // Refer to MFC TechNote 64 for more information.
   // If your control does not conform to the apartment-model rules, then
   // you must modify the code below, changing the 6th parameter from
   // afxRegInsertable | afxRegApartmentThreading to afxRegInsertable.

   if (bRegister)
      return AfxOleRegisterControlClass(
          AfxGetInstanceHandle(),
          m_clsid,
          m_lpszProgID,
          IDS_NVC_MFCAXCTL,
          IDB_NVC_MFCAXCTL,
          afxRegInsertable | afxRegApartmentThreading,
          _dwMyOleMisc,
          _tlid,
          _wVerMajor,
          _wVerMinor);
   else
      return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}