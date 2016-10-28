STDAPI DllRegisterServer(void)
{
   AFX_MANAGE_STATE(_afxModuleAddrThis);

   if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
      return ResultFromScode(SELFREG_E_TYPELIB);

   AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid, _T("samplefr.tlb"));

   if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
      return ResultFromScode(SELFREG_E_CLASS);

   return NOERROR;
}