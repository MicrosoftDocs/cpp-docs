---
description: "Learn more about: tai_clock class"
title: "tai_clock class"
ms.date: 08/19/2021
f1_keywords: ["chrono/std::chrono::tai_clock", "chrono/std::chrono::tai_clock::now", "chrono/std::chrono::tai_clock::to_utc", "chrono/std::chrono::tai_clock::from_utc", "chrono/std::chrono::tai_clock::is_steady Constant", "std::chrono::tai_clock::get_leap_second_info"]
helpviewer_keywords: ["std::chrono [C++], tai_clock"]
dev_langs: ["C++"]
---

# `tai_clock` class

This clock reports international atomic time since 00:00:00 on Thursday, January 1, 1958. This clock doesn't account for leap seconds.

## Syntax

```cpp
class tai_clock; // C++20
```

## Remarks

This clock reports International Atomic Time (TAI, from the French *temps atomique international*). International Atomic Time uses a weighted average of many atomic clocks to track time.

Time kept by the TAI clock is different from UTC time. The difference is that a leap second is occasionally added to UTC time to keep the difference between UTC time and UT1 (solar time) within +- 0.9 seconds of each other. A discrepancy gradually accrues between the time kept by an atomic clock and the time kept by measuring the rotation of the earth. A discrepancy accrues because the earth's rotation speed is irregular. It slows down over time by about one second every 1.5 years, thought it also sometimes speeds up. TAI time doesn't track this discrepancy. As of this writing, TAI time is 37 seconds ahead of UTC time. That's because of an initial difference of 10 seconds at the start of 1972, plus the leap seconds that have been inserted since 1972.

The clock's epoch, or the date and time from which it starts measuring time, is `1958-01-01 00:00:00`.

## Members

|Name|Description|
|----------|-----------------|
|[`from_utc`](#from_utc)| Static. Converts a `utc_time` to a `tai_time`.|
|[`now`](#now)| Static. Returns the current International Atomic Time. |
|[`to_utc`](#to_utc)| Static. Converts `tai_time` to `utc_time`.|

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `tai_clock` from the given stream using the specified format. |
| [`get_leap_second_info`](chrono-functions.md#std-chrono-get-leap-second-info) | Get information about whether the supplied time specifies a time when a leap second was inserted, and the sum of all the leap seconds between January 1, 1970 and the specified duration. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `tai_time` to the given stream. |

## Convenience type aliases

|Name|Description|
|----------|-----------------|
|`tai_clock::duration`|In Microsoft's implementation, it's a synonym for `duration<long long, ratio<1, 10'000'000>`. It represents a duration of time measured in units of 100 nanoseconds.|
|`tai_clock::period`| In Microsoft's implementation, it's a synonym for `ratio<1, 10'000'000>`. It represents the time in seconds (100 nanoseconds) between each tick in the duration.|
|`tai_clock::rep`|A synonym for the type (`long long`) used to represent the integral units in this clock's `tai_clock::duration`. |
|`tai_clock::time_point`|A synonym for `time_point<tai_clock>`. Used to represent a `time_point` for this clock.|

**Related**

|Name|Description|
|----------|-----------------|
|`tai_time`|A synonym for `template <class Duration> using tai_time = time_point<tai_clock, Duration>`. Represents a [`time_point`](time-point-class.md) for a `tai_clock`. You specify the `Duration`. Defined in `std::chrono`|
|`tai_seconds`|A synonym for `using tai_seconds = tai_time<seconds>` A count of seconds, represented by a `time_point` that is associated with a [`tai_clock`](tai-clock-class.md). Defined in `std::chrono`|

## Public constants

|Name|Description|
|----------|-----------------|
|[`tai_clock::is_steady constant`](#is_steady_constant)|Indicates whether the clock type is steady. Its value is `false`.|

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="from_utc"></a> `from_utc`

Static method that converts a `utc_time` to a `tai_time`.

```cpp
template <class Duration>
static tai_time<common_type_t<Duration, seconds>>
from_utc(const utc_time<Duration>& t) noexcept;
```

### Parameters

*`t`*\
The `utc_time` to convert.

### Return value

A `tai_time` that represents the equivalent `utc_time` as *`t`*. It's calculated by taking the time since the epoch of the UTC clock and adding `378691210s` where `378691210s == sys_days{1970y/January/1} - sys_days{1958y/January/1} + 10s`

## <a name="to_utc"></a> `to_utc`

Static method that converts a `tai_time` to a `utc_time`.

```cpp
template<class Duration>
static utc_time<common_type_t<Duration, seconds>>
to_utc(const tai_time<Duration>& t) noexcept;
```

### Parameters

*`t`*\
The `tai_time` to convert.

### Return Value

A `utc_time` that represents the equivalent `tai_time` as *`t`*. It's calculated as `utc_time<common_type_t<Duration, seconds>>{t.time_since_epoch()} - 378691210s` where `378691210s == sys_days{1970y/January/1} - sys_days{1958y/January/1} + 10s`

## <a name="is_steady_constant"></a> `is_steady`

Static value that specifies whether the clock type is *steady*. In the Microsoft implementation, `is_steady_constant` is **`false`**. Because `tai_clock` isn't steady, you can't use this clock to take the time before an event, the time after an event, and subtract them to get the duration of the event because the clock may be adjusted during that time.

```cpp
static const bool is_steady = false;
```

## <a name="now"></a> `now`

Static method that returns the current TAI time.

```cpp
static time_point now() noexcept;
```

### Return Value

A [`time_point`](../standard-library/time-point-class.md) object that represents the current time. The returned time point is effectively `from_utc(utc_clock::now())`.

## See also

[`<chrono>`](chrono.md)\
[`file_clock class`](file-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`local_t` struct](local_t.md)\
[`steady_clock` struct](steady-clock-struct.md)\
[`system_clock` struct](system-clock-structure.md)\
[`utc_clock` class](utc-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)