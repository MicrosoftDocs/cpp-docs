// This is a part of the Active Template Library. 
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Active Template Library Reference and related
// electronic documentation provided with the library.
// See these sources for detailed information regarding the
// Active Template Library product.

// ATLEventHandling.cpp : Implementation of DLL Exports.
//
// Topic                            Snippet
// Using IDispEventImpl             1 - 2
// Using IDispEventSimpleImpl       1, 3 - 4
// _ATL_STATIC_REGISTRY             5

#include "stdafx.h"
#include "resource.h"
#include <initguid.h>
#include "ATLEventHandling.h"

#include "ATLEventHandling_i.c"
#include "Simple.h"
#include "NotSoSimple.h"


class CAtlEventHandlingModule : public CAtlDllModuleT< CAtlEventHandlingModule >
{
public :
   DECLARE_LIBID(LIBID_ATLEVENTHANDLINGLib)
};

CAtlEventHandlingModule _AtlModule;

OBJECT_ENTRY_AUTO(CLSID_Simple, CSimple)
OBJECT_ENTRY_AUTO(CLSID_NotSoSimple, CNotSoSimple)

/////////////////////////////////////////////////////////////////////////////
// DLL Entry Point
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
   hInstance;
    return _AtlModule.DllMain(dwReason, lpReserved); 
}


// Used to determine whether the DLL can be unloaded by OLE
STDAPI DllCanUnloadNow(void)
{
    return _AtlModule.DllCanUnloadNow();
}


// Returns a class factory to create an object of the requested type
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _AtlModule.DllGetClassObject(rclsid, riid, ppv);
}


// DllRegisterServer - Adds entries to the system registry
STDAPI DllRegisterServer(void)
{
    // registers object, typelib and all interfaces in typelib
    HRESULT hr = _AtlModule.DllRegisterServer();
   return hr;
}


// DllUnregisterServer - Removes entries from the system registry
STDAPI DllUnregisterServer(void)
{
   HRESULT hr = _AtlModule.DllUnregisterServer();
   return hr;
}