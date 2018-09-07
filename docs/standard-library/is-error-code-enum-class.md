---
title: "is_error_code_enum Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["system_error/std::is_error_code_enum"]
dev_langs: ["C++"]
helpviewer_keywords: ["is_error_code_enum class"]
ms.assetid: cee5be2d-7c20-4cec-a352-1ab8b7d32601
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# is_error_code_enum Class

Represents a type predicate that tests for the [error_code](../standard-library/error-code-class.md) enumeration.

## Syntax

```cpp
template <_Enum>
class is_error_code_enum;
```

## Remarks

An instance of this [type predicate](../standard-library/type-traits.md) holds true if the type `_Enum` is an enumeration value suitable for storing in an object of type `error_code`.

It is permissible to add specializations to this type for user-defined types.

## Requirements

**Header:** \<system_error>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[<system_error>](../standard-library/system-error.md)<br/>
