---
title: "CAtlDllModuleT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CAtlDllModuleT", "ATLBASE/ATL::CAtlDllModuleT", "ATLBASE/ATL::CAtlDllModuleT::CAtlDllModuleT", "ATLBASE/ATL::CAtlDllModuleT::DllCanUnloadNow", "ATLBASE/ATL::CAtlDllModuleT::DllGetClassObject", "ATLBASE/ATL::CAtlDllModuleT::DllMain", "ATLBASE/ATL::CAtlDllModuleT::DllRegisterServer", "ATLBASE/ATL::CAtlDllModuleT::DllUnregisterServer", "ATLBASE/ATL::CAtlDllModuleT::GetClassObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAtlDllModuleT class"]
ms.assetid: 351d5767-8257-4878-94be-45a85e31a72d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAtlDllModuleT Class
This class represents the module for a DLL.  
  
## Syntax  
  
```
template <class T>  
class ATL_NO_VTABLE CAtlDllModuleT : public CAtlModuleT<T>
```  
  
#### Parameters  
 *T*  
 Your class derived from `CAtlDllModuleT`.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlDllModuleT::CAtlDllModuleT](#catldllmodulet)|The constructor.|  
|[CAtlDllModuleT::~CAtlDllModuleT](#dtor)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlDllModuleT::DllCanUnloadNow](#dllcanunloadnow)|Tests if the DLL can be unloaded.|  
|[CAtlDllModuleT::DllGetClassObject](#dllgetclassobject)|Returns a class factory.|  
|[CAtlDllModuleT::DllMain](#dllmain)|The optional entry point into a dynamic-link library (DLL).|  
|[CAtlDllModuleT::DllRegisterServer](#dllregisterserver)|Adds entries to the system registry for objects in the DLL.|  
|[CAtlDllModuleT::DllUnregisterServer](#dllunregisterserver)|Removes entries in the system registry for objects in the DLL.|  
|[CAtlDllModuleT::GetClassObject](#getclassobject)|Returns a class factory. Invoked by [DllGetClassObject](#dllgetclassobject).|  
  
## Remarks  
 `CAtlDllModuleT` represents the module for a dynamic-link library (DLL) and provides functions used by all DLL projects. This specialization of [CAtlModuleT](../../atl/reference/catlmodulet-class.md) class includes support for registration.  
  
 For more information on modules in ATL, see [ATL Module Classes](../../atl/atl-module-classes.md).  
  
## Inheritance Hierarchy  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 `CAtlDllModuleT`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="catldllmodulet"></a>  CAtlDllModuleT::CAtlDllModuleT  
 The constructor.  
  
```
CAtlDllModuleT() throw();
```  
  
##  <a name="dtor"></a>  CAtlDllModuleT::~CAtlDllModuleT  
 The destructor.  
  
```
~CAtlDllModuleT() throw();
```  
  
##  <a name="dllcanunloadnow"></a>  CAtlDllModuleT::DllCanUnloadNow  
 Tests if the DLL can be unloaded.  
  
```
HRESULT DllCanUnloadNow() throw();
```  
  
### Return Value  
 Returns S_OK if the DLL can be unloaded, or S_FALSE if it cannot.  
  
##  <a name="dllgetclassobject"></a>  CAtlDllModuleT::DllGetClassObject  
 Returns the class factory.  
  
```
HRESULT DllGetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```  
  
### Parameters  
 *rclsid*  
 The CLSID of the object to be created.  
  
 *riid*  
 The IID of the requested interface.  
  
 *ppv*  
 A pointer to the interface pointer identified by *riid*. If the object does not support this interface, *ppv* is set to NULL.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="dllmain"></a>  CAtlDllModuleT::DllMain  
 The optional entry point into a dynamic-link library (DLL).  
  
```
BOOL WINAPI DllMain(DWORD dwReason, LPVOID /* lpReserved*/) throw();
```  
  
### Parameters  
 *dwReason*  
 If set to DLL_PROCESS_ATTACH, the DLL_THREAD_ATTACH and DLL_THREAD_DETACH notification calls are disabled.  
  
 *lpReserved*  
 Reserved.  
  
### Return Value  
 Always returns TRUE.  
  
### Remarks  
 Disabling the DLL_THREAD_ATTACH and DLL_THREAD_DETACH notification calls can be a useful optimization for multithreaded applications that have many DLLs, that frequently create and delete threads, and whose DLLs do not need these thread-level notifications of attachment/detachment.  
  
##  <a name="dllregisterserver"></a>  CAtlDllModuleT::DllRegisterServer  
 Adds entries to the system registry for objects in the DLL.  
  
```
HRESULT DllRegisterServer(BOOL bRegTypeLib = TRUE) throw();
```  
  
### Parameters  
 *bRegTypeLib*  
 TRUE if the type library is to be registered. The default value is TRUE.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="dllunregisterserver"></a>  CAtlDllModuleT::DllUnregisterServer  
 Removes entries in the system registry for objects in the DLL.  
  
```
HRESULT DllUnregisterServer(BOOL bUnRegTypeLib = TRUE) throw();
```  
  
### Parameters  
 *bUnRegTypeLib*  
 TRUE if the type library is to be removed from the registry. The default value is TRUE.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="getclassobject"></a>  CAtlDllModuleT::GetClassObject  
 Creates an object of the specified CLSID.  
  
```
HRESULT GetClassObject(
    REFCLSID rclsid,
    REFIID riid,
    LPVOID* ppv) throw();
```  
  
### Parameters  
 *rclsid*  
 The CLSID of the object to be created.  
  
 *riid*  
 The IID of the requested interface.  
  
 *ppv*  
 A pointer to the interface pointer identified by *riid*. If the object does not support this interface, *ppv* is set to NULL.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 This method is called by [CAtlDllModuleT::DllGetClassObject](#dllgetclassobject) and is included for backward compatibility.  
  
## See Also  
 [CAtlModuleT Class](../../atl/reference/catlmodulet-class.md)   
 [CAtlExeModuleT Class](../../atl/reference/catlexemodulet-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Module Classes](../../atl/atl-module-classes.md)
