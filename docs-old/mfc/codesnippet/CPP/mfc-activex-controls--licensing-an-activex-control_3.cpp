// CMyAxUICtrl::CMyAxUICtrlFactory::VerifyUserLicense -
// Checks for existence of a user license

BOOL CMyAxUICtrl::CMyAxUICtrlFactory::VerifyUserLicense()
{
   return AfxVerifyLicFile(AfxGetInstanceHandle(), _szLicFileName, _szLicString);
}

// CMyAxUICtrl::CMyAxUICtrlFactory::GetLicenseKey -
// Returns a runtime licensing key

BOOL CMyAxUICtrl::CMyAxUICtrlFactory::GetLicenseKey(DWORD /*dwReserved*/,
   BSTR FAR* pbstrKey)
{
   if (pbstrKey == NULL)
      return FALSE;

   *pbstrKey = SysAllocString(_szLicString);
   return (*pbstrKey != NULL);
}