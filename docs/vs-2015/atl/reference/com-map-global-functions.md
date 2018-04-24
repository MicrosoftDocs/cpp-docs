---
title: "COM Map Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM interfaces, COM map global functions"
ms.assetid: b9612d30-eb23-46ef-8093-d56f237d3cf1
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COM Map Global Functions
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [COM Map Global Functions](https://docs.microsoft.com/cpp/atl/reference/com-map-global-functions).  
  
  
These functions provide support for COM Map **IUnknown** implementations.  
  
|||  
|-|-|  
|[AtlInternalQueryInterface](#atlinternalqueryinterface)|Delegates to the **IUnknown** of a nonaggregated object.|  
|[InlineIsEqualIUnknown](#inlineisequaliunknown)|Generates efficient code for comparing interfaces against **IUnknown**.|  
  
##  <a name="atlinternalqueryinterface"></a>  AtlInternalQueryInterface  
 Retrieves a pointer to the requested interface.  
  
```
HRESULT AtlInternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```  
  
### Parameters  
 `pThis`  
 [in] A pointer to the object that contains the COM map of interfaces exposed to `QueryInterface`.  
  
 `pEntries`  
 [in] An array of **_ATL_INTMAP_ENTRY** structures that access a map of available interfaces.  
  
 `iid`  
 [in] The GUID of the interface being requested.  
  
 `ppvObject`  
 [out] A pointer to the interface pointer specified in `iid`, or **NULL** if the interface is not found.  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Remarks  
 `AtlInternalQueryInterface` only handles interfaces in the COM map table. If your object is aggregated, `AtlInternalQueryInterface` does not delegate to the outer unknown. You can enter interfaces into the COM map table with the macro [COM_INTERFACE_ENTRY](../Topic/COM_INTERFACE_ENTRY%20Macros.md) or one of its variants.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#94](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyCtrl.cpp#94)]  
  
##  <a name="inlineisequaliunknown"></a>  InlineIsEqualIUnknown  
 Call this function, for the special case of testing for **IUnknown**.  
  
```
BOOL InlineIsEqualUnknown(REFGUID rguid1);
```  
  
### Parameters  
 *rguid1*  
 [in] The GUID to compare to **IID_IUnknown**.  
  
## See Also  
 [Functions](../../atl/reference/atl-functions.md)   
 [COM Map Macros](../../atl/reference/com-map-macros.md)






