---
title: "Composite Control Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "composite controls, macros"
ms.assetid: 17f2dd5e-07e6-4aa6-b965-7a361c78c45e
caps.latest.revision: 16
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
# Composite Control Macros
These macros define event sink maps and entries.  
  
|||  
|-|-|  
|[BEGIN_SINK_MAP](#begin_sink_map)|Marks the beginning of the event sink map for the composite control.|  
|[END_SINK_MAP](#end_sink_map)|Marks the end of the event sink map for the composite control.|  
|[SINK_ENTRY](#sink_entry)|Entry to the event sink map.|  
|[SINK_ENTRY_EX](#sink_entry_ex)|Entry to the event sink map with an additional parameter.|  
|[SINK_ENTRY_INFO](#sink_entry_info)|Entry to the event sink map with manually supplied type information for use with [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md).|  
  
## Requirements  
 **Header:** atlcom.h  

##  <a name="begin_sink_map"></a>  BEGIN_SINK_MAP  
 Declares the beginning of the event sink map for the composite control.  
  
```
BEGIN_SINK_MAP(_class)
```  
  
### Parameters  
 `_class`  
 [in] Specifies the control.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]  
  
### Remarks  
 CE ATL implementation of ActiveX event sinks only supports return values of type HRESULT or void from your event handler methods; any other return value is unsupported and its behavior is undefined.  
  
##  <a name="end_sink_map"></a>  END_SINK_MAP  
 Declares the end of the event sink map for the composite control.  
  
```
END_SINK_MAP()
```  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]  
  
### Remarks  
 CE ATL implementation of ActiveX event sinks only supports return values of type HRESULT or void from your event handler methods; any other return value is unsupported and its behavior is undefined.  
  
##  <a name="sink_entry"></a>  SINK_ENTRY  
 Declares the handler function ( `fn`) for the specified event ( `dispid`), of the control identified by `id`.  
  
```
SINK_ENTRY( id, dispid, fn )
```  
  
### Parameters  
 `id`  
 [in] Identifies the control.  
  
 `dispid`  
 [in] Identifies the specified event.  
  
 `fn`  
 [in] Name of the event handler function. This function must use the **_stdcall** calling convention and have the appropriate dispinterface-style signature.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#104](../../atl/codesnippet/cpp/composite-control-macros_1.h)]  
  
### Remarks  
 CE ATL implementation of ActiveX event sinks only supports return values of type HRESULT or void from your event handler methods; any other return value is unsupported and its behavior is undefined.  
  
##  <a name="sink_entry_ex"></a>  SINK_ENTRY_EX  
 Declares the handler function ( `fn`) for the specified event ( `dispid`), of the dispatch interface ( *iid)*, for the control identified by `id`.  
  
```
SINK_ENTRY_EX( id, iid, dispid, fn )
```  
  
### Parameters  
 `id`  
 [in] Identifies the control.  
  
 `iid`  
 [in] Identifies the dispatch interface.  
  
 `dispid`  
 [in] Identifies the specified event.  
  
 `fn`  
 [in] Name of the event handler function. This function must use the **_stdcall** calling convention and have the appropriate dispinterface-style signature.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#136](../../atl/codesnippet/cpp/composite-control-macros_2.h)]  
  
### Remarks  
 CE ATL implementation of ActiveX event sinks only supports return values of type HRESULT or void from your event handler methods; any other return value is unsupported and its behavior is undefined.  
  
##  <a name="sink_entry_info"></a>  SINK_ENTRY_INFO  
 Use the `SINK_ENTRY_INFO` macro within an event sink map to provide the information needed by [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) to route events to the relevant handler function.  
  
```
SINK_ENTRY_INFO( id, iid, dispid, fn, info )
```  
  
### Parameters  
 `id`  
 [in] Unsigned integer identifying the event source. This value must match the `nID` template parameter used in the related [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) base class.  
  
 `iid`  
 [in] IID identifying the dispatch interface.  
  
 `dispid`  
 [in] DISPID identifying the specified event.  
  
 `fn`  
 [in] Name of the event handler function. This function must use the **_stdcall** calling convention and have the appropriate dispinterface-style signature.  
  
 `info`  
 [in] Type information for the event handler function. This type information is provided in the form of a pointer to an `_ATL_FUNC_INFO` structure. `CC_CDECL` is the only option supported in Windows CE for the `CALLCONV` field of the `_ATL_FUNC_INFO` structure. Any other value is unsupported thus its behavior undefined.  
  
### Remarks  
 The first four macro parameters are the same as those for the [SINK_ENTRY_EX](#sink_entry_ex) macro. The final parameter provides type information for the event. CE ATL implementation of ActiveX event sinks only supports return values of type HRESULT or void from your event handler methods; any other return value is unsupported and its behavior is undefined.  
  

## See Also  
 [Macros](../../atl/reference/atl-macros.md)   
 [Composite Control Global Functions](../../atl/reference/composite-control-global-functions.md)
