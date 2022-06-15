---
description: "Learn more about: time_point Class"
title: "time_point Class"
ms.date: 01/05/2022
f1_keywords: ["chrono/std::chrono::time_point", "chrono/std::chrono::time_point::operator +=",  "chrono/std::chrono::time_point::operator -=", "chrono/std::chrono::time_point::max", "chrono/std::chrono::time_point::min", "chrono/std::chrono::time_point::time_since_epoch"]
helpviewer_keywords: ["std::chrono [C++], time_point"]
dev_langs: ["C++"]
---
# `time_point` class

A `time_point` represents a point in time that is relative to the epoch of a clock.

## Syntax

```cpp
template <class Clock, class Duration = typename Clock::duration>
class time_point;
```

## Remarks

The clock that supplies the reference point for the epoch is specified by the template argument `Clock`.

## Members

### Convenience type aliases

|Name|Description|
|----------|-----------------|
|`clock`|Synonym for the template parameter `Clock`.|
|`duration`|Synonym for the template parameter `Duration`.|
|`period`|Synonym for the nested type name `duration::period`.|
|`rep`|Synonym for the nested type name `duration::rep`.|

### Public constructors

|Name|Description|
|----------|-----------------|
|[`time_point`](#time_point)|Constructs a `time_point` object.|

### Public methods

|Name|Description|
|----------|-----------------|
|[`max`](#max)|Specifies the upper limit for `rep`.|
|[`min`](#min)|Specifies the lower limit for `rep`.|
|[`time_since_epoch`](#time_since_epoch)|Returns the amount of time between this `time_point` and the clock's epoch (or time and date that the clock starts measuring time).|

### Public operators

|Name|Description|
|----------|-----------------|
|[`operator+=`](#op_add_eq)|Adds a specified value to the stored duration.|
|[`operator-=`](#operator-_eq)|Subtracts a specified value from the stored duration.|

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## <a name="max"></a> `max`

Static method that returns the upper bound for values of type `rep`.

```cpp
static constexpr time_point max();
```

### Return value

In effect, returns `time_point(duration::max())`.

## <a name="min"></a> `min`

Static method that returns the lower bound for values of type `rep`.

```cpp
static constexpr time_point min();
```

### Return value

In effect, returns `time_point(duration::min())`.

## <a name="op_add_eq"></a> `operator+=`

Adds a specified value to the stored [`duration`](../standard-library/duration-class.md) value.

```cpp
time_point& operator+=(const duration& Dur);
```

### Parameters

*`Dur`*\
A `duration` object.

### Return value

The `time_point` object after the addition is done.

## <a name="operator-_eq"></a> `operator-=`

Subtracts a specified value from the stored [`duration`](../standard-library/duration-class.md) value.

```cpp
time_point& operator-=(const duration& Dur);
```

### Parameters

*`Dur`*\
A `duration` object.

### Return value

The `time_point` object after the subtraction is done.

## <a name="time_point"></a> `time_point` constructor

Constructs a `time_point` object.

```cpp
constexpr time_point();

constexpr explicit time_point(const duration& Dur);

template <class Duration2>
constexpr time_point(const time_point<clock, Duration2>& Tp);
```

### Parameters

*`Dur`*\
A [`duration`](../standard-library/duration-class.md) object.

*`Tp`*\
A `time_point` object.

### Remarks

The first constructor constructs an object whose stored `duration` value is equal to [`duration::zero`](../standard-library/duration-class.md#zero).

The second constructor constructs an object whose stored duration value is equal to *`Dur`*. Unless `is_convertible<Duration2, duration>` holds true, the second constructor doesn't participate in overload resolution. For more information, see [`<type_traits>`](../standard-library/type-traits.md).

The third constructor initializes its `duration` value by using `Tp.time_since_epoch()`.

## <a name="time_since_epoch"></a> time_since_epoch

Returns the amount of time between this `time_point` and the clock's epoch. (A clock's epoch is the time from which the clock starts measuring time, such as midnight 1/1/1970). It's returned as a [`duration`](../standard-library/duration-class.md) value.

```cpp
constexpr duration time_since_epoch() const;
```

## See also

[`<chrono>`](../standard-library/chrono.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
