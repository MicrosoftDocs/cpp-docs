---
title: "CAtlWinModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CAtlWinModule"
  - "ATL.CAtlWinModule"
  - "CAtlWinModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlWinModule class"
ms.assetid: 7ec844af-0f68-4a34-b0c8-9de50a025df0
caps.latest.revision: 20
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
# CAtlWinModule Class
This class provides support for ATL windowing components.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CAtlWinModule : public _ATL_WIN_MODULE
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlWinModule::CAtlWinModule](#catlwinmodule__catlwinmodule)|The constructor.|  
|[CAtlWinModule::~CAtlWinModule](#catlwinmodule___dtorcatlwinmodule)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlWinModule::AddCreateWndData](#catlwinmodule__addcreatewnddata)|Adds a data object.|  
|[CAtlWinModule::ExtractCreateWndData](#catlwinmodule__extractcreatewnddata)|Returns a pointer to the window module data object.|  
  
## Remarks  
 This class provides support for all ATL classes which require windowing features.  
  
## Inheritance Hierarchy  
 [_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)  
  
 `CAtlWinModule`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="catlwinmodule__addcreatewnddata"></a>  CAtlWinModule::AddCreateWndData  
 This method initializes and adds an `_AtlCreateWndData` structure.  
  
```
void AddCreateWndData(
    _AtlCreateWndData* pData,
    void* pObject);
```  
  
### Parameters  
 `pData`  
 Pointer to the `_AtlCreateWndData` structure to be initialized and added to the current module.  
  
 `pObject`  
 Pointer to an object's **this** pointer.  
  
### Remarks  
 This method calls [AtlWinModuleAddCreateWndData](http://msdn.microsoft.com/library/8463a6ed-07ea-4aad-92ec-ded681601b32) which initializes an [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) structure. This structure will store the **this** pointer, used to obtain the class instance in window procedures.  
  
##  <a name="catlwinmodule__catlwinmodule"></a>  CAtlWinModule::CAtlWinModule  
 The constructor.  
  
```
CAtlWinModule();
```  
  
### Remarks  
 If initialization fails, an **EXCEPTION_NONCONTINUABLE** exception is raised.  
  
##  <a name="catlwinmodule___dtorcatlwinmodule"></a>  CAtlWinModule::~CAtlWinModule  
 The destructor.  
  
```
~CAtlWinModule();
```  
  
### Remarks  
 Frees all allocated resources.  
  
##  <a name="catlwinmodule__extractcreatewnddata"></a>  CAtlWinModule::ExtractCreateWndData  
 This method returns a pointer to an `_AtlCreateWndData` structure.  
  
```
void* ExtractCreateWndData();
```  
  
### Return Value  
 Returns a pointer to the `_AtlCreateWndData` structure previously added with [CAtlWinModule::AddCreateWndData](#catlwinmodule__addcreatewnddata), or NULL if no object is available.  
  
## See Also  
 [_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Module Classes](../../atl/atl-module-classes.md)
