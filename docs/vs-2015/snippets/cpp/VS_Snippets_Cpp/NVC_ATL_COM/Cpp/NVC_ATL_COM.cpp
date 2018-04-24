// NVC_ATL_COM.cpp : Implementation of DLL Exports.
//
// Snippets for various COM-related topics in ATL.
//
// Topic                                                    Snippet
// Implementing CComObjectRootEx                            1
// CComCoClass Class                                        2
// CComClassFactory2 Class                                  2 - 3
// Changing the Default Class Factory and Aggregation Model 2
// Calling C++ Code from DHTML                              4
// Modifying the ATL DHTML Control                          5 - 7
// CComClassFactory Class                                   8
// CComClassFactoryAutoThread Class                         9
// CComClassFactorySingleton Class                          10
// CComCoClass::CreateInstance                              11
// CComCoClass::GetObjectDescription                        12
// CComCompositeControl Class                               13 - 14
// CComControl::ControlQueryInterface                       15
// CComControl::CreateControlWindow                         16
// CComControl::FireOnChanged                               17
// CComControl::FireOnRequestEdit                           18
// CComControlBase::ControlQueryInterface                   15
// CComControlBase::DoVerbProperties                        19 - 20
// CComControlBase::FireViewChange                          21
// CComControlBase::GetAmbientAppearance                    22
// Multiple Dual Interfaces                                 23
// Implementing an STL-Based Collection                     24 - 29
// ATL Copy Policy Classes                                  30 - 31
// CComEnum Class                                           32 - 33
// CComEnumOnSTL Class                                      34 - 35
// CComMultiThreadModel::AutoCriticalSection                36
// CComMultiThreadModelNoCS::ThreadModelNoCS                37
// CComObject::CreateInstance                               38 - 39
// CComObjectRootEx::FinalConstruct                         40
// CComObjectRootEx::ObjectMain                             41
// CComObjectStack Class                                    42
// CComTearOffObject Class                                  43
// CComUnkArray::end                                        44
// IDispatchImpl Class                                      47
// ISupportErrorInfoImpl Class                              48
// AtlHiMetricToPixel                                       49
// AtlMarshalPtrInProc                                      50
// AtlPixelToHiMetric                                       51
// AtlReportError                                           52
// ATL_NO_VTABLE                                            53
// COM_INTERFACE_ENTRY_CACHED_TEAR_OFF                      54
// COM_INTERFACE_ENTRY_TEAR_OFF                             1
// DECLARE_CLASSFACTORY                                     55
// DECLARE_CLASSFACTORY_AUTO_THREAD                         9
// DECLARE_CLASSFACTORY_EX                                  8
// DECLARE_CLASSFACTORY_SINGLETON                           10
// DECLARE_CLASSFACTORY2                                    2
// DECLARE_REGISTRY_RESOURCE                                56
// DECLARE_REGISTRY_RESOURCEID                              56
// BEGIN_COM_MAP                                            1
// BEGIN_SERVICE_MAP                                        57

#include "stdafx.h"
#include "resource.h"
#include "NVC_ATL_COM.h"


class CNVC_ATL_COMModule : public CAtlDllModuleT< CNVC_ATL_COMModule >
{
public :
   DECLARE_LIBID(LIBID_NVC_ATL_COMLib)
   DECLARE_REGISTRY_APPID_RESOURCEID(IDR_NVC_ATL_COM, "{BD335AA9-DE0F-4BDE-9E48-E06173DC1261}")
};

CNVC_ATL_COMModule _AtlModule;


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

