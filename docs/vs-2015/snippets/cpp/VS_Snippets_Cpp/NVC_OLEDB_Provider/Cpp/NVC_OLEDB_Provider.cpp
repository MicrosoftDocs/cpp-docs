// NVC_OLEDB_Provider.cpp : Implementation of DLL Exports.
//
// Topic                                     Snippet
// CRowsetImpl::GetColumnInfo                1
// CUtlProps::OnPropertyChanged              2
// BEGIN_PROPSET_MAP                         3
// BEGIN_PROVIDER_COLUMN_MAP                 4

#include "stdafx.h"
#include "resource.h"
#include "NVC_OLEDB_Provider.h"


class CNVC_OLEDB_ProviderModule : public CAtlDllModuleT< CNVC_OLEDB_ProviderModule >
{
public :
	DECLARE_LIBID(LIBID_NVC_OLEDB_ProviderLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_NVC_OLEDB_PROVIDER, "{0EE7914E-918C-4E41-BAA7-128C5495015B}")
};

CNVC_OLEDB_ProviderModule _AtlModule;


#ifdef _MANAGED
#pragma managed(push, off)
#endif

// DLL Entry Point
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
    return _AtlModule.DllMain(dwReason, lpReserved); 
}

#ifdef _MANAGED
#pragma managed(pop)
#endif




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

