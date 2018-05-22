// NVC_MFC_AxSub.cpp : Implementation of CNVC_MFC_AxSubApp and DLL registration.
//
// Topic                                                 Snippet
// MFC ActiveX Controls: Subclassing a Windows Control   1 - 4, 5&6, 7

#include "stdafx.h"
#include "NVC_MFC_AxSub.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CNVC_MFC_AxSubApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x1BCCAD74, 0x1AFF, 0x4D3A, { 0xBF, 0xC, 0xB1, 0x3, 0x39, 0xCA, 0x43, 0xC6 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CNVC_MFC_AxSubApp::InitInstance - DLL initialization

BOOL CNVC_MFC_AxSubApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CNVC_MFC_AxSubApp::ExitInstance - DLL termination

int CNVC_MFC_AxSubApp::ExitInstance()
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
