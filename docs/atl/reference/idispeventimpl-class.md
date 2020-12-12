---
description: "Learn more about: IDispEventImpl Class"
title: "IDispEventImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IDispEventImpl", "ATLCOM/ATL::IDispEventImpl", "ATLCOM/ATL::IDispEventImpl::IDispEventImpl", "ATLCOM/ATL::IDispEventImpl::GetFuncInfoFromId", "ATLCOM/ATL::IDispEventImpl::GetIDsOfNames", "ATLCOM/ATL::IDispEventImpl::GetTypeInfo", "ATLCOM/ATL::IDispEventImpl::GetTypeInfoCount", "ATLCOM/ATL::IDispEventImpl::GetUserDefinedType"]
helpviewer_keywords: ["IDispEventImpl class"]
ms.assetid: a64b5288-35cb-4638-aad6-2d15b1c7cf7b
---
# IDispEventImpl Class

This class provides implementations of the `IDispatch` methods.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <UINT nID, class T,
    const IID* pdiid = &IID_NULL,
    const GUID* plibid = &GUID_NULL,
    WORD wMajor = 0,
    WORD wMinor = 0,
    class tihclass = CcomTypeInfoHolder>
class ATL_NO_VTABLE IDispEventImpl : public IDispEventSimpleImpl<nID, T, pdiid>
```

#### Parameters

*nID*<br/>
A unique identifier for the source object. When `IDispEventImpl` is the base class for a composite control, use the resource ID of the desired contained control for this parameter. In other cases, use an arbitrary positive integer.

*T*<br/>
The user's class, which is derived from `IDispEventImpl`.

*pdiid*<br/>
The pointer to the IID of the event dispinterface implemented by this class. This interface must be defined in the type library denoted by *plibid*, *wMajor*, and *wMinor*.

*plibid*<br/>
A pointer to the type library that defines the dispatch interface pointed to by *pdiid*. If **&GUID_NULL**, the type library will be loaded from the object sourcing the events.

*wMajor*<br/>
The major version of the type library. The default value is 0.

*wMinor*<br/>
The minor version of the type library. The default value is 0.

*tihclass*<br/>
The class used to manage the type information for *T*. The default value is a class of type `CComTypeInfoHolder`; however, you can override this template parameter by providing a class of a type other than `CComTypeInfoHolder`.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[IDispEventImpl::_tihclass](../../atl/reference/idispeventimpl-class.md)|The class used to manage the type information. By default, `CComTypeInfoHolder`.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[IDispEventImpl::IDispEventImpl](#idispeventimpl)|The constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[IDispEventImpl::GetFuncInfoFromId](#getfuncinfofromid)|Locates the function index for the specified dispatch identifier.|
|[IDispEventImpl::GetIDsOfNames](#getidsofnames)|Maps a single member and an optional set of argument names to a corresponding set of integer DISPIDs.|
|[IDispEventImpl::GetTypeInfo](#gettypeinfo)|Retrieves the type information for an object.|
|[IDispEventImpl::GetTypeInfoCount](#gettypeinfocount)|Retrieves the number of type information interfaces.|
|[IDispEventImpl::GetUserDefinedType](#getuserdefinedtype)|Retrieves the basic type of a user-defined type.|

## Remarks

`IDispEventImpl` provides a way of implementing an event dispinterface without requiring you to supply implementation code for every method/event on that interface. `IDispEventImpl` provides implementations of the `IDispatch` methods. You only need to supply implementations for the events that you are interested in handling.

`IDispEventImpl` works in conjunction with the event sink map in your class to route events to the appropriate handler function. To use this class:

Add a [SINK_ENTRY](composite-control-macros.md#sink_entry) or [SINK_ENTRY_EX](composite-control-macros.md#sink_entry_ex) macro to the event sink map for each event on each object that you want to handle. When using `IDispEventImpl` as a base class of a composite control, you can call [AtlAdviseSinkMap](connection-point-global-functions.md#atladvisesinkmap) to establish and break the connection with the event sources for all entries in the event sink map. In other cases, or for greater control, call [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) to establish the connection between the source object and the base class. Call [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise) to break the connection.

You must derive from `IDispEventImpl` (using a unique value for *nID*) for each object for which you need to handle events. You can reuse the base class by unadvising against one source object then advising against a different source object, but the maximum number of source objects that can be handled by a single object at one time is limited by the number of `IDispEventImpl` base classes.

`IDispEventImpl` provides the same functionality as [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md), except it gets type information about the interface from a type library rather than having it supplied as a pointer to an [_ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) structure. Use `IDispEventSimpleImpl` when you do not have a type library describing the event interface or want to avoid the overhead associated with using the type library.

> [!NOTE]
> `IDispEventImpl` and `IDispEventSimpleImpl` provide their own implementation of `IUnknown::QueryInterface` enabling each `IDispEventImpl` and `IDispEventSimpleImpl` base class to act as a separate COM identity while still allowing direct access to class members in your main COM object.

CE ATL implementation of ActiveX event sinks only supports return values of type HRESULT or void from your event handler methods; any other return value is unsupported and its behavior is undefined.

For more information, see [Supporting IDispEventImpl](../../atl/supporting-idispeventimpl.md).

## Inheritance Hierarchy

`_IDispEvent`

`_IDispEventLocator`

[IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)

`IDispEventImpl`

## Requirements

**Header:** atlcom.h

## <a name="getfuncinfofromid"></a> IDispEventImpl::GetFuncInfoFromId

Locates the function index for the specified dispatch identifier.

```
HRESULT GetFuncInfoFromId(
    const IID& iid,
    DISPID dispidMember,
    LCID lcid,
    _ATL_FUNC_INFO& info);
