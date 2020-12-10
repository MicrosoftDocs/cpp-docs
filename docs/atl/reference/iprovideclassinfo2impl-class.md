---
description: "Learn more about: IProvideClassInfo2Impl Class"
title: "IProvideClassInfo2Impl Class"
ms.date: "11/04/2016"
f1_keywords: ["IProvideClassInfo2Impl", "ATLCOM/ATL::IProvideClassInfo2Impl", "ATLCOM/ATL::IProvideClassInfo2Impl::IProvideClassInfo2Impl", "ATLCOM/ATL::IProvideClassInfo2Impl::GetClassInfo", "ATLCOM/ATL::IProvideClassInfo2Impl::GetGUID", "ATLCOM/ATL::IProvideClassInfo2Impl::_tih"]
helpviewer_keywords: ["IProvideClassInfo2Impl class", "IProvideClassInfo2 ATL implementation", "class information, ATL"]
ms.assetid: d74956e8-9c69-4cba-b99d-ca1ac031bb9d
---
# IProvideClassInfo2Impl Class

This class provides a default implementation of the [IProvideClassInfo](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo) and [IProvideClassInfo2](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo2) methods.

## Syntax

```
template <const CLSID* pcoclsid,
    const IID* psrcid,
    const GUID* plibid = &CAtlModule::m_libid,
    WORD wMajor = 1,
    WORD wMinor = 0, class tihclass = CComTypeInfoHolder>
class ATL_NO_VTABLE IProvideClassInfo2Impl : public IProvideClassInfo2
```

#### Parameters

*pcoclsid*<br/>
A pointer to the coclass' identifier.

*psrcid*<br/>
A pointer to the identifier for the coclass' default outgoing dispinterface.

*plibid*<br/>
A pointer to the LIBID of the type library that contains information about the interface. By default, the server-level type library is passed.

*wMajor*<br/>
The major version of the type library. The default value is 1.

*wMinor*<br/>
The minor version of the type library. The default value is 0.

*tihclass*<br/>
The class used to manage the coclass' type information. The default value is `CComTypeInfoHolder`.

## Members

### Constructors

|Name|Description|
|----------|-----------------|
|[IProvideClassInfo2Impl::IProvideClassInfo2Impl](#iprovideclassinfo2impl)|Constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[IProvideClassInfo2Impl::GetClassInfo](#getclassinfo)|Retrieves an `ITypeInfo` pointer to the coclass' type information.|
|[IProvideClassInfo2Impl::GetGUID](#getguid)|Retrieves the GUID for the object's outgoing dispinterface.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[IProvideClassInfo2Impl::_tih](#_tih)|Manages the type information for the coclass.|

## Remarks

The [IProvideClassInfo2](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo2) interface extends [IProvideClassInfo](/windows/win32/api/ocidl/nn-ocidl-iprovideclassinfo) by adding the `GetGUID` method. This method allows a client to retrieve an object's outgoing interface IID for its default event set. Class `IProvideClassInfo2Impl` provides a default implementation of the `IProvideClassInfo` and `IProvideClassInfo2` methods.

`IProvideClassInfo2Impl` contains a static member of type `CComTypeInfoHolder` that manages the type information for the coclass.

## Inheritance Hierarchy

`IProvideClassInfo2`

`IProvideClassInfo2Impl`

## Requirements

**Header:** atlcom.h

## <a name="getclassinfo"></a> IProvideClassInfo2Impl::GetClassInfo

Retrieves an `ITypeInfo` pointer to the coclass' type information.

```
STDMETHOD(GetClassInfo)(ITypeInfo** pptinfo);
```

### Remarks

See [IProvideClassInfo::GetClassInfo](/windows/win32/api/ocidl/nf-ocidl-iprovideclassinfo-getclassinfo) in the Windows SDK.

## <a name="getguid"></a> IProvideClassInfo2Impl::GetGUID

Retrieves the GUID for the object's outgoing dispinterface.

```
STDMETHOD(GetGUID)(
    DWORD dwGuidKind,
    GUID* pGUID);
```

### Remarks

See [IProvideClassInfo2::GetGUID](/windows/win32/api/ocidl/nf-ocidl-iprovideclassinfo2-getguid) in the Windows SDK.

## <a name="iprovideclassinfo2impl"></a> IProvideClassInfo2Impl::IProvideClassInfo2Impl

The constructor.

```
IProvideClassInfo2Impl();
```

### Remarks

Calls `AddRef` on the [_tih](#_tih) member. The destructor calls `Release`.

## <a name="_tih"></a> IProvideClassInfo2Impl::_tih

This static data member is an instance of the class template parameter, *tihclass*, which by default is `CComTypeInfoHolder`.

```
static  tihclass
    _tih;
```

### Remarks

`_tih` manages the type information for the coclass.

## See also

[Class Overview](../../atl/atl-class-overview.md)
