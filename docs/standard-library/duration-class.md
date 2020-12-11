---
description: "Learn more about: duration Class"
title: "duration Class"
ms.date: "03/27/2016"
f1_keywords: ["chrono/std::chrono::duration", "chrono/std::chrono::duration::duration", "chrono/std::chrono::duration::count", "chrono/std::chrono::duration::max", "chrono/std::chrono::duration::min", "chrono/std::chrono::duration::zero"]
ms.assetid: 06b863b3-65be-4ded-a72e-6e1eb1531077
helpviewer_keywords: ["std::chrono [C++], duration"]
---
# duration Class

Describes a type that holds a *time interval*, which is an elapsed time between two time points.

## Syntax

```cpp
template <class Rep, class Period = ratio<1>>
class duration;
template <class Rep, class Period>
class duration;
template <class Rep, class Period1, class Period2>
class duration <duration<Rep, Period1>, Period2>;
```

## Remarks

The template argument `Rep` describes the type that is used to hold the number of clock ticks in the interval. The template argument `Period` is an instantiation of [ratio](../standard-library/ratio.md) that describes the size of the interval that each tick represents.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|duration::period Typedef|Represents a synonym for the template parameter `Period`.|
|duration::rep Typedef|Represents a synonym for the template parameter `Rep`.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[duration](#duration)|Constructs a `duration` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[count](#count)|Returns the number of clock ticks in the time interval.|
|[max](#max)|Static. Returns the maximum allowable value of template parameter `Ref`.|
|[min](#min)|Static. Returns the lowest allowable value of template parameter `Ref`.|
|[zero](#zero)|Static. In effect, returns `Rep`(0).|

### Public Operators

|Name|Description|
|----------|-----------------|
|[duration::operator-](#operator-)|Returns a copy of the `duration` object together with a negated tick count.|
|[duration::operator--](#operator--)|Decrements the stored tick count.|
|[duration::operator=](#op_eq)|Reduces the stored tick count modulo a specified value.|
|[duration::operator*=](#op_star_eq)|Multiplies the stored tick count by a specified value.|
|[duration::operator/=](#op_div_eq)|Divides the stored tick count by the tick count of a specified `duration` object.|
|[duration::operator+](#op_add)|Returns **`*this`**.|
|[duration::operator++](#op_add_add)|Increments the stored tick count.|
|[duration::operator+=](#op_add_eq)|Adds the tick count of a specified `duration` object to the stored tick count.|
|[duration::operator-=](#operator-_eq)|Subtracts the tick count of a specified `duration` object from the stored tick count.|

## Requirements

**Header:** \<chrono>

**Namespace:** std::chrono

## <a name="count"></a> duration::count

Retrieves the number of clock ticks in the time interval.

```cpp
constexpr Rep count() const;
```

### Return Value

The number of clock ticks in the time interval.

## <a name="duration"></a> duration::duration Constructor

Constructs a `duration` object.

```cpp
constexpr duration() = default;

template <class Rep2>
constexpr explicit duration(const Rep2& R);

template <class Rep2, class Period2>
constexpr duration(const duration<Rep2, Period2>& Dur);
```

### Parameters

*Rep2*\
An arithmetic type to represent the number of ticks.

*Period2*\
A `std::ratio` template specialization to represent the tick period in units of seconds.

*R*\
The number of ticks of default period.

*Dur*\
The number of ticks of period specified by *Period2*.

### Remarks

The default constructor constructs an object that is uninitialized. Value initialization by using empty braces initializes an object that represents a time interval of zero clock ticks.

The second, one template argument constructor constructs an object that represents a time interval of *R* clock ticks using a default period of `std::ratio<1>`. To avoid round-off of tick counts, it is an error to construct a duration object from a representation type *Rep2* that can be treated as a floating-point type when `duration::rep` cannot be treated as a floating-point type.

The third, two template argument constructor constructs an object that represents a time interval whose length is the time interval that is specified by *Dur*. To avoid truncation of tick counts, it is an error to construct a duration object from another duration object whose type is *incommensurable* with the target type.

A duration type `D1` is *incommensurable* with another duration type `D2` if `D2` cannot be treated as a floating-point type and [ratio_divide\<D1::period, D2::period>::type::den](../standard-library/ratio.md) is not 1.

Unless *Rep2* is implicitly convertible to `rep` and either `treat_as_floating_point<rep>`*holds true* or `treat_as_floating_point<Rep2>`*holds false*, the second constructor does not participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

Unless no overflow is induced in the conversion and `treat_as_floating_point<rep>`*holds true*,  or both `ratio_divide<Period2, period>::den` equals 1 and `treat_as_floating_point<Rep2>`*holds false*, the third constructor does not participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

## <a name="max"></a> duration::max

Static method that returns the upper bound for values of template parameter type `Ref`.

```cpp
static constexpr duration max();
```

### Return Value

In effect, returns `duration(duration_values<rep>::max())`.

## <a name="min"></a> duration::min

Static method that returns the lower bound for values of template parameter type `Ref`.

```cpp
static constexpr duration min();
```

### Return Value

In effect, returns `duration(duration_values<rep>::min())`.

## <a name="operator-"></a> duration::operator-

Returns a copy of the `duration` object together with a negated tick count.

```cpp
constexpr duration operator-() const;
```

## <a name="operator--"></a> duration::operator--

Decrements the stored tick count.

```cpp
duration& operator--();

duration operator--(int);
```

### Return Value

The first method returns **`*this`**.

The second method returns a copy of **`*this`** that is made before the decrement.

## <a name="op_eq"></a> duration::operator=

Reduces the stored tick count modulo a specified value.

```cpp
duration& operator%=(const rep& Div);

duration& operator%=(const duration& Div);
```

### Parameters

*Div*\
For the first method, *Div* represents a tick count. For the second method, *Div* is a `duration` object that contains a tick count.

### Return Value

The `duration` object after the modulo operation is performed.

## <a name="op_star_eq"></a> duration::operator*=

Multiplies the stored tick count by a specified value.

```cpp
duration& operator*=(const rep& Mult);
```

### Parameters

*Mult*\
A value of the type that is specified by `duration::rep`.

### Return Value

The `duration` object after the multiplication is performed.

## <a name="op_div_eq"></a> duration::operator/=

Divides the stored tick count by a specified value.

```cpp
duration& operator/=(const rep& Div);
```

### Parameters

*Div*\
A value of the type that is specified by `duration::rep`.

### Return Value

The `duration` object after the division is performed.

## <a name="op_add"></a> duration::operator+

Returns **`*this`**.

```cpp
constexpr duration operator+() const;
```

## <a name="op_add_add"></a> duration::operator++

Increments the stored tick count.

```cpp
duration& operator++();

duration operator++(int);
```

### Return Value

The first method returns **`*this`**.

The second method returns a copy of **`*this`** that is made before the increment.

## <a name="op_add_eq"></a> duration::operator+=

Adds the tick count of a specified `duration` object to the stored tick count.

```cpp
duration& operator+=(const duration& Dur);
```

### Parameters

*Dur*\
A `duration` object.

### Return Value

The `duration` object after the addition is performed.

## <a name="operator-_eq"></a> duration::operator-=

Subtracts the tick count of a specified `duration` object from the stored tick count.

```cpp
duration& operator-=(const duration& Dur);
```

### Parameters

*Dur*\
A `duration` object.

### Return Value

The `duration` object after the subtraction is performed.

## <a name="zero"></a> duration::zero

Returns `duration(duration_values<rep>::zero())`.

```cpp
static constexpr duration zero();
```

## <a name="op_mod_eq"></a> duration::operator mod=

Reduces the stored tick count modulo Div or Div.count().

```cpp
duration& operator%=(const rep& Div);duration& operator%=(const duration& Div);
```

### Parameters

*Div*\
The divisor, which is either a duration object or a value that represents tick counts.

### Remarks

The first member function reduces the stored tick count modulo Div and returns *this. The second member function reduces the stored tick count modulo Div.count() and returns \*this.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)\
[duration_values Structure](../standard-library/duration-values-structure.md)
