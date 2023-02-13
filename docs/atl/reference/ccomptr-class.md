---
title: "CComPtr Class"
description: "Reference guide to the Microsoft C++ Active Template Library (ATL) class CComPtr."
ms.date: "02/07/2020"
f1_keywords: ["CComPtr", "ATLBASE/ATL::CComPtr", "ATLBASE/ATL::CComPtr::CComPtr"]
helpviewer_keywords: ["CComPtr class"]
ms.assetid: 22d9ea8d-ed66-4c34-940f-141db11e83bd
---
# `CComPtr` Class

A smart pointer class for managing COM interface pointers.

## Syntax

```cpp
template<class T>
class CComPtr
```

### Parameters

*`T`*<br/>
A COM interface specifying the type of pointer to be stored.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[`CComPtr::CComPtr`](#ccomptr)|The constructor.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[`CComPtr::operator =`](#operator_eq)|Assigns a pointer to the member pointer.|

## Remarks

ATL uses `CComPtr` and [`CComQIPtr`](../../atl/reference/ccomqiptr-class.md) to manage COM interface pointers. Both are derived from [`CComPtrBase`](../../atl/reference/ccomptrbase-class.md), and both do automatic reference counting.

The `CComPtr` and [`CComQIPtr`](../../atl/reference/ccomqiptr-class.md) classes can help eliminate memory leaks by performing automatic reference counting.  The following functions both do the same logical operations. However, the second version may be less error-prone because it uses the `CComPtr` class:

[!code-cpp[NVC_ATL_Utilities#130](../../atl/codesnippet/cpp/ccomptr-class_1.cpp)]
&nbsp;
[!code-cpp[NVC_ATL_Utilities#131](../../atl/codesnippet/cpp/ccomptr-class_2.cpp)]

In Debug builds, link atlsd.lib for code tracing.

## Inheritance Hierarchy

[`CComPtrBase`](../../atl/reference/ccomptrbase-class.md)

`CComPtr`

## Requirements

**Header:** `atlbase.h`

## <a name="ccomptr"></a> `CComPtr::CComPtr`

The constructor.

```cpp
CComPtr() throw ();
CComPtr(T* lp) throw ();
CComPtr (const CComPtr<T>& lp) throw ();
```

### Parameters

*`lp`*<br/>
Used to initialize the interface pointer.

*`T`*<br/>
A COM interface.

### Remarks

The constructors that take an argument call `AddRef` on *`lp`*, if it isn't a null pointer. A non-null owned object gets a `Release` call upon the CComPtr object's destruction, or if a new object is assigned to the CComPtr object.

## <a name="operator_eq"></a> `CComPtr::operator =`

Assignment operator.

```cpp
T* operator= (T* lp) throw ();
T* operator= (const CComPtr<T>& lp) throw ();
```

### Return Value

Returns a pointer to the updated `CComPtr` object

### Remarks

This operation AddRefs the new object and releases the existing object, if one exists.

## See also

[`CComPtr::CComPtr`](#ccomptr)<br/>
[`CComQIPtr::CComQIPtr`](../../atl/reference/ccomqiptr-class.md#ccomqiptr)<br/>
[Class Overview](../../atl/atl-class-overview.md)
