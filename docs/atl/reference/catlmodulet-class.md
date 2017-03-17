---
title: "CAtlModuleT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ['CAtlModuleT', 'ATLBASE/ATL::CAtlModuleT', 'ATLBASE/ATL::CAtlModuleT::CAtlModuleT', 'ATLBASE/ATL::CAtlModuleT::InitLibId', 'ATLBASE/ATL::CAtlModuleT::RegisterAppId', 'ATLBASE/ATL::CAtlModuleT::RegisterServer', 'ATLBASE/ATL::CAtlModuleT::UnregisterAppId', 'ATLBASE/ATL::CAtlModuleT::UnregisterServer', 'ATLBASE/ATL::CAtlModuleT::UpdateRegistryAppId']
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlModuleT class"
ms.assetid: 9b74d02f-9117-47b1-a05e-c5945f83dd2b
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CAtlModuleT Class
This class implements an ATL module.  
  
## Syntax  
  
```
template <class T>  
class ATL_NO_VTABLE CAtlModuleT : public CAtlModule
```  
  
#### Parameters  
 `T`  
 Your class derived from `CAtlModuleT`.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlModuleT::CAtlModuleT](#catlmodulet)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlModuleT::InitLibId](#initlibid)|Initializes the data member containing the GUID of the current module.|  
|[CAtlModuleT::RegisterAppId](#registerappid)|Adds the EXE to the registry.|  
|[CAtlModuleT::RegisterServer](#registerserver)|Adds the service to the registry.|  
|[CAtlModuleT::UnregisterAppId](#unregisterappid)|Removes the EXE from the registry.|  
|[CAtlModuleT::UnregisterServer](#unregisterserver)|Removes the service from the registry.|  
|[CAtlModuleT::UpdateRegistryAppId](#updateregistryappid)|Updates the EXE information in the registry.|  
  
## Remarks  
 `CAtlModuleT`, derived from [CAtlModule](../../atl/reference/catlmodule-class.md), implements an Executable (EXE) or a Service (EXE) ATL module. An Executable module is a local, out-of-process server, whereas a Service module is a Windows application that runs in the background when Windows starts.  
  
 `CAtlModuleT` provides support for initializing, registering, and unregistering of the module.  
  
## Inheritance Hierarchy  
 [_ATL_MODULE](atl-typedefs.md#_atl_module)  

  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 `CAtlModuleT`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="catlmodulet"></a>  CAtlModuleT::CAtlModuleT  
 The constructor.  
  
```
CAtlModuleT() throw();
```  
  
### Remarks  
 Calls [CAtlModuleT::InitLibId](#initlibid).  
  
##  <a name="initlibid"></a>  CAtlModuleT::InitLibId  
 Initializes the data member containing the GUID of the current module.  
  
```
static void InitLibId() throw();
```  
  
### Remarks  
 Called by the constructor [CAtlModuleT::CAtlModuleT](#catlmodulet).  
  
##  <a name="registerappid"></a>  CAtlModuleT::RegisterAppId  
 Adds the EXE to the registry.  
  
```
HRESULT RegisterAppId() throw();
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="registerserver"></a>  CAtlModuleT::RegisterServer  
 Adds the service to the registry.  
  
```
HRESULT RegisterServer(
    BOOL bRegTypeLib = FALSE,
    const CLSID* pCLSID = NULL) throw();
```  
  
### Parameters  
 `bRegTypeLib`  
 TRUE if the type library is to be registered. The default value is FALSE.  
  
 `pCLSID`  
 Points to the CLSID of the object to be registered. If NULL (the default value), all objects in the object map will be registered.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="unregisterappid"></a>  CAtlModuleT::UnregisterAppId  
 Removes the EXE from the registry.  
  
```
HRESULT UnregisterAppId() throw();
```  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="unregisterserver"></a>  CAtlModuleT::UnregisterServer  
 Removes the service from the registry.  
  
```
HRESULT UnregisterServer(
    BOOL bUnRegTypeLib,
    const CLSID* pCLSID = NULL) throw();
```  
  
### Parameters  
 `bUnRegTypeLib`  
 TRUE if the type library is also to be unregistered.  
  
 `pCLSID`  
 Points to the CLSID of the object to be unregistered. If NULL (the default value), all objects in the object map will be unregistered.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
##  <a name="updateregistryappid"></a>  CAtlModuleT::UpdateRegistryAppId  
 Updates the EXE information in the registry.  
  
```
static HRESULT WINAPI UpdateRegistryAppId(BOOL /* bRegister*/) throw();
```  
  
### Parameters  
 `bRegister`  
 Reserved.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
## See Also  
 [CAtlModule Class](../../atl/reference/catlmodule-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Module Classes](../../atl/atl-module-classes.md)
