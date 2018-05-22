// MyBound.cpp : Implementation of CMyBoundApp and DLL registration.

#include "stdafx.h"
#include "MyBound.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CMyBoundApp theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0xF7B64DD7, 0x8EA1, 0x4F2F, { 0xBB, 0x56, 0xD, 0xDC, 0xEB, 0xBD, 0x91, 0x88 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CMyBoundApp::InitInstance - DLL initialization

BOOL CMyBoundApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CMyBoundApp::ExitInstance - DLL termination

int CMyBoundApp::ExitInstance()
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