```

### Parameters

*iid*<br/>
[in] A reference to the ID of the function.

*dispidMember*<br/>
[in] The dispatch ID of the function.

*lcid*<br/>
[in] The locale context of the function ID.

*info*<br/>
[in] The structure indicating how the function is called.

### Return Value

A standard HRESULT value.

## <a name="getidsofnames"></a> IDispEventImpl::GetIDsOfNames

Maps a single member and an optional set of argument names to a corresponding set of integer DISPIDs, which can be used on subsequent calls to [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke).

```
STDMETHOD(GetIDsOfNames)(
    REFIID riid,
    LPOLESTR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID* rgdispid);
```

### Remarks

See [IDispatch::GetIDsOfNames](/windows/win32/api/oaidl/nf-oaidl-idispatch-getidsofnames) in the Windows SDK.

## <a name="gettypeinfo"></a> IDispEventImpl::GetTypeInfo

Retrieves the type information for an object, which can then be used to get the type information for an interface.

```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```

### Remarks

## <a name="gettypeinfocount"></a> IDispEventImpl::GetTypeInfoCount

Retrieves the number of type information interfaces that an object provides (either 0 or 1).

```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```

### Remarks

See [IDispatch::GetTypeInfoCount](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfocount) in the Windows SDK.

## <a name="getuserdefinedtype"></a> IDispEventImpl::GetUserDefinedType

Retrieves the basic type of a user-defined type.

```
VARTYPE GetUserDefinedType(
    ITypeInfo* pTI,
    HREFTYPE hrt);
```

### Parameters

*pTI*<br/>
[in] A pointer to the [ITypeInfo](/windows/win32/api/oaidl/nn-oaidl-itypeinfo) interface containing the user-defined type.

*hrt*<br/>
[in] A handle to the type description to be retrieved.

### Return Value

The type of variant.

### Remarks

See [ITypeInfo::GetRefTypeInfo](/windows/win32/api/oaidl/nf-oaidl-itypeinfo-getreftypeinfo).

## <a name="idispeventimpl"></a> IDispEventImpl::IDispEventImpl

The constructor. Stores the values of the class template parameters *plibid*, *pdiid*, *wMajor*, and *wMinor*.

```
IDispEventImpl();
```

## <a name="tihclass"></a> IDispEventImpl::tihclass

This typedef is an instance of the class template parameter *tihclass*.

```
typedef tihclass _tihclass;
```

### Remarks

By default, the class is `CComTypeInfoHolder`. `CComTypeInfoHolder` manages the type information for the class.

## See also

[_ATL_FUNC_INFO Structure](../../atl/reference/atl-func-info-structure.md)<br/>
[IDispatchImpl Class](../../atl/reference/idispatchimpl-class.md)<br/>
[IDispEventSimpleImpl Class](../../atl/reference/idispeventsimpleimpl-class.md)<br/>
[SINK_ENTRY](composite-control-macros.md#sink_entry)<br/>
[SINK_ENTRY_EX](composite-control-macros.md#sink_entry_ex)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)<br/>
[Class Overview](../../atl/atl-class-overview.md)
