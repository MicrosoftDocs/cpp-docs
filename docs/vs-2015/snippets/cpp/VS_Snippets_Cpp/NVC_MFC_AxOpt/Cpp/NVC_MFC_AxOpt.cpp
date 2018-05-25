// NVC_MFC_AxOpt.cpp : Implementation of CNVC_MFC_AxOptApp and DLL registration.
//
// Topic                                                             Snippet
// Optimizing Persistence and Initialization                         1 - 4
// Providing Windowless Activation                                   5&6&7, 8
// Turning off the Activate When Visible Option                      9
// Providing Mouse Interaction While Inactive                        5&10&7, 11, 12
// Providing Flicker-Free Activation                                 5&13&7
// Using an Unclipped Device Context                                 5&14&7
// Optimizing Control Drawing                                        5, 16&17, 18, 19
// MFC ActiveX Controls: Using Stock Property Pages                  20

#include "stdafx.h"
#include "NVC_MFC_AxOpt.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CNVC_MFC_AxOptApp theApp;

const GUID CDECL BASED_CODE _tlid =
      { 0x9616D3F1, 0x2648, 0x44A2, { 0x90, 0xBB, 0x37, 0x3E, 0xE1, 0x23, 0x30, 0x7 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CNVC_MFC_AxOptApp::InitInstance - DLL initialization

BOOL CNVC_MFC_AxOptApp::InitInstance()
{
   BOOL bInit = COleControlModule::InitInstance();

   if (bInit)
   {
      // TODO: Add your own module initialization code here.
   }

   return bInit;
}



// CNVC_MFC_AxOptApp::ExitInstance - DLL termination

int CNVC_MFC_AxOptApp::ExitInstance()
{
   // TODO: Add your own module termination code here.

   return COleControlModule::ExitInstance();
}



// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
   AFX_MANAGE_STATE(_afxModuleAddrThis);

   if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
      return ResultFromScode(SELFREG_E_TYPELIB);

   if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
      return ResultFromScode(SELFREG_E_CLASS);

   return NOERROR;
}



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
