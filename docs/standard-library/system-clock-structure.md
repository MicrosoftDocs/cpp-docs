---
description: "Learn more about: system_clock Structure"
title: "system_clock Structure"
ms.date: 07/26/2021
f1_keywords: ["chrono/std::chrono::system_clock", "chrono/std::chrono::system_clock::from_time_t", "chrono/std::chrono::system_clock::now", "chrono/std::chrono::system_clock::to_time_t", "chrono/std::chrono::system_clock::is_steady Constant"]
---
# system_clock structure

A clock based on the real-time clock of the system.

## Syntax

```cpp
struct system_clock;
```

## Remarks

This clock represents the system-wide wall clock. 

A clock is *monotonic* if the value that is returned by a first call to `now()` is always less than or equal to the value that is returned by a subsequent call to `now()`. The `system_clock` is not monotonic because the system time can be adjusted without notice.

A clock is *steady* if it is *monotonic* and if the time between clock ticks is constant. Because the `system_clock` is not monotonic, it isn't steady, though the time between clock ticks is constant.

## Members

### Public typedefs

|Name|Description|
|----------|-----------------|
|`system_clock::duration`|A synonym for `duration<rep, period>` which is a duration of time specified by user-defined units (such as integer, floating point, and so on) and a fraction the represents the time in seconds between each integral value stored in the duration.|
|`system_clock::period`|A synonym for `system_clock::period`, which is a ratio that represents the number of ticks between two integral values in the representation. For example, a period of 1/1 means one second between ticks; 1/2 means 0.5 seconds between ticks, and so on. |
|`system_clock::rep`|A synonym for the type used to represent the number of clock ticks in this clock's `system_clock::duration`. For example, it could be an integer, floating point, user-defined class, and so on.|
|`system_clock::time_point`|A synonym for `time_point<Clock, duration>`, where `Clock` is a synonym for either the clock type itself or another clock type that is based on the same epoch and has the same nested `duration` type.|

### Public methods

|Name|Description|
|----------|-----------------|
|[from_time_t](#from_time_t)|Static. Returns a `time_point` that most closely approximates a specified time.|
|[now](#now)|Static. Returns the current time.|
|[to_time_t](#to_time_t)|Static. Returns a `time_t` object that most closely approximates a specified `time_point`.|

### Public constants

|Name|Description|
|----------|-----------------|
|[system_clock::is_steady](#is_steady_constant)|Specifies whether the clock type is steady. It is `false`|

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## <a name="from_time_t"></a>from_time_t

Static method that returns a [time_point](../standard-library/time-point-class.md) that most closely approximates the time that is represented by *Tm*.

```cpp
static time_point from_time_t(time_t Tm) noexcept;
```

### Parameters

*Tm*\
A [time_t](../c-runtime-library/standard-types.md) object.


## <a name="is_steady_constant"></a>is_steady

Static value that specifies whether the clock type is *steady*.

```cpp
static const bool is_steady = false;
```

### Return Value

In this implementation, `system_clock::is_steady` always returns **`false`**.

### Remarks

A clock is *steady* if it is and if the time between clock ticks is constant. The `system_clock` is not  monotonic because the value that is returned by a first call to `now()` is not always less than or equal to the value that is returned by a subsequent call to `now()` because the system time can be adjusted without notice.

## <a name="now"></a> now

Static method that returns the system's current wall clock time.

```cpp
static time_point now() noexcept;
```

### Return Value

A [time_point](../standard-library/time-point-class.md) object that represents the current time.

## <a name="to_time_t"></a> to_time_t

Static method that returns a [`time_t`](../c-runtime-library/standard-types.md) that most closely approximates the time that is represented by *Time*.

```cpp
static time_t to_time_t(const time_point& Time) noexcept;
```

### Parameters

*Time*\
A [time_point](../standard-library/time-point-class.md) object.

## See also

[`<chrono>`](../standard-library/chrono.md)\
[`steady_clock` struct](../standard-library/steady-clock-struct.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
