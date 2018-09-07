---
title: "nothrow_t Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["nothrow_t"]
dev_langs: ["C++"]
helpviewer_keywords: ["nothrow_t class"]
ms.assetid: dc7d5d42-ed5a-4919-88fe-bbad519b7a1d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# nothrow_t Structure

The struct is used as a function parameter to operator new to indicate that the function should return a null pointer to report an allocation failure, rather than throw an exception.

## Syntax

```cpp
struct std::nothrow_t {};
```

## Remarks

The struct helps the compiler to select the correct version of the constructor. [nothrow](../standard-library/new-functions.md#nothrow) is a synonym for objects of type `std::nothrow_t`.

## Example

See [operator new](../standard-library/new-operators.md#op_new) and [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr) for examples of how `std::nothrow_t` is used as a function parameter.

## Requirements

**Header:** \<new>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
