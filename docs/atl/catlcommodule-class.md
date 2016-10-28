---
title: "CAtlComModule Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "ATL.CAtlComModule"
  - "CAtlComModule"
  - "ATL::CAtlComModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlComModule class"
ms.assetid: af5dd71a-a0d1-4a2e-9a24-154a03381c75
caps.latest.revision: 14
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
# CAtlComModule Class
This class implements a COM server module.  
  
## Syntax  
  
```
class CAtlComModule :  public _ATL_COM_MODULE
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlComModule::CAtlComModule](../Topic/CAtlComModule::CAtlComModule.md)|The constructor.|  
|[CAtlComModule::~CAtlComModule](../Topic/CAtlComModule::~CAtlComModule.md)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlComModule::RegisterServer](../Topic/CAtlComModule::RegisterServer.md)|Call this method to update the system registry for each object in the object map.|  
|[CAtlComModule::RegisterTypeLib](../Topic/CAtlComModule::RegisterTypeLib.md)|Call this method to register a type library.|  
|[CAtlComModule::UnregisterServer](../Topic/CAtlComModule::UnregisterServer.md)|Call this method to unregister each object in the object map.|  
|[CAtlComModule::UnRegisterTypeLib](../Topic/CAtlComModule::UnRegisterTypeLib.md)|Call this method to unregister a type library.|  
  
## Remarks  
 `CAtlComModule` implements a COM server module, allowing a client to access the module's components.  
  
 This class replaces the obsolete [CComModule](../atl/ccommodule-class.md) class used in earlier versions of ATL. See [ATL Module Classes](../atl/atl-module-classes.md) for more details.  
  
## Inheritance Hierarchy  
 [_ATL_COM_MODULE](../Topic/_ATL_COM_MODULE.md)  
  
 `CAtlComModule`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="catlcommodule__catlcommodule"></a>  CAtlComModule::CAtlComModule  
 The constructor.  
  
```
CAtlComModule() throw();
```  
  
### Remarks  
 Initializes the module.  
  
##  <a name="catlcommodule___dtorcatlcommodule"></a>  CAtlComModule::~CAtlComModule  
 The destructor.  
  
```
~CAtlComModule();
```  
  
### Remarks  
 Frees all class factories.  
  
##  <a name="catlcommodule__registerserver"></a>  CAtlComModule::RegisterServer  
 Call this method to update the system registry for each object in the object map.  
  
```
HRESULT RegisterServer(BOOL bRegTypeLib = FALSE,  const CLSID* pCLSID = NULL);
```  
  
### Parameters  
 `bRegTypeLib`  
 TRUE if the type library is to be registered. The default value is FALSE.  
  
 `pCLSID`  
 Points to the CLSID of the object to be registered. If NULL (the default value), all objects in the object map will be registered.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Calls the global function [AtlComModuleRegisterServer](../Topic/AtlComModuleRegisterServer.md).  
  
##  <a name="catlcommodule__registertypelib"></a>  CAtlComModule::RegisterTypeLib  
 Call this method to register a type library.  
  
```
HRESULT RegisterTypeLib(LPCTSTR lpszIndex);

    HRESULT  RegisterTypeLib();
```  
  
### Parameters  
 `lpszIndex`  
 String in the format "\\\N", where N is the integer index of the TYPELIB resource.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Adds information about a type library to the system registry. If the module instance contains multiple type libraries, use the first version of this method to specify which type library should be used.  
  
##  <a name="catlcommodule__unregisterserver"></a>  CAtlComModule::UnregisterServer  
 Call this method to unregister each object in the object map.  
  
```
HRESULT UnregisterServer(BOOL bRegTypeLib = FALSE,  const CLSID* pCLSID = NULL);
```  
  
### Parameters  
 `bRegTypeLib`  
 TRUE if the type library is to be unregistered. The default value is FALSE.  
  
 `pCLSID`  
 Points to the CLSID of the object to be unregistered. If NULL (the default value), all objects in the object map will be unregistered.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 Calls the global function [AtlComModuleUnregisterServer](../Topic/AtlComModuleUnregisterServer.md).  
  
##  <a name="catlcommodule__unregistertypelib"></a>  CAtlComModule::UnRegisterTypeLib  
 Call this method to unregister a type library.  
  
```
HRESULT UnRegisterTypeLib(LPCTSTR lpszIndex);

    HRESULT  UnRegisterTypeLib();
```  
  
### Parameters  
 `lpszIndex`  
 String in the format "\\\N", where N is the integer index of the TYPELIB resource.  
  
### Remarks  
 Removes information about a type library from the system registry. If the module instance contains multiple type libraries, use the first version of this method to specify which type library should be used.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
## See Also  
 [_ATL_COM_MODULE](../Topic/_ATL_COM_MODULE.md)   
 [Class Overview](../atl/atl-class-overview.md)

