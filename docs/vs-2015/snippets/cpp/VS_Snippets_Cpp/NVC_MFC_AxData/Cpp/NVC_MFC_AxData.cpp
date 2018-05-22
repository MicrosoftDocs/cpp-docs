// NVC_MFC_AxData.cpp : Implementation of CNVC_MFC_AxDataApp and DLL registration.
//
// Topic                                                             Snippet
// MFC ActiveX Controls: Using Data Binding in an ActiveX Control    1 - 7

#include "stdafx.h"
#include "NVC_MFC_AxData.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CNVC_MFC_AxDataApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x564E2ACE, 0xC075, 0x4A6F, { 0x99, 0x3C, 0x9, 0x29, 0x99, 0xC9, 0x57, 0x66 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CNVC_MFC_AxDataApp::InitInstance - DLL initialization

BOOL CNVC_MFC_AxDataApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CNVC_MFC_AxDataApp::ExitInstance - DLL termination

int CNVC_MFC_AxDataApp::ExitInstance()
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
