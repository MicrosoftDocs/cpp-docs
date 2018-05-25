// MFCActiveXControl.cpp : Implementation of CMFCActiveXControlApp and 
// DLL registration.
//
// Demonstrates use of ActiveX Controls using MFC
//
// Topic												Snippet
// ActiveX Controls on the Internet			1 - 8
// DISP_PROPERTY_PARAM                    9 - 12
// EVENT_CUSTOM                           13
// EVENT_CUSTOM_ID                        13
// PX_VBXFontConvert                      14

#include "stdafx.h"
#include "MyDataPathProperty.h"
#include "MFCActiveXControl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMFCActiveXControlApp theApp;

const GUID CDECL BASED_CODE _tlid =
   {0x87DBF25E, 0xC47, 0x4215,{0x9B, 0x1A, 0xC8, 0x24, 0xA, 0xD8, 0xFC, 0xC5}};
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CMFCActiveXControlApp::InitInstance - DLL initialization

BOOL CMFCActiveXControlApp::InitInstance()
{
   BOOL bInit = COleControlModule::InitInstance();

   if (bInit)
   {
      // TODO: Add your own module initialization code here.
   }

   return bInit;
}



// CMFCActiveXControlApp::ExitInstance - DLL termination

int CMFCActiveXControlApp::ExitInstance()
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
