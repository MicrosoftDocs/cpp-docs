---
description: "Learn more about: Implements Structure"
title: "Implements Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Implements", "implements/Microsoft::WRL::Implements::CanCastTo", "implements/Microsoft::WRL::Implements::CastToUnknown", "implements/Microsoft::WRL::Implements::FillArrayWithIid", "implements/Microsoft::WRL::Implements::IidCount"]
helpviewer_keywords: ["Microsoft::WRL::Implements structure", "Microsoft::WRL::Implements::CanCastTo method", "Microsoft::WRL::Implements::CastToUnknown method", "Microsoft::WRL::Implements::FillArrayWithIid method", "Microsoft::WRL::Implements::IidCount method"]
ms.assetid: 29b13e90-34d4-4a0b-babd-5187c9eb0c36
---
# Implements Structure

Implements `QueryInterface` and `GetIid` for the specified interfaces.

## Syntax

```cpp
template <
    typename I0,
    typename I1 = Details::Nil,
    typename I2 = Details::Nil,
    typename I3 = Details::Nil,
    typename I4 = Details::Nil,
    typename I5 = Details::Nil,
    typename I6 = Details::Nil,
    typename I7 = Details::Nil,
    typename I8 = Details::Nil,
    typename I9 = Details::Nil
>
struct __declspec(novtable) Implements :
    Details::ImplementsHelper<
        RuntimeClassFlags<WinRt>,
        typename Details::InterfaceListHelper<
            I0, I1, I2, I3, I4, I5, I6, I7, I8, I9
        >::TypeT
    >,
    Details::ImplementsBase;

template <
    int flags,
    typename I0,
    typename I1,
    typename I2,
    typename I3,
    typename I4,
    typename I5,
    typename I6,
    typename I7,
    typename I8
>
struct __declspec(novtable) Implements<
        RuntimeClassFlags<flags>,
        I0, I1, I2, I3, I4, I5, I6, I7, I8> :
    Details::ImplementsHelper<
        RuntimeClassFlags<flags>,
        typename Details::InterfaceListHelper<
            I0, I1, I2, I3, I4, I5, I6, I7, I8
        >::TypeT
    >,
    Details::ImplementsBase;
```

### Parameters

*I0*<br/>
The zeroth interface ID. (Mandatory)

*I1*<br/>
The first interface ID. (Optional)

*I2*<br/>
The second interface ID. (Optional)

*I3*<br/>
The third interface ID. (Optional)

*I4*<br/>
The fourth interface ID. (Optional)

*I5*<br/>
The fifth interface ID. (Optional)

*I6*<br/>
The sixth interface ID. (Optional)

*I7*<br/>
The seventh interface ID. (Optional)

*I8*<br/>
The eighth interface ID. (Optional)

*I9*<br/>
The ninth interface ID. (Optional)

*flags*<br/>
Configuration flags for the class. One or more [RuntimeClassType](runtimeclasstype-enumeration.md) enumerations that are specified in a [RuntimeClassFlags](runtimeclassflags-structure.md) structure.

## Remarks

Derives from the list of specified interfaces and implements helper templates for `QueryInterface` and `GetIid`.

Each *I0* through *I9* interface parameter must derive from either `IUnknown`, `IInspectable`, or the [ChainInterfaces](chaininterfaces-structure.md) template. The *flags* parameter determines whether support is generated for `IUnknown` or `IInspectable`.

## Members

### Public Typedefs

| Name        | Description                               |
| ----------- | ----------------------------------------- |
| `ClassFlags`| A synonym for `RuntimeClassFlags<WinRt>`. |

### Protected Methods

| Name                                              | Description                                                                                                   |
| ------------------------------------------------- | ------------------------------------------------------------------------------------------------------------- |
| [Implements::CanCastTo](#cancastto)               | Gets a pointer to the specified interface.                                                                    |
| [Implements::CastToUnknown](#casttounknown)       | Gets a pointer to the underlying `IUnknown` interface.                                                        |
| [Implements::FillArrayWithIid](#fillarraywithiid) | Inserts the interface ID specified by the current zeroth template parameter into the specified array element. |

### Protected Constants

| Name                              | Description                                    |
| --------------------------------- | ---------------------------------------------- |
| [Implements::IidCount](#iidcount) | Holds the number of implemented interface IDs. |

## Inheritance Hierarchy

`I0`

`ChainInterfaces`

`I0`

`ImplementsBase`

`ImplementsHelper`

`Implements`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## <a name="cancastto"></a> Implements::CanCastTo

Gets a pointer to the specified interface.

```cpp
__forceinline HRESULT CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### Parameters

*riid*<br/>
A reference to an interface ID.

*ppv*<br/>
If successful, a pointer to the interface specified by *riid*.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error, such as E_NOINTERFACE.

### Remarks

This is an internal helper function that performs a QueryInterface operation.

## <a name="casttounknown"></a> Implements::CastToUnknown

Gets a pointer to the underlying `IUnknown` interface.

```cpp
__forceinline IUnknown* CastToUnknown();
```

### Return Value

This operation always succeeds and returns the `IUnknown` pointer.

### Remarks

Internal helper function.

## <a name="fillarraywithiid"></a> Implements::FillArrayWithIid

Inserts the interface ID specified by the current zeroth template parameter into the specified array element.

```cpp
__forceinline static void FillArrayWithIid(
   unsigned long &index,
   _In_ IID* iids
);
```

### Parameters

*index*<br/>
A zero-based index that indicates the starting array element for this operation. When this operation completes, *index* is incremented by 1.

*iids*<br/>
An array of type IID.

### Remarks

Internal helper function.

## <a name="iidcount"></a> Implements::IidCount

Holds the number of implemented interface IDs.

```cpp
static const unsigned long IidCount;
```
