---
description: "Learn more about: ISupportErrorInfoImpl Class"
title: "ISupportErrorInfoImpl Class"
ms.date: "06/13/2019"
f1_keywords: ["ISupportErrorInfoImpl", "ATLCOM/ATL::ISupportErrorInfoImpl", "ATLCOM/ATL::ISupportErrorInfoImpl::InterfaceSupportsErrorInfo"]
helpviewer_keywords: ["ISupportErrorInfo ATL implementation", "ISupportErrorInfoImpl class", "error information, ATL"]
ms.assetid: e33a4b11-a123-41cf-bcea-7b19743902af
---
# ISupportErrorInfoImpl Class

This class provides a default implementation of the [ISupportErrorInfo Interface](/windows/win32/api/oaidl/nn-oaidl-isupporterrorinfo) and can be used when only a single interface generates errors on an object.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
template<const IID* piid>
class ATL_NO_VTABLE ISupportErrorInfoImpl
   : public ISupportErrorInfo
```

### Parameters

*piid*<br/>
A pointer to the IID of an interface that supports [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo).

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[ISupportErrorInfoImpl::InterfaceSupportsErrorInfo](#interfacesupportserrorinfo)|Indicates whether the interface identified by `riid` supports the [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo) interface.|

## Remarks

The [ISupportErrorInfo Interface](/windows/win32/api/oaidl/nn-oaidl-isupporterrorinfo) ensures that error information can be returned to the client. Objects that use `IErrorInfo` must implement `ISupportErrorInfo`.

Class `ISupportErrorInfoImpl` provides a default implementation of `ISupportErrorInfo` and can be used when only a single interface generates errors on an object. For example:

[!code-cpp[NVC_ATL_COM#48](../../atl/codesnippet/cpp/isupporterrorinfoimpl-class_1.h)]

## Inheritance Hierarchy

`ISupportErrorInfo`

`ISupportErrorInfoImpl`

## Requirements

**Header:** atlcom.h

## <a name="interfacesupportserrorinfo"></a> ISupportErrorInfoImpl::InterfaceSupportsErrorInfo

Indicates whether the interface identified by `riid` supports the [IErrorInfo](/windows/win32/api/oaidl/nn-oaidl-ierrorinfo) interface.

```cpp
STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
```

### Remarks

See [ISupportErrorInfo::InterfaceSupportsErrorInfo](/windows/win32/api/oaidl/nf-oaidl-isupporterrorinfo-interfacesupportserrorinfo) in the Windows SDK.

## See also

[Class Overview](../../atl/atl-class-overview.md)
