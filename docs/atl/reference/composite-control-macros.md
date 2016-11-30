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
SINK_ENTRY(
    id, 
    dispid, 
    fn )
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
SINK_ENTRY_EX(
    id, 
    iid, 
    dispid, 
    fn )
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
SINK_ENTRY_INFO(
    id, 
    iid, 
    dispid, 
    fn, 
    info )
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
  
##  <a name="idispeventsimpleimpl_class"></a>  IDispEventSimpleImpl Class  
 This class provides implementations of the `IDispatch` methods, without getting type information from a type library.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
```
template <UINT nID, classT, const IID* pdiid>
class ATL_NO_VTABLE IDispEventSimpleImpl :
public _IDispEventLocator<nID, pdiid>
```  
  
### Parameters  
 `nID`  
 A unique identifier for the source object. When `IDispEventSimpleImpl` is the base class for a composite control, use the resource ID of the desired contained control for this parameter. In other cases, use an arbitrary positive integer.  
  
 `T`  
 The user's class, which is derived from `IDispEventSimpleImpl`.  
  
 `pdiid`  
 The pointer to the IID of the event dispinterface implemented by this class.  
  
### Remarks  
 `IDispEventSimpleImpl` provides a way of implementing an event dispinterface without requiring you to supply implementation code for every method/event on that interface. `IDispEventSimpleImpl` provides implementations of the `IDispatch` methods. You only need to supply implementations for the events that you are interested in handling.  
  
 `IDispEventSimpleImpl` works in conjunction with the [event sink map](#begin_sink_map) in your class to route events to the appropriate handler function. To use this class:  
  
-   Add a [SINK_ENTRY_INFO](#sink_entry_info) macro to the event sink map for each event on each object that you want to handle.  
  
-   Supply type information for each event by passing a pointer to an [_ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) structure as a parameter to each entry. On the x86 platform, the `_ATL_FUNC_INFO.cc` value must be CC_CDECL with the callback function calling method of __stdcall.  
  
-   Call [DispEventAdvise](idispeventsimpleimpl-class.md#idispeventsimpleimpl__dispeventadvise) to establish the connection between the source object and the base class.  
  
-   Call [DispEventUnadvise](idispeventsimpleimpl-class.md#idispeventsimpleimpl__dispeventunadvise) to break the connection.  

  
 You must derive from `IDispEventSimpleImpl` (using a unique value for `nID`) for each object for which you need to handle events. You can reuse the base class by unadvising against one source object then advising against a different source object, but the maximum number of source objects that can be handled by a single object at one time is limited by the number of `IDispEventSimpleImpl` base classes.  
  
 **IDispEventSimplImpl** provides the same functionality as [IDispEventImpl](../../atl/reference/idispeventimpl-class.md), except it does not get type information about the interface from a type library. The wizards generate code based only on `IDispEventImpl`, but you can use `IDispEventSimpleImpl` by adding the code by hand. Use `IDispEventSimpleImpl` when you don't have a type library describing the event interface or want to avoid the overhead associated with using the type library.  
  
> [!NOTE]
> `IDispEventImpl` and `IDispEventSimpleImpl` provide their own implementation of **IUnknown::QueryInterface** enabling each `IDispEventImpl` or `IDispEventSimpleImpl` base class to act as a separate COM identity while still allowing direct access to class members in your main COM object.  
  
 CE ATL implementation of ActiveX event sinks only supports return values of type HRESULT or void from your event handler methods; any other return value is unsupported and its behavior is undefined.  
  
 For more information, see [Supporting IDispEventImpl](../../atl/supporting-idispeventimpl.md).  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)   
 [Composite Control Global Functions](../../atl/reference/composite-control-global-functions.md)
