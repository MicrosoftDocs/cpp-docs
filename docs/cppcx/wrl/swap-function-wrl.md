---
description: "Learn more about: Swap Function (WRL)"
title: "Swap Function (WRL)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::Swap"]
ms.assetid: ed134a08-ceb7-4279-aa02-a183c3a426ea
---
# Swap Function (WRL)

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
WRL_NOTHROW inline void Swap(
   _Inout_ T& left,
   _Inout_ T& right
);
```

### Parameters

*left*<br/>
The first argument.

*right*<br/>
The second argument.

## Return Value

## Remarks

Exchanges the values of the two specified arguments.

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL::Details Namespace](microsoft-wrl-details-namespace.md)
