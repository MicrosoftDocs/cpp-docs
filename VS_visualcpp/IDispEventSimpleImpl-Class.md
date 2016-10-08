---
title: "IDispEventSimpleImpl Class"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 971d82b7-a921-47fa-a4d8-909bed377ab0
caps.latest.revision: 21
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
# IDispEventSimpleImpl Class
This class provides implementations of the `IDispatch` methods, without getting type information from a type library.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
template <  
    UINT nID,  
    class T,  
    const IID* pdiid>  
    class ATL_NO_VTABLE IDispEventSimpleImpl :  
    public _IDispEventLocator< nID,pdiid>  
```  
  
#### Parameters  
 `nID`  
 A unique identifier for the source object. When `IDispEventSimpleImpl` is the base class for a composite control, use the resource ID of the desired contained control for this parameter. In other cases, use an arbitrary positive integer.  
  
 `T`  
 The user's class, which is derived from `IDispEventSimpleImpl`.  
  
 `pdiid`  
 The pointer to the IID of the event dispinterface implemented by this class.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IDispEventSimpleImpl::Advise](../Topic/IDispEventSimpleImpl::Advise.md)|Establishes a connection with the default event source.|  
|[IDispEventSimpleImpl::DispEventAdvise](../Topic/IDispEventSimpleImpl::DispEventAdvise.md)|Establishes a connection with the event source.|  
|[IDispEventSimpleImpl::DispEventUnadvise](../Topic/IDispEventSimpleImpl::DispEventUnadvise.md)|Breaks the connection with the event source.|  
|[IDispEventSimpleImpl::GetIDsOfNames](../Topic/IDispEventSimpleImpl::GetIDsOfNames.md)|Returns **E_NOTIMPL**.|  
|[IDispEventSimpleImpl::GetTypeInfo](../Topic/IDispEventSimpleImpl::GetTypeInfo.md)|Returns **E_NOTIMPL**.|  
|[IDispEventSimpleImpl::GetTypeInfoCount](../Topic/IDispEventSimpleImpl::GetTypeInfoCount.md)|Returns **E_NOTIMPL**.|  
|[IDispEventSimpleImpl::Invoke](../Topic/IDispEventSimpleImpl::Invoke.md)|Calls the event handlers listed in the event sink map.|  
|[IDispEventSimpleImpl::Unadvise](../Topic/IDispEventSimpleImpl::Unadvise.md)|Breaks the connection with the default event source.|  
  
## Remarks  
 `IDispEventSimpleImpl` provides a way of implementing an event dispinterface without requiring you to supply implementation code for every method/event on that interface. `IDispEventSimpleImpl` provides implementations of the `IDispatch` methods. You only need to supply implementations for the events that you are interested in handling.  
  
 `IDispEventSimpleImpl` works in conjunction with the [event sink map](../Topic/BEGIN_SINK_MAP.md) in your class to route events to the appropriate handler function. To use this class:  
  
-   Add a [SINK_ENTRY_INFO](../Topic/SINK_ENTRY_INFO.md) macro to the event sink map for each event on each object that you want to handle.  
  
-   Supply type information for each event by passing a pointer to an [_ATL_FUNC_INFO](../VS_visualcpp/_ATL_FUNC_INFO-Structure.md) structure as a parameter to each entry. On the x86 platform, the `_ATL_FUNC_INFO.cc` value must be CC_CDECL with the callback function calling method of __stdcall.  
  
-   Call [DispEventAdvise](../Topic/IDispEventSimpleImpl::DispEventAdvise.md) to establish the connection between the source object and the base class.  
  
-   Call [DispEventUnadvise](../Topic/IDispEventSimpleImpl::DispEventUnadvise.md) to break the connection.  
  
 You must derive from `IDispEventSimpleImpl` (using a unique value for `nID`) for each object for which you need to handle events. You can reuse the base class by unadvising against one source object then advising against a different source object, but the maximum number of source objects that can be handled by a single object at one time is limited by the number of `IDispEventSimpleImpl` base classes.  
  
 **IDispEventSimplImpl** provides the same functionality as [IDispEventImpl](../VS_visualcpp/IDispEventImpl-Class.md), except it does not get type information about the interface from a type library. The wizards generate code based only on `IDispEventImpl`, but you can use `IDispEventSimpleImpl` by adding the code by hand. Use `IDispEventSimpleImpl` when you don't have a type library describing the event interface or want to avoid the overhead associated with using the type library.  
  
> [!NOTE]
>  `IDispEventImpl` and `IDispEventSimpleImpl` provide their own implementation of **IUnknown::QueryInterface** enabling each `IDispEventImpl` or `IDispEventSimpleImpl` base class to act as a separate COM identity while still allowing direct access to class members in your main COM object.  
  
 CE ATL implementation of ActiveX event sinks only supports return values of type HRESULT or void from your event handler methods; any other return value is unsupported and its behavior is undefined.  
  
 For more information, see [Supporting IDispEventImpl](../VS_visualcpp/Supporting-IDispEventImpl.md).  
  
## Inheritance Hierarchy  
 `_IDispEvent`  
  
 `_IDispEventLocator`  
  
 `IDispEventSimpleImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="idispeventsimpleimpl__advise"></a>  IDispEventSimpleImpl::Advise  
 Call this method to establish a connection with the event source represented by *pUnk*.  
  
