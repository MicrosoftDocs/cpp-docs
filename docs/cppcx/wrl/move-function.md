---
description: "Learn more about: Move Function"
title: "Move Function"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::Move"]
helpviewer_keywords: ["Move function"]
ms.assetid: c9525426-97e8-4d8c-9877-b689d8a0dc67
---
# Move Function

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<class T>
inline typename RemoveReference<T>::Type&& Move(
   _Inout_ T&& arg
);
```

### Parameters

*T*<br/>
The type of the argument.

*arg*<br/>
An argument to move.

## Return Value

Parameter *arg* after reference or rvalue-reference traits, if any, have been removed.

## Remarks

Moves the specified argument from one location to another.

For more information, see the **Move Semantics** section of [Rvalue Reference Declarator: &&](../../cpp/rvalue-reference-declarator-amp-amp.md).

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL::Details Namespace](microsoft-wrl-details-namespace.md)
