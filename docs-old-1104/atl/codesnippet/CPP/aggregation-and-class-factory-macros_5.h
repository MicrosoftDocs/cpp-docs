class CMyLicense
{
protected:
   static BOOL VerifyLicenseKey(BSTR bstr)
   {
      USES_CONVERSION;
      return !lstrcmp(OLE2T(bstr), _T("My run-time license key"));
   }

   static BOOL GetLicenseKey(DWORD /*dwReserved*/, BSTR* pBstr) 
   {
      USES_CONVERSION;
      *pBstr = SysAllocString( T2OLE(_T("My run-time license key"))); 
      return TRUE;
   }

   static BOOL IsLicenseValid() {  return TRUE; }
};