---
title: "is_error_condition_enum Class"
description: "Learn more about: is_error_condition_enum Class"
ms.date: "11/04/2016"
f1_keywords: ["system_error/std::is_error_condition_enum"]
helpviewer_keywords: ["is_error_condition_enum class"]
---
# is_error_condition_enum Class

Represents a type predicate that tests for the [error_condition](../standard-library/error-condition-class.md) enumeration.

## Syntax

```cpp
template <class _Enum>
struct is_error_condition_enum;
```

## Remarks

An instance of this [type predicate](../standard-library/type-traits.md) holds true if the type `_Enum` is an enumeration value suitable for storing in an object of type `error_condition`.

It is permissible to add specializations to this type for user-defined types.

## See also

[<type_traits>](../standard-library/type-traits.md)