```  
HRESULT Advise(    IUnknown* pUnk );  
```  
  
### Parameters  
 *pUnk*  
 [in] A pointer to the **IUnknown** interface of the event source object.  
  
### Return Value  
 `S_OK` or any failure `HRESULT` value.  
  
### Remarks  
 Once the connection is established, events fired from *pUnk* will be routed to handlers in your class by way of the event sink map.  
  
> [!NOTE]
>  If your class derives from multiple `IDispEventSimpleImpl` classes, you will need to disambiguate calls to this method by scoping the call with the particular base class you are interested in.  
  
 `Advise` establishes a connection with the default event source, it gets the IID of the default event source of the object as determined by [AtlGetObjectSourceInterface](../Topic/AtlGetObjectSourceInterface.md).  
  
##  <a name="idispeventsimpleimpl__dispeventadvise"></a>  IDispEventSimpleImpl::DispEventAdvise  
 Call this method to establish a connection with the event source represented by *pUnk*.  
  
```  
HRESULT DispEventAdvise(  
    IUnknown* pUnk  
    const IID* piid );  
```  
  
### Parameters  
 *pUnk*  
 [in] A pointer to the **IUnknown** interface of the event source object.  
  
 `piid`  
 A pointer to the IID of the event source object.  
  
### Return Value  
 `S_OK` or any failure `HRESULT` value.  
  
### Remarks  
 Subsequently, events fired from *pUnk* will be routed to handlers in your class by way of the event sink map.  
  
> [!NOTE]
>  If your class derives from multiple `IDispEventSimpleImpl` classes, you will need to disambiguate calls to this method by scoping the call with the particular base class you are interested in.  
  
 `DispEventAdvise` establishes a connection with the event source specified in `pdiid`.  
  
##  <a name="idispeventsimpleimpl__dispeventunadvise"></a>  IDispEventSimpleImpl::DispEventUnadvise  
 Breaks the connection with the event source represented by *pUnk*.  
  
```  
HRESULT DispEventUnadvise(  
    IUnknown* pUnk  
    const IID* piid );  
```  
  
### Parameters  
 *pUnk*  
 [in] A pointer to the **IUnknown** interface of the event source object.  
  
 `piid`  
 A pointer to the IID of the event source object.  
  
### Return Value  
 `S_OK` or any failure `HRESULT` value.  
  
### Remarks  
 Once the connection is broken, events will no longer be routed to the handler functions listed in the event sink map.  
  
> [!NOTE]
>  If your class derives from multiple `IDispEventSimpleImpl` classes, you will need to disambiguate calls to this method by scoping the call with the particular base class you are interested in.  
  
 `DispEventAdvise` breaks a connection that was established with the event source specified in `pdiid`.  
  
