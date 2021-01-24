---
description: "Learn more about: system_clock Structure"
title: "system_clock Structure"
ms.date: "11/04/2016"
f1_keywords: ["chrono/std::chrono::system_clock", "chrono/std::chrono::system_clock::from_time_t", "chrono/std::chrono::system_clock::now", "chrono/std::chrono::system_clock::to_time_t", "chrono/std::chrono::system_clock::is_monotonic Constant", "chrono/std::chrono::system_clock::is_steady Constant"]
ms.assetid: a97bd46e-267a-4836-9f7d-af1f664e99ae
---
# system_clock Structure

Represents a *clock type* that is based on the real-time clock of the system.

## Syntax

```cpp
struct system_clock;
```

## Remarks

A *clock type* is used to obtain the current time as UTC. The type embodies an instantiation of [duration](../standard-library/duration-class.md) and the class template [time_point](../standard-library/time-point-class.md), and defines a static member function `now()` that returns the time.

A clock is *monotonic* if the value that is returned by a first call to `now()` is always less than or equal to the value that is returned by a subsequent call to `now()`.

A clock is *steady* if it is *monotonic* and if the time between clock ticks is constant.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`system_clock::duration`|A synonym for `duration<rep, period>`.|
|`system_clock::period`|A synonym for the type that is used to represent the tick period in the contained instantiation of `duration`.|
|`system_clock::rep`|A synonym for the type that is used to represent the number of clock ticks in the contained instantiation of `duration`.|
|`system_clock::time_point`|A synonym for `time_point<Clock, duration>`, where `Clock` is a synonym for either the clock type itself or another clock type that is based on the same epoch and has the same nested `duration` type.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[from_time_t](#from_time_t)|Static. Returns a `time_point` that most closely approximates a specified time.|
|[now](#now)|Static. Returns the current time.|
|[to_time_t](#to_time_t)|Static. Returns a `time_t` object that most closely approximates a specified `time_point`.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[system_clock::is_monotonic Constant](#is_monotonic_constant)|Specifies whether the clock type is monotonic.|
|[system_clock::is_steady Constant](#is_steady_constant)|Specifies whether the clock type is steady.|

## Requirements

**Header:** \<chrono>

**Namespace:** std::chrono

## <a name="from_time_t"></a> system_clock::from_time_t

Static method that returns a [time_point](../standard-library/time-point-class.md) that most closely approximates the time that is represented by *Tm*.

```cpp
static time_point from_time_t(time_t Tm) noexcept;
```

### Parameters

*Tm*\
A [time_t](../c-runtime-library/standard-types.md) object.

## <a name="is_monotonic_constant"></a> system_clock::is_monotonic Constant

Static value that specifies whether the clock type is monotonic.

```cpp
static const bool is_monotonic = false;
```

### Return Value

In this implementation, `system_clock::is_monotonic` always returns **`false`**.

### Remarks

A clock is *monotonic* if the value that is returned by a first call to `now()` is always less than or equal to the value that is returned by a subsequent call to `now()`.

## <a name="is_steady_constant"></a> system_clock::is_steady Constant

Static value that specifies whether the clock type is *steady*.

```cpp
static const bool is_steady = false;
```

### Return Value

In this implementation, `system_clock::is_steady` always returns **`false`**.

### Remarks

A clock is *steady* if it is [monotonic](#is_monotonic_constant) and if the time between clock ticks is constant.

## <a name="now"></a> system_clock::now

Static method that returns the current time.

```cpp
static time_point now() noexcept;
```

### Return Value

A [time_point](../standard-library/time-point-class.md) object that represents the current time.

## <a name="to_time_t"></a> system_clock::to_time_t

Static method that returns a [time_t](../c-runtime-library/standard-types.md) that most closely approximates the time that is represented by *Time*.

```cpp
static time_t to_time_t(const time_point& Time) noexcept;
```

### Parameters

*Time*\
A [time_point](../standard-library/time-point-class.md) object.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)\
[steady_clock struct](../standard-library/steady-clock-struct.md)
