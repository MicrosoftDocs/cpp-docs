// Registers type library and the interfaces
// in it, afxctl.h needs to be included
if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
return ResultFromScode(SELFREG_E_TYPELIB);


// CMFCAutomation.tlb should be in the same directory as exe module.
// last param can be null if help file associated w/ tlb is in same dir as .tlb
if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid,
   _T("CMFCAutomation.tlb"), NULL))
{
   return ResultFromScode(SELFREG_E_TYPELIB);
}