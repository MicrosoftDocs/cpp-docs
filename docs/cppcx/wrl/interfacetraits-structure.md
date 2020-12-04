---
description: "Learn more about: InterfaceTraits Structure"
title: "InterfaceTraits Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::InterfaceTraits", "implements/Microsoft::WRL::Details::InterfaceTraits::CanCastTo", "implements/Microsoft::WRL::Details::InterfaceTraits::CastToBase", "implements/Microsoft::WRL::Details::InterfaceTraits::CastToUnknown", "implements/Microsoft::WRL::Details::InterfaceTraits::FillArrayWithIid", "implements/Microsoft::WRL::Details::InterfaceTraits::IidCount", "implements/Microsoft::WRL::Details::InterfaceTraits::Verify"]
helpviewer_keywords: ["Microsoft::WRL::Details::InterfaceTraits structure", "Microsoft::WRL::Details::InterfaceTraits::CanCastTo method", "Microsoft::WRL::Details::InterfaceTraits::CastToBase method", "Microsoft::WRL::Details::InterfaceTraits::CastToUnknown method", "Microsoft::WRL::Details::InterfaceTraits::FillArrayWithIid method", "Microsoft::WRL::Details::InterfaceTraits::IidCount constant", "Microsoft::WRL::Details::InterfaceTraits::Verify method"]
ms.assetid: ede0c284-19a7-4892-9738-ff3da4923d0a
---
# InterfaceTraits Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<typename I0>
struct __declspec(novtable) InterfaceTraits;

template<typename CloakedType>
struct __declspec(novtable) InterfaceTraits<
    CloakedIid<CloakedType>
>;

template<>
struct __declspec(novtable) InterfaceTraits<Nil>;
```

### Parameters

*I0*<br/>
The name of an interface.

*CloakedType*<br/>
For `RuntimeClass`, `Implements` and `ChainInterfaces`, an interface that won't be in the list of supported interface IDs.

## Remarks

Implements common characteristics of an interface.

The second template is a specialization for cloaked interfaces. The third template is a specialization for Nil parameters.

## Members

### <a name="public-typedefs"></a> Public Typedefs

Name   | Description
------ | ------------------------------------------
`Base` | A synonym for the *I0* template parameter.

### Public Methods

Name                                                   | Description
------------------------------------------------------ | ----------------------------------------------------------------------------------------
[InterfaceTraits::CanCastTo](#cancastto)               | Indicates whether the specified pointer can be cast to a pointer to `Base`.
[InterfaceTraits::CastToBase](#casttobase)             | Casts the specified pointer to a pointer to `Base`.
[InterfaceTraits::CastToUnknown](#casttounknown)       | Casts the specified pointer to a pointer to `IUnknown`.
[InterfaceTraits::FillArrayWithIid](#fillarraywithiid) | Assigns the interface ID of `Base` to the array element specified by the index argument.
[InterfaceTraits::Verify](#verify)                     | Verifies that `Base` is properly derived.

### Public Constants

Name                                   | Description
-------------------------------------- | ---------------------------------------------------------------------------------------
[InterfaceTraits::IidCount](#iidcount) | Holds the number of interface IDs associated with the current `InterfaceTraits` object.

## Inheritance Hierarchy

`InterfaceTraits`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## <a name="cancastto"></a> InterfaceTraits::CanCastTo

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
template<typename T>
static __forceinline bool CanCastTo(
   _In_ T* ptr,
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### Parameters

*ptr*<br/>
The name of a pointer to a type.

*riid*<br/>
The interface ID of `Base`.

*ppv*<br/>
If this operation is successful, *ppv* points to the interface specified by `Base`. Otherwise, *ppv* is set to **`nullptr`**.

### Return Value

**`true`** if this operation is successful and *ptr* is cast to a pointer to `Base`; otherwise, **`false`**.

### Remarks

Indicates whether the specified pointer can be cast to a pointer to `Base`.

For more information about `Base`, see the [Public Typedefs](#public-typedefs) section.

## <a name="casttobase"></a> InterfaceTraits::CastToBase

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
template<typename T>
static __forceinline Base* CastToBase(
   _In_ T* ptr
);
```

### Parameters

*T*<br/>
The type of parameter *ptr*.

*ptr*<br/>
Pointer to a type *T*.

### Return Value

A pointer to `Base`.

### Remarks

Casts the specified pointer to a pointer to `Base`.

For more information about `Base`, see the [Public Typedefs](#public-typedefs) section.

## <a name="casttounknown"></a> InterfaceTraits::CastToUnknown

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
template<typename T>
static __forceinline IUnknown* CastToUnknown(
   _In_ T* ptr
);
```

### Parameters

*T*<br/>
The type of parameter *ptr*.

*ptr*<br/>
Pointer to type *T*.

### Return Value

Pointer to the IUnknown from which `Base` is derived.

### Remarks

Casts the specified pointer to a pointer to `IUnknown`.

For more information about `Base`, see the [Public Typedefs](#public-typedefs) section.

## <a name="fillarraywithiid"></a> InterfaceTraits::FillArrayWithIid

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
__forceinline static void FillArrayWithIid(
   _Inout_ unsigned long &index,
   _In_ IID* iids
);
```

### Parameters

*index*<br/>
Pointer to a field that contains a zero-based index value.

*iids*<br/>
An array of interface IDs.

### Remarks

Assigns the interface ID of `Base` to the array element specified by the index argument.

Contrary to the name of this API, only one array element is modified; not the entire array.

For more information about `Base`, see the [Public Typedefs](#public-typedefs) section.

## <a name="iidcount"></a> InterfaceTraits::IidCount

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
static const unsigned long IidCount = 1;
```

### Remarks

Holds the number of interface IDs associated with the current `InterfaceTraits` object.

## <a name="verify"></a> InterfaceTraits::Verify

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
__forceinline static void Verify();
```

### Remarks

Verifies that `Base` is properly derived.

For more information about `Base`, see the [Public Typedefs](#public-typedefs) section.
