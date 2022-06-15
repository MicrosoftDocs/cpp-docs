---
description: "Learn more about: system_clock Structure"
title: "system_clock Structure"
ms.date: 07/26/2021
f1_keywords: ["chrono/std::chrono::system_clock", "chrono/std::chrono::system_clock::from_time_t", "chrono/std::chrono::system_clock::now", "chrono/std::chrono::system_clock::to_time_t", "chrono/std::chrono::system_clock::is_steady constant"]
helpviewer_keywords: ["std::chrono [C++], system_clock"]
dev_langs: ["C++"]
---

# `system_clock` structure

A clock based on the system's real-time clock.

## Syntax

```cpp
struct system_clock;
```

## Remarks

This clock represents the system-wide wall clock.

The `system_clock` isn't *monotonic* or *steady*.

A clock is *monotonic* if the value that is returned by a first call to `now()` is always less than or equal to the value that is returned by a later call to `now()`. The `system_clock` isn't monotonic because the system time may be adjusted between calls to `now()`.

A clock is *steady* if it is *monotonic* and if the time between clock ticks is constant. Because the `system_clock` isn't monotonic, it isn't steady, although the time between clock ticks is constant. You can only use a steady clock to take the time before an event, the time after an event, and reliably subtract them to get the duration of the event because a steady clock won't be adjusted during that time.

## Members

### Convenience type aliases

|Name|Description|
|----------|-----------------|
|`system_clock::duration`|In Microsoft's implementation, it's a synonym for `duration<long long, ratio<1, 10'000'000>`. It represents a duration of time measured in units of 100 nanoseconds.|
|`system_clock::period`|In Microsoft's implementation, it's a synonym for `ratio<1, 10'000'000>`. Represents the time in fractions of a second (100 nanoseconds) between each tick in the duration.|
|`system_clock::rep`|A synonym for `long long`. It's the type used to represent the integral units in this clock's `system_clock::duration`.|
|`system_clock::time_point`|A synonym for `time_point<system_clock>`. Represents a [`time_point`](time-point-class.md) for this clock.|

**Related**

|Name|Description|
|-|-|
|`sys_days`|A synonym for `using sys_days = sys_time<days>`. A count of days, represented by a `time_point` that is associated with a [`system_clock`](system-clock-structure.md). Defined in `std::chrono`|
|`sys_seconds`|A synonym for `using sys_seconds = sys_time<seconds>`. A count of seconds, represented by a `time_point` that is associated with a [`system_clock`](system-clock-structure.md). Defined in `std::chrono`|
|`sys_time`|A synonym for `template <class Duration> using sys_time = time_point<system_clock, Duration>`. Represents a [`time_point`](time-point-class.md) for a `system_clock`. You specify the duration. Defined in `std::chrono`.|

### Public methods

|Name|Description|
|----------|-----------------|
|[`from_time_t`](#from_time_t)|Static. Returns a `time_point` for a `system_clock` that most closely approximates the specified `time_t`.|
|[`now`](#now)|Static. Returns the current time.|
|[`to_time_t`](#to_time_t)|Static. Returns a `time_t` object that most closely approximates the specified `time_point`.|

### Public constants

|Name|Description|
|----------|-----------------|
|[`system_clock::is_steady`](#is_steady_constant)|Indicates whether the clock type is steady. It's `false`|

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## <a name="from_time_t"></a>`from_time_t`

Static method that returns a [time_point](../standard-library/time-point-class.md) that most closely approximates the time that is represented by *Tm*.

```cpp
static time_point from_time_t(time_t Tm) noexcept;
```

### Parameters

*`Tm`*\
A [time_t](../c-runtime-library/standard-types.md) object.

## <a name="is_steady_constant"></a>`is_steady`

A static value that specifies whether the clock type is *steady*. Because the `system_clock` isn't steady, you can't use this clock to take the time before an event, the time after an event, and reliably subtract them to get the duration of the event because the clock may be adjusted during the timing interval.

```cpp
static const bool is_steady = false;
```

### Return Value

In this implementation, `system_clock::is_steady` always returns **`false`**.

### Remarks

A clock is *steady* if it is monotonic and if the time between clock ticks is constant. The `system_clock` isn't  monotonic because the value that is returned by a first call to `now()` isn't always less than or equal to the value that is returned by a later call to `now()` because the system time can be adjusted without notice.

## <a name="now"></a> `now`

Static method that returns the system's current wall-clock time.

```cpp
static time_point now() noexcept;
```

### Return Value

A [time_point](../standard-library/time-point-class.md) that represents the current time.

## <a name="to_time_t"></a> `to_time_t`

Static method that returns a [`time_t`](../c-runtime-library/standard-types.md) that most closely approximates the time that is represented by *Time*.

```cpp
static time_t to_time_t(const time_point& Time) noexcept;
```

### Parameters

*`Time`*\
A [`time_point`](../standard-library/time-point-class.md) object.

## See also

[`<chrono>`](chrono.md)\
[`file_clock class`](file-clock-class.md)\
[`high_resolution_clock`](high-resolution-clock-struct.md)\
[`steady_clock` struct](steady-clock-struct.md)\
[`tai_clock` class](tai-clock-class.md)\
[`utc_clock` class](utc-clock-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)