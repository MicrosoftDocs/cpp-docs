---
description: "Learn more about: Make Function"
title: "Make Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Make"]
helpviewer_keywords: ["Make function"]
ms.assetid: 66704143-df99-4a95-904d-ed99607e1034
---
# Make Function

Initializes the specified Windows Runtime class. Use this function to instantiate a component that is defined in the same module.

## Syntax

```cpp
template <
   typename T,
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
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5,
   TArg6 &&arg6,
   TArg7 &&arg7,
   TArg8 &&arg8,
   TArg9 &&arg9
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6,
   typename TArg7,
   typename TArg8
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5,
   TArg6 &&arg6,
   TArg7 &&arg7,
   TArg8 &&arg8
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6,
   typename TArg7
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5,
   TArg6 &&arg6,
   TArg7 &&arg7
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5,
   TArg6 &&arg6
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3
);
template <
   typename T,
   typename TArg1,
   typename TArg2
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2
);
template <
   typename T,
   typename TArg1
>
ComPtr<T> Make(
   TArg1 &&arg1
);
template <
   typename T
>
ComPtr<T> Make();
```

### Parameters

*T*<br/>
A user-specified class that inherits from `WRL::RuntimeClass`.

*TArg1*<br/>
Type of argument 1 that is passed to the specified runtime class.

*TArg2*<br/>
Type of argument 2 that is passed to the specified runtime class.

*TArg3*<br/>
Type of argument 3 that is passed to the specified runtime class.

*TArg4*<br/>
Type of argument 4 that is passed to the specified runtime class.

*TArg5*<br/>
Type of argument 5 that is passed to the specified runtime class.

*TArg6*<br/>
Type of argument 6 that is passed to the specified runtime class.

*TArg7*<br/>
Type of argument 7 that is passed to the specified runtime class.

*TArg8*<br/>
Type of argument 8 that is passed to the specified runtime class.

*TArg9*<br/>
Type of argument 9 that is passed to the specified runtime class.

*arg1*<br/>
Argument 1 that is passed to the specified runtime class.

*arg2*<br/>
Argument 2 that is passed to the specified runtime class.

*arg3*<br/>
Argument 3 that is passed to the specified runtime class.

*arg4*<br/>
Argument 4 that is passed to the specified runtime class.

*arg5*<br/>
Argument 5 that is passed to the specified runtime class.

*arg6*<br/>
Argument 6 that is passed to the specified runtime class.

*arg7*<br/>
Argument 7 that is passed to the specified runtime class.

*arg8*<br/>
Argument 8 that is passed to the specified runtime class.

*arg9*<br/>
Argument 9 that is passed to the specified runtime class.

## Return Value

A `ComPtr<T>` object if successful; otherwise, **`nullptr`**.

## Remarks

See [How to: Instantiate WRL Components Directly](how-to-instantiate-wrl-components-directly.md) to learn the differences between this function and [Microsoft::WRL::Details::MakeAndInitialize](makeandinitialize-function.md), and for an example.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
