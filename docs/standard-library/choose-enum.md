---
title: "choose enum"
description: "enum used to specify how to handle ambiguous or nonexistent local times when resolving a time in a time zone"
ms.date: 09/29/2021
f1_keywords: ["chrono/std::choose"]
helpviewer_keywords: ["std::choose"]
---

# `choose` enum

Used with [`time_zone`](time-zone-class.md) and [`zoned_time`](zoned-time-class.md) to indicate how to handle ambiguous or nonexistent local times when resolving a time in a time zone.

Given a `local_time` in a specific time zone, there are cases involving daylight savings time where converting it to a `sys_time` could result in two potential times that it could correspond to, or it could correspond to no time at all in that time zone.

For example, if the `local_time` is on a daylight saving transition that is "springing forward", there’s an hour that doesn’t exist. If the `local_time` that is being paired with a time zone is within that hour, expect a `nonexistent_local_time` error.

If the `local_time` is on a transition to standard time, that is, the clock is "falling back", there’s an extra hour that's being inserted. If the `local_time` is during that hour, should the corresponding time in the time zone be the "first" time that hour happens (which was 60 minutes before daylight savings took effect), or the "second" time that hour comes around again 60 minutes later? In this case, you'd expect an `ambiguous_local_time` error unless you indicated whether you wanted to get back the "first" or "second" time. This is what this enum specifies.

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