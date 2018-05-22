// NVC_MFC_AxSer.cpp : Implementation of CNVC_MFC_AxSerApp and DLL registration.
//
// Topic                                  Snippet
// MFC ActiveX Controls: Serializing      1&2, 1&3, 4&3

#include "stdafx.h"
#include "NVC_MFC_AxSer.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CNVC_MFC_AxSerApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x486A27D9, 0xE3ED, 0x4371, { 0x8D, 0xFF, 0x60, 0xD0, 0x29, 0xFE, 0x41, 0xEB } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CNVC_MFC_AxSerApp::InitInstance - DLL initialization

BOOL CNVC_MFC_AxSerApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CNVC_MFC_AxSerApp::ExitInstance - DLL termination

int CNVC_MFC_AxSerApp::ExitInstance()
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
