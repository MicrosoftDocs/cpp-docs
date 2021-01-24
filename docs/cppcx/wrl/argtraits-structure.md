---
description: "Learn more about: ArgTraits Structure"
title: "ArgTraits Structure"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::ArgTraits", "event/Microsoft::WRL::Details::ArgTraits::args"]
helpviewer_keywords: ["Microsoft::WRL::Details::ArgTraits structure", "Microsoft::WRL::Details::ArgTraits::args constant"]
ms.assetid: 58ae4115-c1bc-48c8-b01b-e60554841c30
---
# ArgTraits Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<typename TMemberFunction>
struct ArgTraits;

template<typename TDelegateInterface>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(void)>;

template<typename TDelegateInterface, typename TArg1>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1)>;

template<typename TDelegateInterface, typename TArg1, typename TArg2>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5,
    typename TArg6
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5, TArg6)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5,
    typename TArg6,
    typename TArg7
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5,
    typename TArg6,
    typename TArg7,
    typename TArg8
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8)>;

template<
    typename TDelegateInterface,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5,
    typename TArg6,
    typename TArg7,
    typename TArg8,
    typename TArg9
>
struct ArgTraits<
    HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)
             (TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8, TArg9)>;
```

### Parameters

*TMemberFunction*<br/>
Typename parameter for an ArgTraits structure that cannot match any `Invoke` method signature.

*TDelegateInterface*<br/>
A delegate interface.

*TArg1*<br/>
The type of the first argument of the `Invoke` method.

*TArg2*<br/>
The type of the second argument of the `Invoke` method.

*TArg3*<br/>
The type of the third argument of the `Invoke` method.

*TArg4*<br/>
The type of the fourth argument of the `Invoke` method.

*TArg5*<br/>
The type of the fifth argument of the `Invoke` method.

*TArg6*<br/>
The type of the sixth argument of the `Invoke` method.

*TArg7*<br/>
The type of the seventh argument of the `Invoke` method.

*TArg8*<br/>
The type of the eighth argument of the `Invoke` method.

*TArg9*<br/>
The type of the ninth argument of the `Invoke` method.

## Remarks

The `ArgTraits` structure declares a specified delegate interface and an anonymous member function that has a specified number of parameters.

## Members

### Public Typedefs

Name       | Description
---------- | ----------------------
`Arg1Type` | The typedef for TArg1.
`Arg2Type` | The typedef for TArg2.
`Arg3Type` | The typedef for TArg3.
`Arg4Type` | The typedef for TArg4.
`Arg5Type` | The typedef for TArg5.
`Arg6Type` | The typedef for TArg6.
`Arg7Type` | The typedef for TArg7.
`Arg8Type` | The typedef for TArg8.
`Arg9Type` | The typedef for TArg9.

### Public Constants

Name                     | Description
------------------------ | ---------------------------------------------------------------------------------------
[ArgTraits::args](#args) | Keeps count of the number of parameters on the `Invoke` method of a delegate interface.

## Inheritance Hierarchy

`ArgTraits`

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## <a name="args"></a> ArgTraits::args

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
static const int args = -1;
```

### Remarks

Keeps count of the number of parameters on the `Invoke` method of a delegate interface. When `args` equals -1, there can be no match for the `Invoke` method signature.
