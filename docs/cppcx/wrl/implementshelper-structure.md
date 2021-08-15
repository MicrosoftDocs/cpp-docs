---
description: "Learn more about: ImplementsHelper Structure"
title: "ImplementsHelper Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::ImplementsHelper", "implements/Microsoft::WRL::Details::ImplementsHelper::CanCastTo", "implements/Microsoft::WRL::Details::ImplementsHelper::CastToUnknown", "implements/Microsoft::WRL::Details::ImplementsHelper::FillArrayWithIid", "implements/Microsoft::WRL::Details::ImplementsHelper::IidCount"]
helpviewer_keywords: ["Microsoft::WRL::Details::ImplementsHelper structure", "Microsoft::WRL::Details::ImplementsHelper::CanCastTo method", "Microsoft::WRL::Details::ImplementsHelper::CastToUnknown method", "Microsoft::WRL::Details::ImplementsHelper::FillArrayWithIid method", "Microsoft::WRL::Details::ImplementsHelper::IidCount constant"]
ms.assetid: b857ba80-81bd-4e53-92b6-210991954243
---
# ImplementsHelper Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template <typename RuntimeClassFlagsT, typename ILst, bool IsDelegateToClass>
friend struct Details::ImplementsHelper;
```

### Parameters

*RuntimeClassFlagsT*<br/>
A field of flags that specifies one or more [RuntimeClassType](runtimeclasstype-enumeration.md) enumerators.

*ILst*<br/>
A list of interface IDs.

*IsDelegateToClass*<br/>
Specify **`true`** if the current instance of `Implements` is a base class of the first interface ID in *ILst*; otherwise, **`false`**.

## Remarks

Helps implement the [Implements](implements-structure.md) structure.

This template traverses a list of interfaces and adds them as base classes, and as information necessary to enable `QueryInterface`.

## Members

### Protected Methods

Name                                                    | Description
------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------
[ImplementsHelper::CanCastTo](#cancastto)               | Gets a pointer to the specified interface ID.
[ImplementsHelper::CastToUnknown](#casttounknown)       | Gets a pointer to the underlying `IUnknown` interface for the current `Implements` structure.
[ImplementsHelper::FillArrayWithIid](#fillarraywithiid) | Inserts the interface ID specified by the current zeroth template parameter into the specified array element.
[ImplementsHelper::IidCount](#iidcount)                 | Holds the number of implemented interface IDs in the current `Implements` object.

## Inheritance Hierarchy

`ImplementsHelper`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## <a name="cancastto"></a> ImplementsHelper::CanCastTo

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
HRESULT CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);

HRESULT CanCastTo(
   _In_ const IID &iid,
   _Deref_out_ void **ppv
);
```

### Parameters

*riid*<br/>
Reference to an interface ID.

*ppv*<br/>
If this operation is successful, a pointer to the interface specified by *riid* or *iid*.

*iid*<br/>
Reference to an interface ID.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

Gets a pointer to the specified interface ID.

## <a name="casttounknown"></a> ImplementsHelper::CastToUnknown

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
IUnknown* CastToUnknown();
```

### Return Value

Pointer to the underlying `IUnknown` interface.

### Remarks

Gets a pointer to the underlying `IUnknown` interface for the current `Implements` structure.

## <a name="fillarraywithiid"></a> ImplementsHelper::FillArrayWithIid

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
void FillArrayWithIid(
   _Inout_ unsigned long *index,
   _Inout_ IID* iids) throw();
```

### Parameters

*index*<br/>
A zero-based index that indicates the starting array element for this operation. When this operation completes, *index* is incremented by 1.

*iids*<br/>
An array of type IIDs.

### Remarks

Inserts the interface ID specified by the current zeroth template parameter into the specified array element.

## <a name="iidcount"></a> ImplementsHelper::IidCount

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
static const unsigned long IidCount;
```

### Remarks

Holds the number of implemented interface IDs in the current `Implements` object.
