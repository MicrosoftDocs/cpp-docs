---
title: "WinModule Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "atlbase/ATL::AtlWinModuleAddCreateWndData"
  - "atlbase/ATL::AtlWinModuleExtractCreateWndData"
dev_langs: 
  - "C++"
ms.assetid: 8ce45a5b-26a7-491f-9096-c09ceca5f2c2
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# WinModule Global Functions
These functions provide support for `_AtlCreateWndData` structure operations.  
  
> [!IMPORTANT]
>  The functions listed in the following table cannot be used in applications that execute in the Windows Runtime.  
  
|||  
|-|-|  
|[AtlWinModuleAddCreateWndData](#atlwinmoduleaddcreatewnddata)|This function is used to initialize and add an `_AtlCreateWndData` structure.|  
|[AtlWinModuleExtractCreateWndData](#atlwinmoduleextractcreatewnddata)|Call this function to extract an existing `_AtlCreateWndData` structure.|  

## Requirements  
 **Header:** atlbase.h  
  `            
##  <a name="atlwinmoduleaddcreatewnddata"></a>  AtlWinModuleAddCreateWndData  
 This function is used to initialize and add an `_AtlCreateWndData` structure.  
   
```
ATLINLINE ATLAPI_(void) AtlWinModuleAddCreateWndData(
    _ATL_WIN_MODULE* pWinModule,
    _AtlCreateWndData* pData,
    void* pObject);
```  
  
### Parameters  
 `pWinModule`  
 Pointer to a module's [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) structure.  
  
 `pData`  
 Pointer to the [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) structure to be initialized and added to the current module.  
  
 `pObject`  
 Pointer to an object's **this** pointer.  
  
### Remarks  
 Initializes an `_AtlCreateWndData` structure, which is used to store the **this** pointer used to refer to class instances, and adds it to the list referenced by a module's `_ATL_WIN_MODULE70` structure. Called by [CAtlWinModule::AddCreateWndData](catlwinmodule-class.md#addcreatewnddata).  
  
##  <a name="atlwinmoduleextractcreatewnddata"></a>  AtlWinModuleExtractCreateWndData  
 Call this function to extract an existing `_AtlCreateWndData` structure.  
 
```
ATLINLINE ATLAPI_(void*) AtlWinModuleExtractCreateWndData(_ATL_WIN_MODULE* pWinModule);
```  
  
### Parameters  
 `pWinModule`  
 Pointer to a module's [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md) structure.  
  
### Return Value  
 Returns a pointer to the [_AtlCreateWndData](../../atl/reference/atlcreatewnddata-structure.md) structure.  
  
### Remarks  
 This function will extract an existing `_AtlCreateWndData` structure from the list referenced by a module's `_ATL_WIN_MODULE70` structure.  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)
