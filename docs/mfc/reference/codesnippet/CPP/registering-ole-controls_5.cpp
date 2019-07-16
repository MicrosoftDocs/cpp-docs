// Type library GUID, corresponds to the uuid attribute of the library
// section in the .odl file.
const GUID CDECL BASED_CODE _tlid =
    {0xA44774E8, 0xAE00, 0x451F, {0x96, 0x1D, 0xC7, 0xD2, 0xD2, 0x58, 0xA0, 0x75}};

// Type library major version number, number on the left of decimal
// point, in version attribute of the library section in .odl file.
const WORD _wVerMajor = 1;

// Type library minor version number, number on the right of decimal
// point, in version attribute of the library section in .odl file.
const WORD _wVerMinor = 0;

STDAPI DllUnregisterServer(void)
{
   AFX_MANAGE_STATE(_afxModuleAddrThis);

   if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
      return ResultFromScode(SELFREG_E_TYPELIB);

   if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
      return ResultFromScode(SELFREG_E_CLASS);

   return NOERROR;
}