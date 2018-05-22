// NVC_MFC_AxFont.cpp : Implementation of CNVC_MFC_AxFontApp and DLL registration.
//
// Topic                                        Snippet
// MFC ActiveX Controls: Using Fonts            1 - 20

#include "stdafx.h"
#include "NVC_MFC_AxFont.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CNVC_MFC_AxFontApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0xB200302C, 0xC816, 0x425F, { 0x8F, 0xDF, 0xEF, 0xBA, 0x5, 0x29, 0x8C, 0xA0 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CNVC_MFC_AxFontApp::InitInstance - DLL initialization

BOOL CNVC_MFC_AxFontApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CNVC_MFC_AxFontApp::ExitInstance - DLL termination

int CNVC_MFC_AxFontApp::ExitInstance()
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
