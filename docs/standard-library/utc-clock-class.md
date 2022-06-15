---
description: "Learn more about: utc_clock class"
title: "utc_clock class"
ms.date: 07/27/2021
f1_keywords: ["chrono/std::chrono::utc_clock", "chrono/std::chrono::utc_clock::now", "chrono/std::chrono::utc_clock::to_sys", "chrono/std::chrono::utc_clock::from_sys", "chrono/std::chrono::utc_clock::is_steady Constant"]
helpviewer_keywords: ["std::chrono [C++], utc_clock"]
dev_langs: ["C++"]
---

# `utc_clock` class

A clock for Coordinated Universal Time (UTC) which is sometimes popularly referred to as Greenwich Mean Time (GMT) or Zulu time. Local time is adjusted from UTC time depending on your time zone.

## Syntax

```cpp
class utc_clock; // C++20
```

## Remarks

This clock measures time since 00:00:00 UTC on Thursday, January 1, 1970. This clock accounts for leap seconds and is the basis for civil time around the world.

The rate of UTC time is based on International Atomic Time (TAI) which uses atomic clocks to track time. However, a leap second is occasionally added to UTC time to keep the difference between UTC time and UT1 (solar time) within +- 0.9 seconds.

There's a discrepancy between the time kept by atomic clocks, and the time kept by tracking the rotation of the earth. That's because the earth's rotation speed is irregular, and in general is slowing down over time by about one second every 1.5 years (although sometimes the earth's rotation speed increases). A leap second adjustment keeps UTC tracking time within a second of the average length of a day.

As of this writing, 27 leap seconds have been added since the practice of inserting leap seconds began in 1972. The International Earth Rotation and Reference Systems Service (IERS) determines when a leap second will be added. Adding a leap second is referred to as a "leap second insertion". When a leap second is inserted, the time, as it nears midnight, proceeds from 23 hours 59 minutes 59 seconds to 23 hours 59 minutes 60 seconds (the inserted leap second), and then to 0 hours 0 minutes 0 seconds (midnight). Historically, leap seconds have been added on June 30 or December 31.

UTC time, by definition, starts out 10 seconds behind TAI (atomic time). 10 seconds were added in 1972 to TAI time to accommodate for the leap seconds that had accumulated by that point. Given the insertion of another 27 leap seconds since then, UTC time is currently 37 seconds behind TAI (atomic clock) time.

## Members

|Name|Description|
|----------|-----------------|
|[`from_sys`](#from_sys)| Static. Converts a `sys_time` to a `utc_time`.|
|[`now`](#now)| Static. Returns the current time.|
|[`to_sys`](#to_sys)| Static. Converts a `utc_time` to a `sys_time`.|

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `utc_time` from the given stream using the specified format. |
| [`get_leap_second_info`](chrono-functions.md#std-chrono-get-leap-second-info) | Gets a [leap_second_info](leap-second-info-struct.md) that indicates whether the supplied time specifies a time when a leap second was inserted. It also includes  the sum of all the leap seconds between January 1, 1970 and the specified duration. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output  a `utc_time` to the given stream. |

## Convenience type aliases

|Name|Description|
|----------|-----------------|
|`utc_clock::duration`|In Microsoft's implementation, it's a synonym for `duration<system_clock::rep, system_clock::period>`. It represents a duration of time measured in units of 100 nanoseconds.|
|`utc_clock::period`|Microsoft's implementation defines this as a synonym for `system_clock::period`. It represents the time in seconds (100 nanoseconds) between each tick in the duration.|
|`utc_clock::rep`|A synonym for the type (`long long`) used to represent the integral units in this clock's `utc_clock::duration`.|
|`utc_clock::time_point`|A synonym for `time_point<utc_clock>`. Used to represent a [`time_point`](time-point-class.md) for this clock.|

**Related**

|Name|Description|
|----------|-----------------|
|`utc_seconds`| A synonym for `using utc_seconds = utc_time<seconds>;`|
|`utc_time`|A synonym for `template<class Duration> using utc_time = time_point<utc_clock, Duration>;`Represents a [`time_point`](time-point-class.md) for a `utc_clock`. You specify the duration. Defined in `std::chrono`|

## Public Constants

|Name|Description|
|----------|-----------------|
|[`utc_clock::is_steady constant]`(#is_steady_constant)|Indicates whether the clock type is steady. Its value is `false`.|

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="from_sys"></a> `from_sys`

Static method that converts a `sys_time` to a `utc_time`.

```cpp
template<class Duration>
static utc_time<common_type_t<Duration, seconds>>
from_sys(const sys_time<Duration>& t);
```

### Parameters

*`t`*\
The `sys_time` to convert.

### Return value

A `utc_time` set to the time that most closely approximates the `sys_time` *`t`*. If a direct mapping doesn't exist, the time_point during a leap second insertion and the last representable value of `sys_time` before the insertion of the leap second, is returned.

## <a name="to_sys"></a> `to_sys`

Static method that converts a `utc_time` to a `sys_time`.

```cpp
template<class Duration>
static sys_time<common_type_t<Duration, seconds>>
to_sys(const utc_time<Duration>& t);
```

### Parameters

*`t`*\
The `utc_time` to convert.

### Return Value

The `sys_time` set to the equivalent point in time as `t`. If a direct mapping doesn't exist, it's the last representable value before the insertion of a leap second in the case that `t` represents a point in time when a leap second was inserted. Adding a leap second is referred to as a "leap second insertion". When a leap second is inserted, the time as it nears midnight proceeds from 23 hours 59 minutes 59 seconds to 23 hours 59 minutes 60 seconds (the inserted leap second), and then to 0 hours 0 minutes 0 seconds (midnight). In the past, leap seconds have been added either on June 30 or December 31.

## <a name="is_steady_constant"></a> `is_steady`

Static value that specifies whether the clock type is *steady*. In Microsoft's implementation, `is_steady_constant` is **`false`**. Because the `utc_clock` isn't steady, you can't reliably use this clock to take the time before an event, the time after an event, and subtract them to get the duration of the event because the clock may be adjusted during that time.

```cpp
static const bool is_steady = false;
```

## <a name="now"></a> `now`

Static method that returns the current UTC time. The returned time includes leap seconds.

```cpp
static time_point now() noexcept;
```

### Return Value

A [`time_point`](../standard-library/time-point-class.md) object that represents the current time. The returned time point is effectively `from_sys(system_clock::now())`.

## See also

[`<chrono>`](chrono.md)\
[`file_clock class`](file-clock-class.md)\
[`gps_clock class`](gps-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`local_t` struct](local_t.md)\
[`steady_clock` struct](steady-clock-struct.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
