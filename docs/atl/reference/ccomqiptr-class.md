---
description: "Learn more about: CComQIPtr Class"
title: "CComQIPtr Class"
ms.date: "11/04/2016"
f1_keywords: ["CComQIPtr", "ATLCOMCLI/ATL::CComQIPtr", "ATLCOMCLI/ATL::CComQIPtr::CComQIPtr"]
helpviewer_keywords: ["CComQIPtr class"]
ms.assetid: 969cacb5-05b6-4af4-b683-24911d70242d
---
# CComQIPtr Class

A smart pointer class for managing COM interface pointers.

## Syntax

```
template<class T, const IID* piid= &__uuidof(T)>
class CComQIPtr: public CComPtr<T>
```

#### Parameters

*T*<br/>
A COM interface specifying the type of pointer to be stored.

*piid*<br/>
A pointer to the IID of *T*.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CComQIPtr::CComQIPtr](#ccomqiptr)|Constructor.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CComQIPtr::operator =](#operator_eq)|Assigns a pointer to the member pointer.|

## Remarks

ATL uses `CComQIPtr` and [CComPtr](../../atl/reference/ccomptr-class.md) to manage COM interface pointers, both of which derive from [CComPtrBase](../../atl/reference/ccomptrbase-class.md). Both classes perform automatic reference counting through calls to `AddRef` and `Release`. Overloaded operators handle pointer operations.

## Inheritance Hierarchy

[CComPtrBase](../../atl/reference/ccomptrbase-class.md)

[CComPtr](../../atl/reference/ccomptr-class.md)

`CComQIPtr`

## Requirements

**Header:** atlcomcli.h

## <a name="ccomqiptr"></a> CComQIPtr::CComQIPtr

The constructor.

```
CComQIPtr() throw();
CComQIPtr(T* lp) throw();
CComQIPtr(IUnknown* lp) throw();
CComQIPtr(const CComQIPtr<T, piid>& lp) throw();
```

### Parameters

*lp*<br/>
Used to initialize the interface pointer.

*T*<br/>
A COM interface.

*piid*<br/>
A pointer to the IID of *T*.

## <a name="operator_eq"></a> CComQIPtr::operator =

The assignment operator.

```
T* operator= (T* lp) throw();
T* operator= (const CComQIPtr<T, piid>& lp) throw();
T* operator= (IUnknown* lp) throw();
```

### Parameters

*lp*<br/>
Used to initialize the interface pointer.

*T*<br/>
A COM interface.

*piid*<br/>
A pointer to the IID of *T*.

### Return Value

Returns a pointer to the updated `CComQIPtr` object.

## See also

[CComPtr::CComPtr](../../atl/reference/ccomptr-class.md#ccomptr)<br/>
[CComQIPtr::CComQIPtr](#ccomqiptr)<br/>
[CComPtrBase Class](../../atl/reference/ccomptrbase-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)<br/>
[CComQIPtrElementTraits Class](../../atl/reference/ccomqiptrelementtraits-class.md)
