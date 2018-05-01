// NVC_MFC_AxPic.cpp : Implementation of CNVC_MFC_AxPicApp and DLL registration.
//
// Topic                                                       Snippet
// MFC ActiveX Controls: Using Pictures in an ActiveX Control  1 - 11


#include "stdafx.h"
#include "NVC_MFC_AxPic.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CNVC_MFC_AxPicApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x2D44F84, 0x4B67, 0x483E, { 0xBA, 0xA7, 0x48, 0xBC, 0x9B, 0xFC, 0x10, 0x55 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CNVC_MFC_AxPicApp::InitInstance - DLL initialization

BOOL CNVC_MFC_AxPicApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CNVC_MFC_AxPicApp::ExitInstance - DLL termination

int CNVC_MFC_AxPicApp::ExitInstance()
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
