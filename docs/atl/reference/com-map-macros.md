---
title: "COM Map Macros | Microsoft Docs"
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
  - "COM interfaces, COM map macros"
ms.assetid: 0f33656d-321f-4996-90cc-9a7f21ab73c3
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
# COM Map Macros
These macros define COM interface maps.  
  
|||  
|-|-|  
|[BEGIN_COM_MAP](#begin_com_map)|Marks the beginning of the COM interface map entries.|  
|[COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00)|Enters interfaces into the COM interface map.|  
|[COM_INTERFACE_ENTRY2](#com_interface_entry2)|Use this macro to disambiguate two branches of inheritance.|  
|[COM_INTERFACE_ENTRY_IID](#com_interface_entry_iid)|Use this macro to enter the interface into the COM map and specify its IID.|  
|[COM_INTERFACE_ENTRY2_IID](#com_interface_entry2_iid)|Same as [COM_INTERFACE_ENTRY2](#com_interface_entry2), except you can specify a different IID.|  
|[COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate)|When the interface identified by `iid` is queried for, `COM_INTERFACE_ENTRY_AGGREGATE` forwards to `punk`.|  
|[COM_INTERFACE_ENTRY_AGGREGATE_BLIND](#com_interface_entry_aggregate_blind)|Same as [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), except that querying for any IID results in forwarding the query to `punk`.|  
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate)|Same as [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), except if `punk` is **NULL**, it automatically creates the aggregate described by the `clsid`.|  
|[COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND](#com_interface_entry_autoaggregate_blind)|Same as [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), except that querying for any IID results in forwarding the query to `punk`, and if `punk` is **NULL**, automatically creating the aggregate described by the `clsid`.|  
|[COM_INTERFACE_ENTRY_BREAK](#com_interface_entry_break)|Causes your program to call [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297) when the specified interface is queried for.|  
|[COM_INTERFACE_ENTRY_CACHED_TEAR_OFF](#com_interface_entry_cached_tear_off)|Saves the interface-specific data for every instance.|  
|[COM_INTERFACE_ENTRY_TEAR_OFF](#com_interface_entry_tear_off)|Exposes your tear-off interfaces.|  
|[COM_INTERFACE_ENTRY_CHAIN](#com_interface_entry_chain)|Processes the COM map of the base class when the processing reaches this entry in the COM map.|  
|[COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func)|A general mechanism for hooking into ATL's `QueryInterface` logic.|  
|[COM_INTERFACE_ENTRY_FUNC_BLIND](#com_interface_entry_func_blind)|Same as [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), except that querying for any IID results in a call to `func`.|  
|[COM_INTERFACE_ENTRY_NOINTERFACE](#com_interface_entry_nointerface)|Returns **E_NOINTERFACE** and terminates COM map processing when the specified interface is queried for.|  
|[END_COM_MAP](#end_com_map)|Marks the end of the COM interface map entries.|  
  
##  <a name="begin_com_map"></a>  BEGIN_COM_MAP  
 The COM map is the mechanism that exposes interfaces on an object to a client through `QueryInterface`.  
  
```
BEGIN_COM_MAP(x)
```  
  
### Parameters  
 *x*  
 [in] The name of the class object you are exposing interfaces on.  
  
### Remarks  
 [CComObjectRootEx::InternalQueryInterface](ccomobjectrootex-class.md#ccomobjectrootex__internalqueryinterface) only returns pointers for interfaces in the COM map. Start your interface map with the `BEGIN_COM_MAP` macro, add entries for each of your interfaces with the [COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/c5363b8b-a1a2-471e-ad3a-d472f6c356c5) macro or one of its variants, and complete the map with the [END_COM_MAP](#end_com_map) macro.  

  
### Example  
 From the ATL [BEEPER](../../visual-cpp-samples.md) sample:  
  
 [!code-cpp[NVC_ATL_COM#1](../../atl/codesnippet/cpp/com-map-macros_1.h)]  
  
##  <a name="com_interface_entry_macros"></a>  COM_INTERFACE_ENTRY Macros  
 These macros enter an object's interfaces into its COM map so that they can be accessed by `QueryInterface`. The order of entries in the COM map is the order interfaces will be checked for a matching **IID** during `QueryInterface`.  
  
##  <a name="com_interface_entry2_x2"></a>  COM_INTERFACE_ENTRY2  
 Use this macro to disambiguate two branches of inheritance.  
  
```
COM_INTERFACE_ENTRY2(x, x2)
```  
  
### Parameters  
 *x*  
 [in] The name of an interface you want to expose from your object.  
  
 `x2`  
 [in] The name of the inheritance branch from which *x* is exposed.  
  
### Remarks  
 For example, if you derive your class object from two dual interfaces, you expose `IDispatch` using `COM_INTERFACE_ENTRY2` since `IDispatch` can be obtained from either one of the interfaces.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#118](../../atl/codesnippet/cpp/com-map-macros_2.h)]  
  
##  <a name="com_interface_entry_iid"></a>  COM_INTERFACE_ENTRY_IID  
 Use this macro to enter the interface into the COM map and specify its IID.  
  
```
COM_INTERFACE_ENTRY_IID(iid, x)
```  
  
### Parameters  
 `iid`  
 [in] The GUID of the interface exposed.  
  
 *x*  
 [in] The name of the class whose vtable will be exposed as the interface identified by `iid`.  
  
### Remarks  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#117](../../atl/codesnippet/cpp/com-map-macros_3.h)]  
  
##  <a name="com_interface_entry2_iid"></a>  COM_INTERFACE_ENTRY2_IID  
 Same as [COM_INTERFACE_ENTRY2](#com_interface_entry2), except you can specify a different IID.  
  
```
COM_INTERFACE_ENTRY2_IID(iid, x, x2)
```   
  
### Parameters  
 `iid`  
 [in] The GUID you are specifying for the interface.  
  
 *x*  
 [in] The name of an interface that your class object derives from directly.  
  
 `x2`  
 [in] The name of a second interface that your class object derives from directly.  
  
### Remarks  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
##  <a name="com_interface_entry2"></a>  COM_INTERFACE_ENTRY2  
 Use this macro to disambiguate two branches of inheritance.  
  
```
COM_INTERFACE_ENTRY2(x, x2)
```  
  
### Parameters  
 *x*  
 [in] The name of an interface you want to expose from your object.  
  
 `x2`  
 [in] The name of the inheritance branch from which *x* is exposed.  
  
### Remarks  
 For example, if you derive your class object from two dual interfaces, you expose `IDispatch` using `COM_INTERFACE_ENTRY2` since `IDispatch` can be obtained from either one of the interfaces.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#118](../../atl/codesnippet/cpp/com-map-macros_2.h)]  
  
##  <a name="com_interface_entry_aggregate2"></a>  COM_INTERFACE_ENTRY_AGGREGATE  
 When the interface identified by `iid` is queried for, `COM_INTERFACE_ENTRY_AGGREGATE` forwards to `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE(iid, punk)
```  
  
### Parameters  
 `iid`  
 [in] The GUID of the interface queried for.  
  
 `punk`  
 [in] The name of an **IUnknown** pointer.  
  
### Remarks  
 The `punk` parameter is assumed to point to the inner unknown of an aggregate or to **NULL**, in which case the entry is ignored. Typically, you would **CoCreate** the aggregate in `FinalConstruct`.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#112](../../atl/codesnippet/cpp/com-map-macros_4.h)]  
  
##  <a name="com_interface_entry_aggregate_blind"></a>  COM_INTERFACE_ENTRY_AGGREGATE_BLIND  
 Same as [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), except that querying for any IID results in forwarding the query to `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE_BLIND(punk)
```  
  
### Parameters  
 `punk`  
 [in] The name of an **IUnknown** pointer.  
  
### Remarks  
 If the interface query fails, processing of the COM map continues.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#113](../../atl/codesnippet/cpp/com-map-macros_5.h)]  
  
##  <a name="com_interface_entry_aggregate3"></a>  COM_INTERFACE_ENTRY_AGGREGATE  
 When the interface identified by `iid` is queried for, `COM_INTERFACE_ENTRY_AGGREGATE` forwards to `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE(iid,  punk)
```  
  
### Parameters  
 `iid`  
 [in] The GUID of the interface queried for.  
  
 `punk`  
 [in] The name of an **IUnknown** pointer.  
  
### Remarks  
 The `punk` parameter is assumed to point to the inner unknown of an aggregate or to **NULL**, in which case the entry is ignored. Typically, you would **CoCreate** the aggregate in `FinalConstruct`.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#112](../../atl/codesnippet/cpp/com-map-macros_4.h)]  
  
##  <a name="com_interface_entry_autoaggregate"></a>  COM_INTERFACE_ENTRY_AUTOAGGREGATE  
 Same as [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), except if `punk` is **NULL**, it automatically creates the aggregate described by the `clsid`.  
  
```
COM_INTERFACE_ENTRY_AUTOAGGREGATE(iid, punk, clsid)
```   
  
### Parameters  
 `iid`  
 [in] The GUID of the interface queried for.  
  
 `punk`  
 [in] The name of an **IUnknown** pointer. Must be a member of the class containing the COM map.  
  
 `clsid`  
 [in] The identifier of the aggregate that will be created if `punk` is **NULL**.  
  
### Remarks  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#114](../../atl/codesnippet/cpp/com-map-macros_6.h)]  
  
##  <a name="com_interface_entry_aggregate"></a>  COM_INTERFACE_ENTRY_AGGREGATE  
 When the interface identified by `iid` is queried for, `COM_INTERFACE_ENTRY_AGGREGATE` forwards to `punk`.  
  
```
COM_INTERFACE_ENTRY_AGGREGATE(iid, punk)
```  
  
### Parameters  
 `iid`  
 [in] The GUID of the interface queried for.  
  
 `punk`  
 [in] The name of an **IUnknown** pointer.  
  
### Remarks  
 The `punk` parameter is assumed to point to the inner unknown of an aggregate or to **NULL**, in which case the entry is ignored. Typically, you would **CoCreate** the aggregate in `FinalConstruct`.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#112](../../atl/codesnippet/cpp/com-map-macros_4.h)]  
  
##  <a name="com_interface_entry_autoaggregate_blind"></a>  COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND  
 Same as [COM_INTERFACE_ENTRY_AUTOAGGREGATE](#com_interface_entry_autoaggregate), except that querying for any IID results in forwarding the query to `punk`, and if `punk` is **NULL**, automatically creating the aggregate described by the `clsid`.  
  
```
COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(punk, clsid)
```  
  
### Parameters  
 `punk`  
 [in] The name of an **IUnknown** pointer. Must be a member of the class containing the COM map.  
  
 `clsid`  
 [in] The identifier of the aggregate that will be created if `punk` is **NULL**.  
  
### Remarks  
 If the interface query fails, processing of the COM map continues.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#115](../../atl/codesnippet/cpp/com-map-macros_7.h)]  
  
##  <a name="com_interface_entry_autoaggregate2"></a>  COM_INTERFACE_ENTRY_AUTOAGGREGATE  
 Same as [COM_INTERFACE_ENTRY_AGGREGATE](#com_interface_entry_aggregate), except if `punk` is **NULL**, it automatically creates the aggregate described by the `clsid`.  
  
```
COM_INTERFACE_ENTRY_AUTOAGGREGATE(iid, punk, clsid)
```   
  
### Parameters  
 `iid`  
 [in] The GUID of the interface queried for.  
  
 `punk`  
 [in] The name of an **IUnknown** pointer. Must be a member of the class containing the COM map.  
  
 `clsid`  
 [in] The identifier of the aggregate that will be created if `punk` is **NULL**.  
  
### Remarks  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#114](../../atl/codesnippet/cpp/com-map-macros_6.h)]  
  
##  <a name="com_interface_entry_break"></a>  COM_INTERFACE_ENTRY_BREAK  
 Causes your program to call [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297) when the specified interface is queried for.  
  
```
COM_INTERFACE_ENTRY_BREAK(x)
```  
  
### Parameters  
 *x*  
 [in] Text used to construct the interface identifier.  
  
### Remarks  
 The interface IID will be constructed by appending *x* to `IID_`. For example, if *x* is `IPersistStorage`, the IID will be `IID_IPersistStorage`.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
##  <a name="com_interface_entry_cached_tear_off"></a>  COM_INTERFACE_ENTRY_CACHED_TEAR_OFF  
 Saves the interface-specific data for every instance.  
  
```
COM_INTERFACE_ENTRY_CACHED_TEAR_OFF(iid, x, punk)
```   
  
### Parameters  
 `iid`  
 [in] The GUID of the tear-off interface.  
  
 *x*  
 [in] The name of the class implementing the interface.  
  
 `punk`  
 [in] The name of an **IUnknown** pointer. Must be a member of the class containing the COM map. Should be initialized to **NULL** in the class object's constructor.  
  
### Remarks  
 If the interface is not used, this lowers the overall instance size of your object.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#54](../../atl/codesnippet/cpp/com-map-macros_8.h)]  
  
##  <a name="com_interface_entry_tear_off"></a>  COM_INTERFACE_ENTRY_TEAR_OFF  
 Exposes your tear-off interfaces.  
  
```
COM_INTERFACE_ENTRY_TEAR_OFF(iid, x)
```  
  
### Parameters  
 `iid`  
 [in] The GUID of the tear-off interface.  
  
 *x*  
 [in] The name of the class implementing the interface.  
  
### Remarks  
 A tear-off interface is implemented as a separate object that is instantiated every time the interface it represents is queried for. Typically, you build your interface as a tear-off if the interface is rarely used, since this saves a vtable pointer in every instance of your main object. The tear-off is deleted when its reference count becomes zero. The class implementing the tear-off should be derived from `CComTearOffObjectBase` and have its own COM map.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
### Example  
 [!code-cpp[NVC_ATL_COM#1](../../atl/codesnippet/cpp/com-map-macros_1.h)]  
  
##  <a name="com_interface_entry_chain"></a>  COM_INTERFACE_ENTRY_CHAIN  
 Processes the COM map of the base class when the processing reaches this entry in the COM map.  
  
```
COM_INTERFACE_ENTRY_CHAIN(classname)
```  
  
### Parameters  
 *classname*  
 [in] A base class of the current object.  
  
### Remarks  
 For example, in the following code:  
  
 [!code-cpp[NVC_ATL_Windowing#116](../../atl/codesnippet/cpp/com-map-macros_9.h)]  
  
 Note that the first entry in the COM map must be an interface on the object containing the COM map. Thus, you cannot start your COM map entries with `COM_INTERFACE_ENTRY_CHAIN`, which causes the COM map of a different object to be searched at the point where **COM_INTERFACE_ENTRY_CHAIN(**`COtherObject`**)** appears in your object's COM map. If you want to search the COM map of another object first, add an interface entry for **IUnknown** to your COM map, then chain the other object's COM map. For example:  
  
 [!code-cpp[NVC_ATL_Windowing#111](../../atl/codesnippet/cpp/com-map-macros_10.h)]  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
##  <a name="com_interface_entry_func2"></a>  COM_INTERFACE_ENTRY_FUNC  
 A general mechanism for hooking into ATL's `QueryInterface` logic.  
  
```
COM_INTERFACE_ENTRY_FUNC(iid, dw, func)
```   
  
### Parameters  
 `iid`  
 [in] The GUID of the interface exposed.  
  
 `dw`  
 [in] A parameter passed through to the `func`.  
  
 `func`  
 [in] The function pointer that will return `iid`.  
  
### Remarks  
 If *iid* matches the IID of the interface queried for, then the function specified by `func` is called. The declaration for the function should be:  
  
 `HRESULT WINAPI func(void* pv, REFIID riid, LPVOID* ppv, DWORD_PTR dw);`  
  
 When your function is called, `pv` points to your class object. The `riid` parameter refers to the interface being queried for, `ppv` is the pointer to the location where the function should store the pointer to the interface, and `dw` is the parameter you specified in the entry. The function should set \* `ppv` to **NULL** and return **E_NOINTERFACE** or **S_FALSE** if it chooses not to return an interface. With **E_NOINTERFACE**, COM map processing terminates. With **S_FALSE**, COM map processing continues, even though no interface pointer was returned. If the function returns an interface pointer, it should return `S_OK`.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
##  <a name="com_interface_entry_func_blind"></a>  COM_INTERFACE_ENTRY_FUNC_BLIND  
 Same as [COM_INTERFACE_ENTRY_FUNC](#com_interface_entry_func), except that querying for any IID results in a call to `func`.  
  
```
COM_INTERFACE_ENTRY_FUNC_BLIND(dw, func)
```  
  
### Parameters  
 `dw`  
 [in] A parameter passed through to the `func`.  
  
 `func`  
 [in] The function that gets called when this entry in the COM map is processed.  
  
### Remarks  
 Any failure will cause processing to continue on the COM map. If the function returns an interface pointer, it should return `S_OK`.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
##  <a name="com_interface_entry_func"></a>  COM_INTERFACE_ENTRY_FUNC  
 A general mechanism for hooking into ATL's `QueryInterface` logic.  
  
```
COM_INTERFACE_ENTRY_FUNC(iid, dw, func)
```   
  
### Parameters  
 `iid`  
 [in] The GUID of the interface exposed.  
  
 `dw`  
 [in] A parameter passed through to the `func`.  
  
 `func`  
 [in] The function pointer that will return `iid`.  
  
### Remarks  
 If *iid* matches the IID of the interface queried for, then the function specified by `func` is called. The declaration for the function should be:  
  
 `HRESULT WINAPI func(void* pv, REFIID riid, LPVOID* ppv, DWORD_PTR dw);`  
  
 When your function is called, `pv` points to your class object. The `riid` parameter refers to the interface being queried for, `ppv` is the pointer to the location where the function should store the pointer to the interface, and `dw` is the parameter you specified in the entry. The function should set \* `ppv` to **NULL** and return **E_NOINTERFACE** or **S_FALSE** if it chooses not to return an interface. With **E_NOINTERFACE**, COM map processing terminates. With **S_FALSE**, COM map processing continues, even though no interface pointer was returned. If the function returns an interface pointer, it should return `S_OK`.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
##  <a name="com_interface_entry_nointerface"></a>  COM_INTERFACE_ENTRY_NOINTERFACE  
 Returns **E_NOINTERFACE** and terminates COM map processing when the specified interface is queried for.  
  
```
COM_INTERFACE_ENTRY_NOINTERFACE(x)
```  
  
### Parameters  
 *x*  
 [in] Text used to construct the interface identifier.  
  
### Remarks  
 You can use this macro to prevent an interface from being used in a particular case. For example, you can insert this macro into your COM map right before `COM_INTERFACE_ENTRY_AGGREGATE_BLIND` to prevent a query for the interface from being forwarded to the aggregate's inner unknown.  
  
 The interface IID will be constructed by appending *x* to `IID_`. For example, if *x* is `IPersistStorage`, the IID will be `IID_IPersistStorage`.  
  
 See [COM_INTERFACE_ENTRY Macros](http://msdn.microsoft.com/library/19dcb768-2e1f-4b8d-a618-453a01a4bd00) for remarks about COM map entries.  
  
##  <a name="end_com_map"></a>  END_COM_MAP  
 Ends the definition of your COM interface map.  
  
```
END_COM_MAP()
```  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)   
 [COM Map Global Functions](../../atl/reference/com-map-global-functions.md)
