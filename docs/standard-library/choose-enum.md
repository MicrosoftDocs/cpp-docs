---
title: "choose enum"
description: "enum used to specify how to handle ambiguous or nonexistent local times when resolving a time in a time zone"
ms.date: 10/08/2021
f1_keywords: ["chrono/std::chrono::choose"]
helpviewer_keywords: ["std::chrono [C++], choose"]
dev_langs: ["C++"]
---

# `choose` enum

Used with [`time_zone`](time-zone-class.md) and [`zoned_time`](zoned-time-class.md) to indicate how to handle an ambiguous or nonexistent `local_time` to `sys_time` conversion.

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
| `earliest` | If a time conversion is ambiguous, uses the earlier time point. |
| `latest` | If a time conversion is ambiguous, uses the later time point.  |

## Remarks

If the result of the conversion is a `nonexistent_local_time`, the time in `earliest` and `latest` are the same.

**Ambiguous conversion error**

During the transition from daylight saving time to standard time in the fall, clocks essentially gain an extra hour. This can be confusing because doesn't the transition to standard time mean losing an hour? By falling back an hour, the hour before the transition will be repeated after the clock adjusts for standard time. Consider the change to standard time in New York, which happens on the first Sunday in November at 2:00am. First, 1:00am goes by. At 2am, the clock transitions to standard time, so now it's 1:00am again. That means the time between 1am and 2am will be "repeated", effectively adding an hour.

If a `local_time` specifies a time during this "extra" hour, it isn't clear how to convert it. Should the converted time be treated as the "first" time that hour happens, or the "second"? If the enum [`choose`](choose-enum.md) isn't specified to indicate which it should be, you'll get an `ambiguous_local_time` exception.

**Nonexistent conversion error**

When converting from standard time to daylight saving time, a different problem can arise. During the transition from standard time to daylight saving time in the spring, clocks move ahead an hour. The skipped hour disappears, so even though it appears we've added an hour to the time, by "springing forward" an hour, the hour following the transition is effectively removed.

Consider the change to daylight saving time in New York, which happens on the second Sunday in March at 2am. At 2am, the clock transitions to daylight savings time and now reads 3:00am. If the `local_time` being converted is 2:30am, for example, that time is during the period that was "removed" and so is "nonexistent", resulting in a [`nonexistent_local_time`](nonexistent-local-time.md#example-nonexistent_local_time) exception.

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

Compiler option:[`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) is required.

## See also

[`to_sys`](time-zone-class.md#std-chrono-time-zone-to-sys)\
[`zoned_time` constructor](zoned-time-class.md#ctor)