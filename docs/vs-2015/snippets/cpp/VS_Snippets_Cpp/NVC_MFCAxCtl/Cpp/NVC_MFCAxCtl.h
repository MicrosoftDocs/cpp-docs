#pragma once

// NVC_MFCAxCtl.h : main header file for NVC_MFCAxCtl.DLL

#if !defined( __AFXCTL_H__ )
#error "include 'afxctl.h' before including this file"
#endif

#include "resource.h"       // main symbols


// CNVC_MFCAxCtlApp : See NVC_MFCAxCtl.cpp for implementation.

class CNVC_MFCAxCtlApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

