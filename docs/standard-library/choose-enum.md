---
title: "choose enum"
description: "enum used to specify how to handle ambiguous or nonexistent local times when resolving a time in a time zone"
ms.date: 09/29/2021
f1_keywords: ["chrono/std::choose"]
helpviewer_keywords: ["std::choose"]
---

# `choose` enum

Used with [`time_zone`](time-zone-class.md) and [`zoned_time`](zoned-time-class.md) to indicate how to handle ambiguous or nonexistent `local_time` to `sys_time` conversions.

If a `local_time` lands during the gap between standard and daylight saving time, converting it to a `sys_time` results in two potential times that the `local_time` could be converted to, or it may be that the converted time corresponds to a time that doesn't exist.

For example, if the `local_time` is on the transition to daylight saving time, then the clock is "springing forward" an hour, so there’s an hour that doesn’t exist. If the `local_time` is on a transition to standard time, that is, the clock is "falling back", then there’s an extra hour that's being inserted.

In either case, if the `local_time` is during that hour, should it take on the value of the hour it is in or the adjusted time? This enum specifies which to choose.

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

[`time_zone::to_sys`](time-zone-class.md#std-chrono-time-zone-to-sys)\
[`zoned_time` constructor](zoned-time-class.md#ctor)