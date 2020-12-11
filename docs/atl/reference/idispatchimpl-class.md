---
description: "Learn more about: IDispatchImpl Class"
title: "IDispatchImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IDispatchImpl", "ATLCOM/ATL::IDispatchImpl", "ATLCOM/ATL::IDispatchImpl::IDispatchImpl", "ATLCOM/ATL::IDispatchImpl::GetIDsOfNames", "ATLCOM/ATL::IDispatchImpl::GetTypeInfo", "ATLCOM/ATL::IDispatchImpl::GetTypeInfoCount", "ATLCOM/ATL::IDispatchImpl::Invoke"]
helpviewer_keywords: ["dual interfaces, classes", "IDispatchImpl class", "IDispatch class support in ATL"]
ms.assetid: 8108eb36-1228-4127-a203-3ab5ba488892
---
# IDispatchImpl Class

Provides a default implementation for the `IDispatch` part of a dual interface.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template<class T,
        const IID* piid= &__uuidof(T),
        const GUID* plibid = &CAtlModule::m_libid,
        WORD wMajor = 1,
        WORD wMinor = 0,
        class tihclass = CComTypeInfoHolder>
class ATL_NO_VTABLE IDispatchImpl : public T
```

#### Parameters

*T*<br/>
[in] A dual interface.

*piid*<br/>
[in] A pointer to the IID of *T*.

*plibid*<br/>
[in] A pointer to the LIBID of the type library that contains information about the interface. By default, the server-level type library is passed.

*wMajor*<br/>
[in] The major version of the type library. By default, the value is 1.

*wMinor*<br/>
[in] The minor version of the type library. By default, the value is 0.

*tihclass*<br/>
[in] The class used to manage the type information for *T*. By default, the value is `CComTypeInfoHolder`.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[IDispatchImpl::IDispatchImpl](#idispatchimpl)|The constructor. Calls `AddRef` on the protected member variable that manages the type information for the dual interface. The destructor calls `Release`.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[IDispatchImpl::GetIDsOfNames](#getidsofnames)|Maps a set of names to a corresponding set of dispatch identifiers.|
|[IDispatchImpl::GetTypeInfo](#gettypeinfo)|Retrieves the type information for the dual interface.|
|[IDispatchImpl::GetTypeInfoCount](#gettypeinfocount)|Determines whether there is type information available for the dual interface.|
|[IDispatchImpl::Invoke](#invoke)|Provides access to the methods and properties exposed by the dual interface.|

## Remarks

`IDispatchImpl` provides a default implementation for the `IDispatch` part of any dual interface on an object. A dual interface derives from `IDispatch` and uses only Automation-compatible types. Like a dispinterface, a dual interface supports early binding and late binding; however, a dual interface also supports vtable binding.

The following example shows a typical implementation of `IDispatchImpl`.

[!code-cpp[NVC_ATL_COM#47](../../atl/codesnippet/cpp/idispatchimpl-class_1.h)]

By default, the `IDispatchImpl` class looks up the type information for *T* in the registry. To implement an unregistered interface, you can use the `IDispatchImpl` class without accessing the registry by using a predefined version number. If you create an `IDispatchImpl` object that has 0xFFFF as the value for *wMajor* and 0xFFFF as the value for *wMinor*, the `IDispatchImpl` class retrieves the type library from the .dll file instead of the registry.

`IDispatchImpl` contains a static member of type `CComTypeInfoHolder` that manages the type information for the dual interface. If you have multiple objects that implement the same dual interface, only one instance of `CComTypeInfoHolder` is used.

## Inheritance Hierarchy

`T`

`IDispatchImpl`

## Requirements

**Header:** atlcom.h

## <a name="getidsofnames"></a> IDispatchImpl::GetIDsOfNames

Maps a set of names to a corresponding set of dispatch identifiers.

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

## <a name="gettypeinfo"></a> IDispatchImpl::GetTypeInfo

Retrieves the type information for the dual interface.

```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```

### Remarks

See [IDispatch::GetTypeInfo](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfo) in the Windows SDK.

## <a name="gettypeinfocount"></a> IDispatchImpl::GetTypeInfoCount

Determines whether there is type information available for the dual interface.

```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```

### Remarks

See `IDispatch::GetTypeInfoCount` in the Windows SDK.

## <a name="idispatchimpl"></a> IDispatchImpl::IDispatchImpl

The constructor. Calls `AddRef` on the protected member variable that manages the type information for the dual interface. The destructor calls `Release`.

```
IDispatchImpl();
```

## <a name="invoke"></a> IDispatchImpl::Invoke

Provides access to the methods and properties exposed by the dual interface.

```
STDMETHOD(Invoke)(
    DISPID dispidMember,
    REFIID riid,
    LCID lcid,
    WORD wFlags,
    DISPPARAMS* pdispparams,
    VARIANT* pvarResult,
    EXCEPINFO* pexcepinfo,
    UINT* puArgErr);
```

### Remarks

See [IDispatch::Invoke](/windows/win32/api/oaidl/nf-oaidl-idispatch-invoke) in the Windows SDK.

## See also

[Class Overview](../../atl/atl-class-overview.md)
