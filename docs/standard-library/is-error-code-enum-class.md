---
description: "Learn more about: is_error_code_enum Class"
title: "is_error_code_enum Class"
ms.date: "11/04/2016"
f1_keywords: ["system_error/std::is_error_code_enum"]
helpviewer_keywords: ["is_error_code_enum class"]
ms.assetid: cee5be2d-7c20-4cec-a352-1ab8b7d32601
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

## See also

[<type_traits>](../standard-library/type-traits.md)
