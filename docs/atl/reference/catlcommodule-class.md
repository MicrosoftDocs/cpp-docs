---
title: "CAtlComModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CAtlComModule", "ATLBASE/ATL::CAtlComModule", "ATLBASE/ATL::CAtlComModule::CAtlComModule", "ATLBASE/ATL::CAtlComModule::RegisterServer", "ATLBASE/ATL::CAtlComModule::RegisterTypeLib", "ATLBASE/ATL::CAtlComModule::UnregisterServer", "ATLBASE/ATL::CAtlComModule::UnRegisterTypeLib"]
dev_langs: ["C++"]
helpviewer_keywords: ["CAtlComModule class"]
ms.assetid: af5dd71a-a0d1-4a2e-9a24-154a03381c75
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CAtlComModule Class
This class implements a COM server module.  
  
## Syntax  
  
```
class CAtlComModule : public _ATL_COM_MODULE
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlComModule::CAtlComModule](#catlcommodule)|The constructor.|  
|[CAtlComModule::~CAtlComModule](#dtor)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlComModule::RegisterServer](#registerserver)|Call this method to update the system registry for each object in the object map.|  
|[CAtlComModule::RegisterTypeLib](#registertypelib)|Call this method to register a type library.|  
|[CAtlComModule::UnregisterServer](#unregisterserver)|Call this method to unregister each object in the object map.|  
|[CAtlComModule::UnRegisterTypeLib](#unregistertypelib)|Call this method to unregister a type library.|  
  
## Remarks  
 `CAtlComModule` implements a COM server module, allowing a client to access the module's components.  
  
 This class replaces the obsolete [CComModule](../../atl/reference/ccommodule-class.md) class used in earlier versions of ATL. See [ATL Module Classes](../../atl/atl-module-classes.md) for more details.  
  
## Inheritance Hierarchy  
 [_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module)  
  
 `CAtlComModule`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="catlcommodule"></a>  CAtlComModule::CAtlComModule  
 The constructor.  
  
```
CAtlComModule() throw();
```  
  
### Remarks  
 Initializes the module.  
  
##  <a name="dtor"></a>  CAtlComModule::~CAtlComModule  
 The destructor.  
  
```
~CAtlComModule();
```  
  
### Remarks  
 Frees all class factories.  
  
##  <a name="registerserver"></a>  CAtlComModule::RegisterServer  
 Call this method to update the system registry for each object in the object map.  
  
```
HRESULT RegisterServer(BOOL bRegTypeLib = FALSE, const CLSID* pCLSID = NULL);
```  
  
### Parameters  
 *bRegTypeLib*  
 TRUE if the type library is to be registered. The default value is FALSE.  
  
 *pCLSID*  
 Points to the CLSID of the object to be registered. If NULL (the default value), all objects in the object map will be registered.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Calls the global function [AtlComModuleRegisterServer](server-registration-global-functions.md#atlcommoduleregisterserver).  
  
##  <a name="registertypelib"></a>  CAtlComModule::RegisterTypeLib  
 Call this method to register a type library.  
  
```
HRESULT RegisterTypeLib(LPCTSTR lpszIndex);
HRESULT RegisterTypeLib();
```  
  
### Parameters  
 *lpszIndex*  
 String in the format "\\\N", where N is the integer index of the TYPELIB resource.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Adds information about a type library to the system registry. If the module instance contains multiple type libraries, use the first version of this method to specify which type library should be used.  
  
##  <a name="unregisterserver"></a>  CAtlComModule::UnregisterServer  
 Call this method to unregister each object in the object map.  
  
```
HRESULT UnregisterServer(
  BOOL bRegTypeLib = FALSE,  
  const CLSID* pCLSID = NULL);
```  
  
### Parameters  
 *bRegTypeLib*  
 TRUE if the type library is to be unregistered. The default value is FALSE.  
  
 *pCLSID*  
 Points to the CLSID of the object to be unregistered. If NULL (the default value), all objects in the object map will be unregistered.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Calls the global function [AtlComModuleUnregisterServer](server-registration-global-functions.md#atlcommoduleunregisterserver).  
  
##  <a name="unregistertypelib"></a>  CAtlComModule::UnRegisterTypeLib  
 Call this method to unregister a type library.  
  
```
HRESULT UnRegisterTypeLib(LPCTSTR lpszIndex);
HRESULT UnRegisterTypeLib();
```  
  
### Parameters  
 *lpszIndex*  
 String in the format "\\\N", where N is the integer index of the TYPELIB resource.  
  
### Remarks  
 Removes information about a type library from the system registry. If the module instance contains multiple type libraries, use the first version of this method to specify which type library should be used.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
## See Also  
 [_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module)   
 [Class Overview](../../atl/atl-class-overview.md)
