---
title: "choose enum"
description: "enum used to specify how to handle ambiguous or nonexistent local times when resolving a time in a time zone"
ms.date: 09/16/2021
f1_keywords: ["chrono/std::choose"]
helpviewer_keywords: ["std::choose"]
---

# `choose` enum

Used with [`time_zone`](time-zone-class.md) and [`zoned_time`](zoned-time-class.md) to indicate how to handle ambiguous or nonexistent local times when resolving a time in a time zone.

## Syntax

```cpp
enum class choose { // C++ 20
    earliest,
    latest
};
```

### Members

|Element|Description|
|-|-|
| `earliest` | If a time conversion in a time zone is ambiguous or nonexistent, uses the earlier time point. |
| `latest` | If a time conversion in a time zone is ambiguous or nonexistent, uses the later time point.  |

## Remarks

If a local time doesn't exist for the time zone, `earliest` and `latest` result in the same time point.
When `choose` isn't passed and an ambiguous or nonexistent time results, either the exception `std::chrono::ambiguous_local_time` or `std::chrono::nonexistent_local_time` is thrown, respectively.

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

Compiler option:[`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) is required.

## See also

[`time_zone`](time-zone-class.md)\
[`zoned_time`](zoned-time-class.md)