##  <a name="idispeventsimpleimpl__getidsofnames"></a>  IDispEventSimpleImpl::GetIDsOfNames  
 This implementation of **IDispatch::GetIDsOfNames** returns **E_NOTIMPL**.  
  
```  
STDMETHOD(GetIDsOfNames)(  
    REFIID /* riid */,  
    LPOLESTR* /* rgszNames */,  
    UINT /* cNames */,  
    LCID /* lcid */,  
    DISPID* /* rgdispid */ );  
```  
  
### Remarks  
 See [IDispatch::GetIDsOfNames](assetId:///6f6cf233-3481-436e-8d6a-51f93bf91619) in the Windows SDK.  
  
##  <a name="idispeventsimpleimpl__gettypeinfo"></a>  IDispEventSimpleImpl::GetTypeInfo  
 This implementation of **IDispatch::GetTypeInfo** returns **E_NOTIMPL**.  
  
```  
STDMETHOD(GetTypeInfo)(  
    UINT /* itinfo */,  
    LCID /* lcid */,  
    ITypeInfo** /* pptinfo */ );  
```  
  
### Remarks  
 See [IDispatch::GetTypeInfo](assetId:///cc1ec9aa-6c40-4e70-819c-a7c6dd6b8c99) in the Windows SDK.  
  
##  <a name="idispeventsimpleimpl__gettypeinfocount"></a>  IDispEventSimpleImpl::GetTypeInfoCount  
 This implementation of **IDispatch::GetTypeInfoCount** returns **E_NOTIMPL**.  
  
```  
STDMETHOD(GetTypeInfoCount)(    UINT* /* pctinfo */ );  
```  
  
### Remarks  
 See [IDispatch::GetTypeInfoCount](assetId:///da876d53-cb8a-465c-a43e-c0eb272e2a12) in the Windows SDK.  
  
##  <a name="idispeventsimpleimpl__invoke"></a>  IDispEventSimpleImpl::Invoke  
 This implementation of **IDispatch::Invoke** calls the event handlers listed in the event sink map.  
  
```  
STDMETHOD(Invoke)(  
    DISPID dispidMember,  
    REFIID /* riid */,  
    LCID lcid,  
    WORD /* wFlags */,  
    DISPPARMS* pdispparams,  
    VARIANT* pvarResult,  
    EXCEPINFO* /* pexcepinfo */,  
    UINT* /* puArgErr */ );  
```  
  
### Remarks  
 See [IDispatch::Invoke](assetId:///964ade8e-9d8a-4d32-bd47-aa678912a54d).  
  
##  <a name="idispeventsimpleimpl__unadvise"></a>  IDispEventSimpleImpl::Unadvise  
 Breaks the connection with the event source represented by *pUnk*.  
  
```  
HRESULT Unadvise(    IUnknown* pUnk );  
```  
  
### Parameters  
 *pUnk*  
 [in] A pointer to the **IUnknown** interface of the event source object.  
  
### Return Value  
 `S_OK` or any failure `HRESULT` value.  
  
### Remarks  
 Once the connection is broken, events will no longer be routed to the handler functions listed in the event sink map.  
  
> [!NOTE]
>  If your class derives from multiple `IDispEventSimpleImpl` classes, you will need to disambiguate calls to this method by scoping the call with the particular base class you are interested in.  
  
 `Unadvise` breaks a connection that was established with the default event source specified in `pdiid`.  
  
 **Unavise** breaks a connection with the default event source, it gets the IID of the default event source of the object as determined by [AtlGetObjectSourceInterface](../Topic/AtlGetObjectSourceInterface.md).  
  
## See Also  
 [_ATL_FUNC_INFO Structure](../VS_visualcpp/_ATL_FUNC_INFO-Structure.md)   
 [IDispatchImpl Class](../VS_visualcpp/IDispatchImpl-Class.md)   
 [IDispEventImpl Class](../VS_visualcpp/IDispEventImpl-Class.md)   
 [SINK_ENTRY_INFO](../Topic/SINK_ENTRY_INFO.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)