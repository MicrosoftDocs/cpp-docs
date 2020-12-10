---
description: "Learn more about: ChainInterfaces Structure"
title: "ChainInterfaces Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::ChainInterfaces", "implements/Microsoft::WRL::ChainInterfaces::CanCastTo", "implements/Microsoft::WRL::ChainInterfaces::CastToUnknown", "implements/Microsoft::WRL::ChainInterfaces::FillArrayWithIid", "implements/Microsoft::WRL::ChainInterfaces::IidCount", "implements/Microsoft::WRL::ChainInterfaces::Verify"]
helpviewer_keywords: ["Microsoft::WRL::ChainInterfaces structure", "Microsoft::WRL::ChainInterfaces::CanCastTo method", "Microsoft::WRL::ChainInterfaces::CastToUnknown method", "Microsoft::WRL::ChainInterfaces::FillArrayWithIid method", "Microsoft::WRL::ChainInterfaces::IidCount constant", "Microsoft::WRL::ChainInterfaces::Verify method"]
ms.assetid: d7415b59-5468-4bef-a3fd-8d82b12f0e9c
---
# ChainInterfaces Structure

Specifies verification and initialization functions that can be applied to a set of interface IDs.

## Syntax

```cpp
template <
    typename I0,
    typename I1,
    typename I2 = Details::Nil,
    typename I3 = Details::Nil,
    typename I4 = Details::Nil,
    typename I5 = Details::Nil,
    typename I6 = Details::Nil,
    typename I7 = Details::Nil,
    typename I8 = Details::Nil,
    typename I9 = Details::Nil
>
struct ChainInterfaces : I0;

template <
    typename DerivedType,
    typename BaseType,
    bool hasImplements,
    typename I1,
    typename I2,
    typename I3,
    typename I4,
    typename I5,
    typename I6,
    typename I7,
    typename I8,
    typename I9
>
struct ChainInterfaces<
    MixIn<
        DerivedType,
        BaseType,
        hasImplements
    >, I1, I2, I3, I4, I5, I6, I7, I8, I9
>;
```

### Parameters

*I0*<br/>
(Required) Interface ID 0.

*I1*<br/>
(Required) Interface ID 1.

*I2*<br/>
(Optional) Interface ID 2.

*I3*<br/>
(Optional) Interface ID 3.

*I4*<br/>
(Optional) Interface ID 4.

*I5*<br/>
(Optional) Interface ID 5.

*I6*<br/>
(Optional) Interface ID 6.

*I7*<br/>
(Optional) Interface ID 7.

*I8*<br/>
(Optional) Interface ID 8.

*I9*<br/>
(Optional) Interface ID 9.

*DerivedType*<br/>
A derived type.

*BaseType*<br/>
The base type of a derived type.

*hasImplements*<br/>
A Boolean value that if **`true`**, means you can't use a [MixIn](mixin-structure.md) structure with a class that does not derive from the [Implements](implements-structure.md) stucture.

## Members

### Protected Methods

Name                                                   | Description
------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ChainInterfaces::CanCastTo](#cancastto)               | Indicates whether the specified interface ID can be cast to each of the specializations defined by the `ChainInterface` template parameters.
[ChainInterfaces::CastToUnknown](#casttounknown)       | Casts the interface pointer of the type defined by the *I0* template parameter to a pointer to `IUnknown`.
[ChainInterfaces::FillArrayWithIid](#fillarraywithiid) | Stores the interface ID defined by the *I0* template parameter into a specified location in a specified array of interface IDs.
[ChainInterfaces::Verify](#verify)                     | Verifies that each interface defined by template parameters *I0* through *I9* inherits from `IUnknown` and/or `IInspectable`, and that *I0* inherits from *I1* through *I9*.

### Protected Constants

Name                                   | Description
-------------------------------------- | -----------------------------------------------------------------------------------------------------------------
[ChainInterfaces::IidCount](#iidcount) | The total number of interface IDs contained in the interfaces specified by template parameters *I0* through *I9*.

## Inheritance Hierarchy

`I0`

`ChainInterfaces`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## <a name="cancastto"></a> ChainInterfaces::CanCastTo

Indicates whether the specified interface ID can be cast to each of the specializations defined by the non-default template parameters.

```cpp
__forceinline bool CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### Parameters

*riid*<br/>
An interface ID.

*ppv*<br/>
A pointer to the last interface ID that was cast successfully.

### Return Value

**`true`** if all the cast operations succeeded; otherwise, **`false`**.

## <a name="casttounknown"></a> ChainInterfaces::CastToUnknown

Casts the interface pointer of the type defined by the *I0* template parameter to a pointer to `IUnknown`.

```cpp
__forceinline IUnknown* CastToUnknown();
```

### Return Value

A pointer to `IUnknown`.

## <a name="fillarraywithiid"></a> ChainInterfaces::FillArrayWithIid

Stores the interface ID defined by the *I0* template parameter into a specified location in a specified array of interface IDs.

```cpp
__forceinline static void FillArrayWithIid(
   _Inout_ unsigned long &index,
   _In_ IID* iids
);
```

### Parameters

*index*<br/>
Pointer to an index value into the *iids* array.

*iids*<br/>
An array of interface IDs.

## <a name="iidcount"></a> ChainInterfaces::IidCount

The total number of interface IDs contained in the interfaces specified by template parameters *I0* through *I9*.

```cpp
static const unsigned long IidCount = Details::InterfaceTraits<I0>::IidCount + Details::InterfaceTraits<I1>::IidCount + Details::InterfaceTraits<I2>::IidCount + Details::InterfaceTraits<I3>::IidCount + Details::InterfaceTraits<I4>::IidCount + Details::InterfaceTraits<I5>::IidCount + Details::InterfaceTraits<I6>::IidCount + Details::InterfaceTraits<I7>::IidCount + Details::InterfaceTraits<I8>::IidCount + Details::InterfaceTraits<I9>::IidCount;
```

### Return Value

The total number of interface IDs.

### Remarks

Template parameters *I0* and *I1* are required, and parameters *I2* through *I9* are optional. The IID count of each interface is typically 1.

## <a name="verify"></a> ChainInterfaces::Verify

Verifies that each interface defined by template parameters *I0* through *I9* inherits from `IUnknown` and/or `IInspectable`, and that *I0* inherits from *I1* through *I9*.

```cpp
WRL_NOTHROW __forceinline static void Verify();
```

### Remarks

If the verification operation fails, a **`static_assert`** emits an error message describing the failure.

Template parameters *I0* and *I1* are required, and parameters *I2* through *I9* are optional.
