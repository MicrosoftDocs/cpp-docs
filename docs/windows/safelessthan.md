---
title: "SafeLessThan | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["SafeLessThan"]
dev_langs: ["C++"]
helpviewer_keywords: ["SafeLessThan function"]
ms.assetid: 9d85bc0d-8d94-4d59-9b72-ef3c63a120a0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SafeLessThan

Determines whether one number is less than another.

## Syntax

```cpp
template<typename T, typename U>
inline bool SafeLessThan (
   const T t,
   const U u
) throw ();
```

### Parameters

[in] *t*  
The first number. This must be of type `T`.

[in] *u*  
The second numer. This must be of type `U`.

## Return Value

**true** if *t* is less than *u*; otherwise **false**.

## Remarks

This method enhances the standard comparison operator because **SafeLessThan** enables you to compare two different types of number.

This method is part of [SafeInt Library](../windows/safeint-library.md) and is designed for a single comparison operation without creating an instance of the [SafeInt Class](../windows/safeint-class.md).

> [!NOTE]
> This method should only be used when a single mathematical operation must be protected. If there are multiple operations, you should use the `SafeInt` class rather than calling the individual stand-alone functions.

For more information about the template types `T` and `U`, see [SafeInt Functions](../windows/safeint-functions.md).

## Requirements

**Header:** safeint.h

**Namespace:** Microsoft::Utilities

## See Also

[SafeInt Functions](../windows/safeint-functions.md)  
[SafeInt Library](../windows/safeint-library.md)  
[SafeInt Class](../windows/safeint-class.md)  
[SafeLessThanEquals](../windows/safelessthanequals.md)  
[SafeGreaterThan](../windows/safegreaterthan.md)  
[SafeGreaterThanEquals](../windows/safegreaterthanequals.md)