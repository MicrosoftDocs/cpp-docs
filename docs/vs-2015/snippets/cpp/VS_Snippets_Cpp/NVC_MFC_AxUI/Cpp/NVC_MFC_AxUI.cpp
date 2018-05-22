// NVC_MFC_AxUI.cpp : Implementation of CNVC_MFC_AxUIApp and DLL registration.
//
// Topic                                                             Snippet
// MFC ActiveX Controls: Painting an ActiveX Control                 1
// MFC ActiveX Controls: Events                                      2, 3&4
// MFC ActiveX Controls: Adding Stock Events to an ActiveX Control   5, 6
// MFC ActiveX Controls: Adding Custom Events                        7 - 12
// MFC ActiveX Controls: Methods                                     13, 14&15
// MFC ActiveX Controls: Adding Stock Methods                        16 - 17
// MFC ActiveX Controls: Adding Custom Methods                       18 - 21
// MFC ActiveX Controls: Adding Stock Properties                     22 - 24
// MFC ActiveX Controls: Adding Custom Properties                    25 - 28
// MFC ActiveX Controls: Advanced Property Implementation            29
// MFC ActiveX Controls: Accessing Ambient Properties                30
// MFC ActiveX Controls: Property Pages                              31
// MFC ActiveX Controls: Adding Another Custom Property Page         32 - 34
// MFC ActiveX Controls: Advanced Topics                             35 - 38
// MFC ActiveX Controls: Licensing an ActiveX Control                39 - 42
// MFC ActiveX Controls: Serializing                                 43

#include "stdafx.h"
#include "NVC_MFC_AxUI.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CNVC_MFC_AxUIApp theApp;

const GUID CDECL BASED_CODE _tlid =
      { 0x8DC9169, 0xFAB2, 0x45A6, { 0x94, 0xA1, 0xAA, 0x68, 0x94, 0xFA, 0xA1, 0x89 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CNVC_MFC_AxUIApp::InitInstance - DLL initialization

BOOL CNVC_MFC_AxUIApp::InitInstance()
{
   BOOL bInit = COleControlModule::InitInstance();

   if (bInit)
   {
      // TODO: Add your own module initialization code here.
   }

   return bInit;
}



// CNVC_MFC_AxUIApp::ExitInstance - DLL termination

int CNVC_MFC_AxUIApp::ExitInstance()
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
