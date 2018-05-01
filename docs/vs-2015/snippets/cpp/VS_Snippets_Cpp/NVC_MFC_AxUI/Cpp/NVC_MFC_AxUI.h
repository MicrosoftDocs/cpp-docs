#pragma once

// NVC_MFC_AxUI.h : main header file for NVC_MFC_AxUI.DLL

#if !defined( __AFXCTL_H__ )
#error "include 'afxctl.h' before including this file"
#endif

#include "resource.h"       // main symbols


// CNVC_MFC_AxUIApp : See NVC_MFC_AxUI.cpp for implementation.

class CNVC_MFC_AxUIApp : public COleControlModule
{
public:
   BOOL InitInstance();
   int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

