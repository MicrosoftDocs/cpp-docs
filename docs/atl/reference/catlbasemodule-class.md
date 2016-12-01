---
title: "CAtlBaseModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CAtlBaseModule"
  - "ATL.CAtlBaseModule"
  - "CAtlBaseModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlBaseModule class"
ms.assetid: 55ade80c-9b0c-4c51-933e-2158436c1096
caps.latest.revision: 18
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
# CAtlBaseModule Class
This class is instantiated in every ATL project.  
  
## Syntax  
  
```
class CAtlBaseModule :
    public _ATL_BASE_MODULE
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlBaseModule::CAtlBaseModule](#catlbasemodule__catlbasemodule)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlBaseModule::AddResourceInstance](#catlbasemodule__addresourceinstance)|Adds a resource instance to the list of stored handles.|  
|[CAtlBaseModule::GetHInstanceAt](#catlbasemodule__gethinstanceat)|Returns a handle to a specified resource instance.|  
|[CAtlBaseModule::GetModuleInstance](#catlbasemodule__getmoduleinstance)|Returns the module instance from a `CAtlBaseModule` object.|  
|[CAtlBaseModule::GetResourceInstance](#catlbasemodule__getresourceinstance)|Returns the resource instance from a `CAtlBaseModule` object.|  
|[CAtlBaseModule::RemoveResourceInstance](#catlbasemodule__removeresourceinstance)|Removes a resource instance from the list of stored handles.|  
|[CAtlBaseModule::SetResourceInstance](#catlbasemodule__setresourceinstance)|Sets the resource instance of a `CAtlBaseModule` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlBaseModule::m_bInitFailed](#catlbasemodule__m_binitfailed)|A variable that indicates if the module initialization has failed.|  
  
## Remarks  
 An instance of `CAtlBaseModule` named _AtlBaseModule is present in every ATL project, containing a handle to the module instance, a handle to the module containing resources (which by default, are one and the same), and an array of handles to modules providing primary resources. `CAtlBaseModule` can be safely accessed from multiple threads.  
  
 This class replaces the obsolete [CComModule](../../atl/reference/ccommodule-class.md) class used in earlier versions of ATL.  
  
## Inheritance Hierarchy  
 [_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module)  
  
 `CAtlBaseModule`  
  
## Requirements  
 **Header:** atlcore.h  
  
##  <a name="catlbasemodule__addresourceinstance"></a>  CAtlBaseModule::AddResourceInstance  
 Adds a resource instance to the list of stored handles.  
  
```
bool AddResourceInstance(HINSTANCE   hInst) throw();
```  
  
### Parameters  
 `hInst`  
 The resource instance to add.  
  
### Return Value  
 Returns true if the resource was successfully added, false otherwise.  
  
##  <a name="catlbasemodule__catlbasemodule"></a>  CAtlBaseModule::CAtlBaseModule  
 The constructor.  
  
```
CAtlBaseModule() throw();
```  
  
### Remarks  
 Creates the `CAtlBaseModule`.  
  
##  <a name="catlbasemodule__gethinstanceat"></a>  CAtlBaseModule::GetHInstanceAt  
 Returns a handle to a specified resource instance.  
  
```
HINSTANCE GetHInstanceAt(int   i) throw();
```  
  
### Parameters  
 *i*  
 The number of the resource instance.  
  
### Return Value  
 Returns the handle to the resource instance, or NULL if no corresponding resource instance exists.  
  
##  <a name="catlbasemodule__getmoduleinstance"></a>  CAtlBaseModule::GetModuleInstance  
 Returns the module instance from a `CAtlBaseModule` object.  
  
```
HINSTANCE GetModuleInstance() throw();
```  
  
### Return Value  
 Returns the module instance.  
  
##  <a name="catlbasemodule__getresourceinstance"></a>  CAtlBaseModule::GetResourceInstance  
 Returns the resource instance.  
  
```
HINSTANCE GetResourceInstance() throw();
```  
  
### Return Value  
 Returns the resource instance.  
  
##  <a name="catlbasemodule__m_binitfailed"></a>  CAtlBaseModule::m_bInitFailed  
 A variable that indicates if the module initialization has failed.  
  
```
static bool m_bInitFailed;
```  
  
### Remarks  
 True if the module initialized, false if it failed to initialize.  
  
##  <a name="catlbasemodule__removeresourceinstance"></a>  CAtlBaseModule::RemoveResourceInstance  
 Removes a resource instance from the list of stored handles.  
  
```
bool RemoveResourceInstance(HINSTANCE   hInst) throw();
```  
  
### Parameters  
 `hInst`  
 The resource instance to remove.  
  
### Return Value  
 Returns true if the resource was successfully removed, false otherwise.  
  
##  <a name="catlbasemodule__setresourceinstance"></a>  CAtlBaseModule::SetResourceInstance  
 Sets the resource instance of a `CAtlBaseModule` object.  
  
```
HINSTANCE SetResourceInstance(HINSTANCE   hInst) throw();
```  
  
### Parameters  
 `hInst`  
 The new resource instance.  
  
### Return Value  
 Returns the updated resource instance.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)   
 [Module Classes](../../atl/atl-module-classes.md)
