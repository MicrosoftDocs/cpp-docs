// NVC_MFC_AxLoc.cpp : Implementation of CNVC_MFC_AxLocApp and DLL registration.

#include "stdafx.h"
#include "NVC_MFC_AxLoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CNVC_MFC_AxLocApp theApp;

const GUID CDECL BASED_CODE _tlid =
      { 0xF8068FFB, 0x9F76, 0x4471, { 0xBD, 0x76, 0xF3, 0xF7, 0xAD, 0xCD, 0x5, 0xBB } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CNVC_MFC_AxLocApp::InitInstance - DLL initialization

BOOL CNVC_MFC_AxLocApp::InitInstance()
{
   BOOL bInit = COleControlModule::InitInstance();

   if (bInit)
   {
      // TODO: Add your own module initialization code here.
   }

   return bInit;
}



// CNVC_MFC_AxLocApp::ExitInstance - DLL termination

int CNVC_MFC_AxLocApp::ExitInstance()
{
   // TODO: Add your own module termination code here.

   return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

// <Snippet2>
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
// </Snippet2>


// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
   AFX_MANAGE_STATE(_afxModuleAddrThis);

   if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
      return ResultFromScode(SELFREG_E_TYPELIB);

   if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
      return ResultFromScode(SELFREG_E_CLASS);

   return NOERROR;
}
