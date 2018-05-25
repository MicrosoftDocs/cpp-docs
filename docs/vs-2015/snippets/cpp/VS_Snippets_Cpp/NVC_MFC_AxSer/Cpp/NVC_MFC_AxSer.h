#pragma once

// NVC_MFC_AxSer.h : main header file for NVC_MFC_AxSer.DLL

#if !defined( __AFXCTL_H__ )
#error "include 'afxctl.h' before including this file"
#endif

#include "resource.h"       // main symbols


// CNVC_MFC_AxSerApp : See NVC_MFC_AxSer.cpp for implementation.

class CNVC_MFC_AxSerApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

