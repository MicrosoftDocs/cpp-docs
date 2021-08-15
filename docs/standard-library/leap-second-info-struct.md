---
description: "Learn more about: leap_second_info struct"
title: "leap_second_info struct"
ms.date: 06/07/2021
f1_keywords: ["chrono/std::chrono::leap_second_info", "chrono/std::chrono::leap_second_info::is_leap_second", "chrono/std::chrono::leap_second_info::elapsed"]
helpviewer_keywords: ["std::chrono [C++], leap_second_info struct", "std::chrono::leap_second_info::date function", "std::chrono::leap_second_info::value function"]
---
# `leap_second_info` struct

A `leap_second_info` represents the result of a call to [`get_leap_second_info`](./chrono-functions.md#std-chrono-get-leap-second-info). The type `leap_second_info` only has public data members. It doesn't have base classes or members other than the ones specified.

Microsoft C++ supports the `leap_second_info` struct starting in Visual Studio 2019 version 16.10. The `leap_second_info` struct is a C++20 feature. The [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option is required.

## Syntax

```cpp
struct leap_second_info; // C++20
```

## Public members

| Name | Description |
|--|--|
| `is_leap_second` | The `is_leap_second` member is **`true`** only if the specified time point is during a positive leap second insertion. |
| `elapsed` | The `elapsed` member holds the sum of leap seconds between the epoch date `1970-01-01`and the specified time. If `is_leap_second` is **`true`**, the leap second referred to by the specified time is included in the `elapsed` sum. |

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## See also

[`<chrono>`](./chrono.md)\
[`get_leap_second_info`](./chrono-functions.md#std-chrono-get-leap-second-info)\
[`leap_second` class](./leap-second-class.md)\
[Header files reference](./cpp-standard-library-header-files.md)
