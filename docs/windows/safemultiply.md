---
title: "SafeMultiply | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["SafeMultiply"]
dev_langs: ["C++"]
helpviewer_keywords: ["SafeMultiply function"]
ms.assetid: 81d988a5-fac7-4930-8c37-c24fa8e2c853
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SafeMultiply

Multiplies two numbers together in a way that protects against overflow.

## Syntax

```cpp
template<typename T, typename U>
inline bool SafeMultiply (
   T t,
   U u,
   T& result
) throw ();
```

### Parameters

*t*<br/>
[in] The first number to multiply. This must be of type `T`.

*u*<br/>
[in] The second number to multiply. This must be of type `U`.

*result*<br/>
[out] The parameter where **SafeMultiply** stores the result.

## Return Value

**true** if no error occurs; **false** if an error occurs.

## Remarks

This method is part of [SafeInt Library](../windows/safeint-library.md) and is designed for a single multiplication operation without creating an instance of the [SafeInt Class](../windows/safeint-class.md).

> [!NOTE]
> This method should only be used when a single mathematical operation must be protected. If there are multiple operations, you should use the `SafeInt` class instead of calling the individual stand-alone functions.

For more information about the template types `T` and `U`, see [SafeInt Functions](../windows/safeint-functions.md).

## Requirements

**Header:** safeint.h

**Namespace:** Microsoft::Utilities

## See Also

[SafeInt Functions](../windows/safeint-functions.md)  
[SafeInt Library](../windows/safeint-library.md)  
[SafeInt Class](../windows/safeint-class.md)  
[SafeDivide](../windows/safedivide.md)