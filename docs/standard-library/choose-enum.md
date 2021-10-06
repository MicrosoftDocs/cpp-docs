---
title: "choose enum"
description: "enum used to specify how to handle ambiguous or nonexistent local times when resolving a time in a time zone"
ms.date: 09/29/2021
f1_keywords: ["chrono/std::choose"]
helpviewer_keywords: ["std::choose"]
---

# `choose` enum

Used with [`time_zone`](time-zone-class.md) and [`zoned_time`](zoned-time-class.md) to indicate how to handle ambiguous or nonexistent `local_time` to `sys_time` conversions.

During the transition between daylight saving time to standard time in the fall, clocks effectively gain an extra hour. This can be confusing because doesn't the transition to standard time mean losing an hour? By falling back an hour, the hour before the transition will be repeated after the clock adjusts for standard time. Consider the change to standard time in New York, which happens on the first Sunday in November at 2:00am. The clock notes that 1:00am goes by. At 2am, the clock transitions to standard time. Now it's 1:00am again. That means the time between 1am and 2am will be "repeated" now that the clock has adjusted, effectively adding an hour.

If a `local_time` specifies a time during this hour, it isn't clear how to convert it. Should the converted `sys_time` be treated as being in daylight saving or standard time? If the [`choose`](choose-enum.md) isn't specified to indicate which it should be, you'll get an `ambiguous_local_time` exception.

Interestingly, this problem doesn't exist when converting from standard time to daylight saving time. In that case, a different problem can arise. See [`nonexistent_local_time`](nonexistent-local-time) for details.

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