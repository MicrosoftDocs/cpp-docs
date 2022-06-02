---
description: "Learn more about: leap_second_info struct"
title: "leap_second_info struct"
ms.date: 05/31/2022
f1_keywords: ["chrono/std::chrono::leap_second_info", "chrono/std::chrono::leap_second_info::is_leap_second", "chrono/std::chrono::leap_second_info::elapsed"]
helpviewer_keywords: ["std::chrono [C++], leap_second_info struct", "std::chrono::leap_second_info::date function", "std::chrono::leap_second_info::value function"]
---
# `leap_second_info` struct

Call [`get_leap_second_info`](./chrono-functions.md#std-chrono-get-leap-second-info) to get a `leap_second_info`. This type only has public data members. It doesn't have base classes or members other than the ones specified.

## Syntax

```cpp
struct leap_second_info; // C++20
```

## Public members

| Name | Description |
|--|--|
| `is_leap_second` | The `is_leap_second` member is **`true`** only if the specified time point occurs during the insertion of a positive leap second. |
| `elapsed` | The `elapsed` member holds the sum of all the leap seconds between the epoch date (the starting date from which the clock measures time) `1970-01-01`and the specified time. If `is_leap_second` is **`true`**, the leap second referred to by the specified time is included in the `elapsed` sum. |

## Requirements

**Header:** `<chrono>`

Microsoft C++ supports the `leap_second` class starting in Visual Studio 2019 version 16.10. The `leap_second` class is a C++20 feature. The [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) compiler option is required.

An international standards body specifies when new leap seconds should be accounted for. A database of these changes is available for Windows 10 version 1809 and later, and Windows Server 2019 and later.

**Namespace:** `std::chrono`

## See also

[`<chrono>`](./chrono.md)\
[`get_leap_second_info`](./chrono-functions.md#std-chrono-get-leap-second-info)\
[`leap_second` class](./leap-second-class.md)\
[Header files reference](./cpp-standard-library-header-files.md)
