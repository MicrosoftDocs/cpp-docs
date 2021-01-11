---
description: "Learn more about: time_point Class"
title: "time_point Class"
ms.date: "03/27/2019"
f1_keywords: ["chrono/std::chrono::time_point", "chrono/std::chrono::time_point::time_point", "chrono/std::chrono::time_point::max", "chrono/std::chrono::time_point::min", "chrono/std::chrono::time_point::time_since_epoch"]
ms.assetid: 18be1e52-57b9-489a-8a9b-f58894f0aaad
helpviewer_keywords: ["std::chrono [C++], time_point"]
---
# time_point Class

A `time_point` describes a type that represents a point in time. It holds an object of type [duration](../standard-library/duration-class.md) that stores the elapsed time since the epoch that is represented by the template argument `Clock`.

## Syntax

```cpp
template <class Clock,
    class Duration = typename Clock::duration>
class time_point;
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`time_point::clock`|Synonym for the template parameter `Clock`.|
|`time_point::duration`|Synonym for the template parameter `Duration`.|
|`time_point::period`|Synonym for the nested type name `duration::period`.|
|`time_point::rep`|Synonym for the nested type name `duration::rep`.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[time_point](#time_point)|Constructs a `time_point` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[max](#max)|Specifies the upper limit for `time_point::ref`.|
|[min](#min)|Specifies the lower limit for `time_point::ref`.|
|[time_since_epoch](#time_since_epoch)|Returns the stored `duration` value.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[time_point::operator+=](#op_add_eq)|Adds a specified value to the stored duration.|
|[time_point::operator-=](#operator-_eq)|Subtracts a specified value from the stored duration.|

## Requirements

**Header:** \<chrono>

**Namespace:** std::chrono

## <a name="max"></a> time_point::max

Static method that returns the upper bound for values of type `time_point::ref`.

```cpp
static constexpr time_point max();
```

### Return Value

In effect, returns `time_point(duration::max())`.

## <a name="min"></a> time_point::min

Static method that returns the lower bound for values of type `time_point::ref`.

```cpp
static constexpr time_point min();
```

### Return Value

In effect, returns `time_point(duration::min())`.

## <a name="op_add_eq"></a> time_point::operator+=

Adds a specified value to the stored [duration](../standard-library/duration-class.md) value.

```cpp
time_point& operator+=(const duration& Dur);
```

### Parameters

*Dur*\
A `duration` object.

### Return Value

The `time_point` object after the addition is performed.

## <a name="operator-_eq"></a> time_point::operator-=

Subtracts a specified value from the stored [duration](../standard-library/duration-class.md) value.

```cpp
time_point& operator-=(const duration& Dur);
```

### Parameters

*Dur*\
A `duration` object.

### Return Value

The `time_point` object after the subtraction is performed.

## <a name="time_point"></a> time_point::time_point Constructor

Constructs a `time_point` object.

```cpp
constexpr time_point();

constexpr explicit time_point(const duration& Dur);

template <class Duration2>
constexpr time_point(const time_point<clock, Duration2>& Tp);
```

### Parameters

*Dur*\
A [duration](../standard-library/duration-class.md) object.

*Tp*\
A `time_point` object.

### Remarks

The first constructor constructs an object whose stored `duration` value is equal to [duration::zero](../standard-library/duration-class.md#zero).

The second constructor constructs an object whose stored duration value is equal to *Dur*. Unless `is_convertible<Duration2, duration>` holds true, the second constructor does not participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

The third constructor initializes its `duration` value by using `Tp.time_since_epoch()`.

## <a name="time_since_epoch"></a> time_point::time_since_epoch

Retrieves the stored [duration](../standard-library/duration-class.md) value.

```cpp
constexpr duration time_since_epoch() const;
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)
