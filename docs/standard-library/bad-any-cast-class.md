---
description: "Learn more about the std::bad_any_cast class from the C++ Standard Library."
title: "bad_any_cast class"
ms.date: 09/20/2021
f1_keywords: ["any/std::bad_any_cast", "any/std::bad_any_cast::what"]
helpviewer_keywords: ["any/std::bad_any_cast", "any/std::bad_any_cast::what"]
no-loc: ["any", "std", "class", "what"]
---
# `bad_any_cast` class

Objects thrown by a failed [`any_cast`](any-functions.md#any_cast).

## Syntax

```cpp
class bad_any_cast ;
```

## Members

| Name | Description |
|--|--|
| [`what`](#what) | Returns the type. |

## <a name="what"></a> `bad_any_cast::what`

Returns the type.

```cpp
const char* what() const noexcept override;
```

## Requirements

**Header:** \<any>

**Namespace:** `std`

**Standard:** C++17 (Use at least **`/std:c++17`** to compile.)

## See also

[`<any>`](any.md)\
[`any` class](any-class.md)\
[`any_cast`](any-functions.md#any_cast)\
[`exception`](exception-class.md)
