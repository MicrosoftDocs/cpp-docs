// NVC_MFCAxCtl.cpp : Implementation of CNVC_MFCAxCtlApp and DLL registration.
//
// Snippets for COleControl.
//
// Topic                                  Snippet
// COleControl::GetActivationPolicy       1 & 10
// COleControl::GetWindowlessDropTarget   2
// COleControl::IsConvertingVBX           3 - 4
// COleControl::OnEdit                    5
// COleControl::OnFontChanged             6
// COleControl::ResetStockProps           7
// COleControl::SerializeExtent           8
// CWnd::OnMouseActivate                  9
// AfxOleRegisterControlClass             11 - 12
// AfxOleUnregisterTypeLib                13
// DECLARE_OLECREATE_EX                   14
// DDP_PostProcessing                     15
// Event Maps                             16

#include "stdafx.h"
#include "NVC_MFCAxCtl.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CNVC_MFCAxCtlApp theApp;

// <Snippet13>
// Type library GUID, corresponds to the uuid attribute of the library
// section in the .odl file.
const GUID CDECL BASED_CODE _tlid =
		{ 0xA44774E8, 0xAE00, 0x451F, { 0x96, 0x1D, 0xC7, 0xD2, 0xD2, 0x58, 0xA0, 0x75 } };

// Type library major version number, number on the left of decimal
// point, in version attribute of the library section in .odl file.
const WORD _wVerMajor = 1;

// Type library minor version number, number on the right of decimal
// point, in version attribute of the library section in .odl file.
const WORD _wVerMinor = 0;

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
// </Snippet13>

// CNVC_MFCAxCtlApp::InitInstance - DLL initialization

BOOL CNVC_MFCAxCtlApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}



// CNVC_MFCAxCtlApp::ExitInstance - DLL termination

int CNVC_MFCAxCtlApp::ExitInstance()
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



