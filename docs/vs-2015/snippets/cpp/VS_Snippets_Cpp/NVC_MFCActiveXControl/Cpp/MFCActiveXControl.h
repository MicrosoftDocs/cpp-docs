#pragma once

// MFCActiveXControl.h : main header file for MFCActiveXControl.DLL

#if !defined( __AFXCTL_H__ )
#error "include 'afxctl.h' before including this file"
#endif

#include "resource.h"       // main symbols


// CMFCActiveXControlApp : See MFCActiveXControl.cpp for implementation.

class CMFCActiveXControlApp : public COleControlModule
{
public:
   BOOL InitInstance();
   int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

