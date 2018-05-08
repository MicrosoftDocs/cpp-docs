---
title: "COM Map Global Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["atlbase/ATL::AtlInternalQueryInterface", "atlbase/ATL::InlineIsEqualIUnknown"]
dev_langs: ["C++"]
helpviewer_keywords: ["COM interfaces, COM map global functions"]
ms.assetid: b9612d30-eb23-46ef-8093-d56f237d3cf1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# COM Map Global Functions
These functions provide support for COM Map **IUnknown** implementations.  
  
|||  
|-|-|  
|[AtlInternalQueryInterface](#atlinternalqueryinterface)|Delegates to the **IUnknown** of a nonaggregated object.|  
|[InlineIsEqualIUnknown](#inlineisequaliunknown)|Generates efficient code for comparing interfaces against **IUnknown**.|  

  
## Requirements  
 **Header:** atlbase.h  

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
 `AtlInternalQueryInterface` only handles interfaces in the COM map table. If your object is aggregated, `AtlInternalQueryInterface` does not delegate to the outer unknown. You can enter interfaces into the COM map table with the macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) or one of its variants.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#94](../../atl/codesnippet/cpp/com-map-global-functions_1.cpp)]  
  
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
