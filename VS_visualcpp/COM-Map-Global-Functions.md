---
title: "COM Map Global Functions"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: b9612d30-eb23-46ef-8093-d56f237d3cf1
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# COM Map Global Functions
These functions provide support for COM Map             **IUnknown** implementations.  
  
|||  
|-|-|  
|[AtlInternalQueryInterface](../Topic/AtlInternalQueryInterface.md)|Delegates to the                             **IUnknown** of a nonaggregated object.|  
|[InlineIsEqualIUnknown](../Topic/InlineIsEqualIUnknown.md)|Generates efficient code for comparing interfaces against                             **IUnknown**.|  
  
##  <a name="atlinternalqueryinterface"></a>  AtlInternalQueryInterface  
 Retrieves a pointer to the requested interface.  
  
```  
HRESULT     AtlInternalQueryInterface(  
           void* pThis,  
    const _ATL_INTMAP_ENTRY* pEntries,  
    REFIID iid,  
    void** ppvObject );  
```  
  
### Parameters  
 `pThis`  
 [in] A pointer to the object that contains the COM map of interfaces exposed to                                 `QueryInterface`.  
  
 `pEntries`  
 [in] An array of                                 **_ATL_INTMAP_ENTRY** structures that access a map of available interfaces.  
  
 `iid`  
 [in] The GUID of the interface being requested.  
  
 `ppvObject`  
 [out] A pointer to the interface pointer specified in                                 `iid`, or                                 **NULL** if the interface is not found.  
  
### Return Value  
 One of the standard HRESULT values.  
  
### Remarks  
 `AtlInternalQueryInterface` only handles interfaces in the COM map table. If your object is aggregated,                         `AtlInternalQueryInterface` does not delegate to the outer unknown. You can enter interfaces into the COM map table with the macro                         [COM_INTERFACE_ENTRY](../Topic/COM_INTERFACE_ENTRY%20Macros.md) or one of its variants.  
  
### Example  
 [!CODE [NVC_ATL_Windowing#94](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Windowing#94)]  
  
##  <a name="inlineisequaliunknown"></a>  InlineIsEqualIUnknown  
 Call this function, for the special case of testing for                 **IUnknown**.  
  
```  
BOOL InlineIsEqualUnknown(           REFGUID rguid1 );  
```  
  
### Parameters  
 *rguid1*  
 [in] The GUID to compare to                                 **IID_IUnknown**.  
  
## See Also  
 [Functions](../VS_visualcpp/ATL-Functions.md)   
 [COM Map Macros](../VS_visualcpp/COM-Map-Macros.md)