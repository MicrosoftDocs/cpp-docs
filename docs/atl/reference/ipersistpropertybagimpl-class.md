---
description: "Learn more about: IPersistPropertyBagImpl Class"
title: "IPersistPropertyBagImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IPersistPropertyBagImpl", "ATLCOM/ATL::IPersistPropertyBagImpl", "ATLCOM/ATL::IPersistPropertyBagImpl::GetClassID", "ATLCOM/ATL::IPersistPropertyBagImpl::InitNew", "ATLCOM/ATL::IPersistPropertyBagImpl::Load", "ATLCOM/ATL::IPersistPropertyBagImpl::Save"]
helpviewer_keywords: ["IPersistPropertyBagImpl class"]
ms.assetid: 712af24d-99f8-40f2-9811-53b3ff6e5b19
---
# IPersistPropertyBagImpl Class

This class implements `IUnknown` and allows an object to save its properties to a client-supplied property bag.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class T>
class ATL_NO_VTABLE IPersistPropertyBagImpl : public IPersistPropertyBag
```

#### Parameters

*T*<br/>
Your class, derived from `IPersistPropertyBagImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IPersistPropertyBagImpl::GetClassID](#getclassid)|Retrieves the object's CLSID.|
|[IPersistPropertyBagImpl::InitNew](#initnew)|Initializes a newly created object. The ATL implementation returns S_OK.|
|[IPersistPropertyBagImpl::Load](#load)|Loads the object's properties from a client-supplied property bag.|
|[IPersistPropertyBagImpl::Save](#save)|Saves the object's properties into a client-supplied property bag.|

## Remarks

The [IPersistPropertyBag](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768205\(v=vs.85\)) interface allows an object to save its properties to a client-supplied property bag. Class `IPersistPropertyBagImpl` provides a default implementation of this interface and implements `IUnknown` by sending information to the dump device in debug builds.

`IPersistPropertyBag` works in conjunction with [IPropertyBag](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768196\(v=vs.85\)) and [IErrorLog](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768231\(v=vs.85\)). These latter two interfaces must be implemented by the client. Through `IPropertyBag`, the client saves and loads the object's individual properties. Through `IErrorLog`, both the object and the client can report any errors encountered.

**Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)

## Inheritance Hierarchy

`IPersistPropertyBag`

`IPersistPropertyBagImpl`

## Requirements

**Header:** atlcom.h

## <a name="getclassid"></a> IPersistPropertyBagImpl::GetClassID

Retrieves the object's CLSID.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### Remarks

See [IPersist::GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) in the Windows SDK.

## <a name="initnew"></a> IPersistPropertyBagImpl::InitNew

Initializes a newly created object.

```
STDMETHOD(InitNew)();
```

### Return Value

Returns S_OK.

### Remarks

See [IPersistPropertyBag::InitNew](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768204\(v=vs.85\)) in the Windows SDK.

## <a name="load"></a> IPersistPropertyBagImpl::Load

Loads the object's properties from a client-supplied property bag.

```
STDMETHOD(Load)(LPPROPERTYBAG pPropBag, LPERRORLOG pErrorLog);
```

### Remarks

ATL uses the object's property map to retrieve this information.

See [IPersistPropertyBag::Load](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768206\(v=vs.85\)) in the Windows SDK.

## <a name="save"></a> IPersistPropertyBagImpl::Save

Saves the object's properties into a client-supplied property bag.

```
STDMETHOD(Save)(
    LPPROPERTYBAG pPropBag,
    BOOL fClearDirty,
    BOOL fSaveAllProperties);
```

### Remarks

ATL uses the object's property map to store this information. By default, this method saves all properties, regardless of the value of *fSaveAllProperties*.

See [IPersistPropertyBag::Save](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768207\(v=vs.85\)) in the Windows SDK.

## See also

[BEGIN_PROP_MAP](property-map-macros.md#begin_prop_map)<br/>
[Class Overview](../../atl/atl-class-overview.md)
