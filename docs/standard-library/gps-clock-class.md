---
description: "Learn more about: gps_clock class"
title: "gps_clock class"
ms.date: 08/17/2021
f1_keywords: ["chrono/std::chrono::gps_clock", "chrono/std::chrono::gps_clock::now", "chrono/std::chrono::gps_clock::to_utc", "chrono/std::chrono::gps_clock::from_utc", "chrono/std::chrono::gps_clock::is_steady Constant"]
---

# gps_clock class

A clock for Global Positioning System (GPS) time.

## Syntax

```cpp
class gps_clock; // C++20
```

## Remarks

This clock measures time since Sunday, 6 January 1980 00:00:00 UTC.

This clock does not account for leap seconds. Whenever a leap second is added into UTC time, UTC falls another second behind GPS time.

GPS time is behind TAI time by 19 seconds because ten seconds was added to TAI time in 1972 to account for for the leap seconds that had accumulated to that point. And 9 more leap leap seconds were added to TAI time between 1970 and 1980. 

## Members

|Name|Description|
|----------|-----------------|
|[from_utc](#from_utc)| Static. Converts a `utc_time` to a `gps_time`.|
|[now](#now)| Static. Returns the current time.|
|[to_utc](#to_utc)| Static. Converts a `gps_time` to a `utc_time`.|

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `gps_time` from the given stream using the specified format. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output `gps_clock::now()` to the given stream. |

## Public typedefs

|Name|Description|
|----------|-----------------|
|`gps_clock::duration`|A synonym for `duration<rep, period>`, which represents a duration of time in user-defined units, and a fraction that represents the time in seconds between each integral value stored in the duration.|
|`gps_clock::period`|Microsoft's implementation defines this as a synonym for `system_clock::period`, which is a fraction that represents the time in seconds between two integral values in the representation. For example, a period of 1/1 means one second between ticks, 1/2 means 0.5 second between ticks, and so on.|
|`gps_clock::rep`|A synonym for the type used to represent the number of ticks in this clock's `gps_clock::duration`.|
|`gps_clock::time_point`|A synonym for `time_point<gps_clock>`.|

## Public Constants

|Name|Description|
|----------|-----------------|
|[gps_clock::is_steady constant](#is_steady_constant)|Indicates whether the clock type is steady.|

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="from_utc"></a> from_utc

Static method that converts a `utc_time` to a `gps_time`.

```cpp
template<class Duration>
static gps_time<common_type_t<Duration, seconds>>
from_utc(const utc_time<Duration>& t) noexcept;
```

### Parameters

*`t`*\
The `utc_time` to convert.

### Return value

A `gps_time` set to the same point in time as the `utc_time` *`t`*.  It is computed as `gps_time<common_type_t<Duration, seconds>>{t.time_since_epoch()} - 315964809s` where `315964809s == sys_days{1980y/January/Sunday[1]} - sys_days{1970y/January/1} + 9s`. Which is the number of seconds between the epochs of the `utc_clock` and the `gps_clock`.

## <a name="to_utc"></a> to_utc

Static method that converts a `gps_time` to a `utc_time`.

```cpp
template<class Duration>
static utc_time<common_type_t<Duration, seconds>>
to_utc(const gps_time<Duration>& t) noexcept;
```

### Parameters

*`t`*\
The `gps_time` to convert.

### Return Value

A `utc_time` set to the same point in time as the `gps_time`. Is is computed as `gps_time<common_type_t<Duration, seconds>>{t.time_since_epoch()} + 315964809s` where  `315964809s == sys_days{1980y/January/Sunday[1]} - sys_days{1970y/January/1} + 9s`. Which is the number of seconds between the epochs of the `utc_clock` and the `gps_clock`.

## <a name="is_steady_constant"></a> is_steady

Static value that specifies whether the clock type is *steady*. In Microsoft's implementation, `is_steady_constant` is always **`false`**. Because the `gps_clock` is not steady, you can't reliably use this clock to take the time before an event, the time after an event, and subtract them to get the duration of the event because the clock may be adjusted during that time.

```cpp
static const bool is_steady = system_clock::is_steady; // system_clock::is_steady equals false
```

## <a name="now"></a> now

Static method that returns the current UTC time.

```cpp
static time_point now() noexcept;
```

### Return Value

A [time_point](../standard-library/time-point-class.md) object that represents the current time. The returned time point is effectively `from_utc(utc_clock::now())`.

[`<chrono>`](chrono.md)\
[`file_clock class`](file-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`local_t` struct](local_t.md)\
[`steady_clock` struct](steady-clock-struct.md)\
[`system_clock` struct](system-clock-structure.md)\
[`tai_clock` class](tai-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
