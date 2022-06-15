---
description: "Learn more about: duration class"
title: "duration Class"
ms.date: 01/05/2022
f1_keywords: ["chrono/std::chrono::duration", "chrono/std::chrono::duration::duration", "chrono/std::chrono::duration::count", "chrono/std::chrono::duration::max", "chrono/std::chrono::duration::min", "chrono/std::chrono::duration::zero","chrono/std::chrono::duration::operator-", "chrono/std::chrono::duration::operator--", "chrono/std::chrono::duration::operator%=", "chrono/std::chrono::duration::operator*=", "chrono/std::chrono::duration::operator+", "chrono/std::chrono::duration::operator++", "chrono/std::chrono::duration::operator+=", "chrono/std::chrono::duration::operator-=", "chrono/std::chrono::duration::operator="]
helpviewer_keywords: ["std::chrono [C++], duration"]
dev_langs: ["C++"]
---

# `duration` class

Measures a time span such as one minute, two hours, ten milliseconds, and so on.

A `duration` holds a *time interval*, which is the number of ticks over a time unit. For example, five minutes is five ticks, with each tick a minute apart. 42 seconds is 42 ticks, with each tick a second apart.

## Syntax

```cpp
template <class Rep, class Period> class duration;
template <class Rep, class Period = ratio<1>> class duration;
template <class Rep, class Period1, class Period2> class duration <duration<Rep, Period1>, Period2>;
```

## Remarks

The template argument `Rep` describes the type that is used to hold the number of clock ticks in the interval. The template argument `Period` is an instantiation of [`ratio`](ratio.md) that describes the size of the interval that each tick represents.

## Members

### Constructors

|Name|Description|
|----------|-----------------|
|[`duration`](#duration)|Constructs a `duration` object.|

### Functions

|Name|Description|
|----------|-----------------|
|[`count`](#count)|Returns the number of clock ticks in the time interval.|
|[`max`](#max)|Static. Returns the maximum allowable value of template parameter `Rep`.|
|[`min`](#min)|Static. Returns the lowest allowable value of template parameter `Rep`.|
|[`zero`](#zero)|Static. In effect, returns `Rep(0)`.|

### Operators

|Name|Description|
|----------|-----------------|
|[`duration::operator-`](#operator-)|Returns a copy of the `duration` object with a negated tick count.|
|[`duration::operator--`](#operator--)|Decrements the stored tick count.|
|[`duration::operator-=`](#operator-=)|Subtracts the tick count of a specified `duration` from the stored tick count.|
|[`duration::operator+`](#op_add)|Returns **`*this`**.|
|[`duration::operator++`](#op_++)|Increments the stored tick count.|
|[`duration::operator+=`](#op_+=)|Adds the tick count of a specified `duration` to the stored tick count.|
|[`duration::operator=`](#op_=)|Assigns one duration to another.|
|[`duration::operator*=`](#op_star_eq)|Multiplies the stored tick count by a specified value.|
|[`duration::operator/=`](#op_div_eq)|Divides the stored tick count by the tick count of a specified `duration` object.|
|[`duration::operator%=`](#op_%=)|Reduces the stored tick count modulo a specified value.|

## Non-members

### Function templates

|Name|Description|
|----------|-----------------|
|[`abs`](chrono-functions.md#std-chrono-abs-duration) | Returns the absolute value of the `duration`. |
|[`ceil`](chrono-functions.md#std-chrono-ceil-duration)|Returns the smallest representable `duration` that's greater than or equal to the specified `duration`.|
|[`duration_cast`](chrono-functions.md#std-chrono-duration-cast)|Casts a `duration` object to a specified target `duration` type.|
|[`floor`](chrono-functions.md#std-chrono-floor-duration)|Returns the greatest representable `duration` that's less than or equal to the specified `duration`.|
|[`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `duration` from the given stream using the specified format. |
|[`round`](chrono-functions.md#std-chrono-round-duration)|Rounds the specified `duration` to the nearest representable `duration` in the target type.|

### Operators

| Name | Description |
|--|--|
| [`operator+`](chrono-operators.md#op_add) | After converting the durations being added to their common type, returns a `duration` with a tick count equal to the sum of the converted tick counts. |
| [`operator-`](chrono-operators.md#op_minus) |After converting the durations being subtracted to their common type, returns a `duration` with a tick count equal to the number of ticks in the RHS `duration` subtracted from the number of ticks in the LHS `duration`. |
| [`operator*`](chrono-operators.md#op_star) | After converting the durations being multiplied to their common type, returns a `duration` with a tick count equal to the multiplication of the converted tick counts.|
| [`operator/`](chrono-operators.md#op_div) | After converting the durations being divided to their common type, returns a `duration` with a tick count equal to the division of the converted tick counts. |
| [`operator%`](chrono-operators.md#op_modulo) |After converting the `duration` and the divisor to their common type, returns a `duration` with a tick count equal to the remainder of the division. |
| [`operator==`](chrono-operators.md#op_eq_eq) | After converting the `duration` types being compared to their common type, determines if the number of ticks are equal. |
| [`operator!=`](chrono-operators.md#op_neq)  |Determine if `duration` isn't equal to another.|
| [`operator<`](chrono-operators.md#op_lt) | Determine if one `duration` is less than another. |
| [`operator<=`](chrono-operators.md#op_lt_eq) | Determine if one `duration` is less than or equal to another.|
| [`operator>`](chrono-operators.md#op_gt) |  Determine if one `duration` is greater than another. |
| [`operator>=`](chrono-operators.md#op_gt_eq) |  Determine if one `duration` is greater than or equal to another. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare one `duration` against another `duration`. The `>, >=, <=, <, !=` operators are synthesized by the compiler. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `duration` to the given stream. |

## Convenience type aliases

|Name|Description|
|----------|-----------------|
|`duration::period`|A synonym for the template parameter `Period`.|
|`duration::rep` |A synonym for the template parameter `Rep`.|

## Requirements

**Header:** `<chrono>`

**Namespace:** `std::chrono`

## <a name="count"></a> `duration::count`

Retrieves the number of clock ticks in the time interval.

```cpp
constexpr Rep count() const;
```

### Return value

The number of clock ticks in the time interval.

## <a name="duration"></a> `duration::duration` constructor

Constructs a `duration` object.

```cpp
1) constexpr duration() = default;
2) constexpr duration(const duration& d) = default;

3) template <class Rep2>
constexpr explicit duration(const Rep2& R);

4) template <class Rep2, class Period2>
constexpr duration(const duration<Rep2, Period2>& Dur);
```

### Parameters

*`Dur`*\
The number of ticks of period specified by *`Period2`*.

*`Period2`*\
A `std::ratio` template specialization to represent the tick period in units of seconds.

*`R`*\
The number of ticks of default period.

*`Rep2`*\
An arithmetic type to represent the number of ticks.

### Remarks

1\) The default constructor constructs an object that is uninitialized. Value initialization by using empty braces initializes an object that represents a time interval of zero clock ticks.

2\) The copy constructor makes a bitwise copy of `d`.

3\) Constructs an object that represents a time interval of *`R`* clock ticks using a default period of `std::ratio<1>`. To avoid round-off of tick counts, it's an error to construct a duration object from a representation type *`Rep2`* that can be treated as a floating-point type when `duration::rep` cannot be treated as a floating-point type.

4\) Constructs an object that represents a time interval whose length is the time interval that is specified by *`Dur`*. To avoid truncation of tick counts, it's an error to construct a duration object from another duration object whose type is *incommensurable* with the target type.

A duration type `D1` is *incommensurable* with another duration type `D2` if `D2` cannot be treated as a floating-point type and [ratio_divide\<D1::period, D2::period>::type::den](ratio.md) isn't 1.

Unless *`Rep2`* is implicitly convertible to `rep` and either `treat_as_floating_point<rep>`*holds true* or `treat_as_floating_point<Rep2>`*holds false*, the second constructor doesn't participate in overload resolution. For more information, see [<type_traits>](type-traits.md).

Unless no overflow is induced in the conversion and `treat_as_floating_point<rep>`*holds true*,  or both `ratio_divide<Period2, period>::den` equals 1 and `treat_as_floating_point<Rep2>`*holds false*, the third constructor doesn't participate in overload resolution. For more information, see [<type_traits>](type-traits.md).

## Example: Create a `duration`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    // create a duration that tracks ticks as 1/10ths of a second
    duration<int, std::ratio<1, 10>> tenths{ 5 };
    std::cout << tenths << '\n';

    hours h{12}; // hours is a convenience duration typedef 
    auto h2 = 3h; // 'h' is a convenience operator. h2 is a duration<int, std::ratio<3600,1>>

    std::cout << h << ":" << h2 << '\n';

    return 0;
}
```

```output
5ds
3h:3h
```

## <a name="max"></a> `duration::max`

Static method that returns the upper bound for values of template parameter type `Rep`.

```cpp
static constexpr duration max();
```

### Return value

In effect, returns `duration(duration_values<rep>::max())`.

## <a name="min"></a> `duration::min`

Static method that returns the lower bound for values of template parameter type `Rep`.

```cpp
static constexpr duration min();
```

### Return value

In effect, returns `duration(duration_values<rep>::min())`.

## <a name="operator-"></a> `duration::operator-`

Returns a copy of the `duration` object with a negated tick count.

```cpp
constexpr duration operator-() const;
```

## <a name="operator--"></a> `duration::operator--`

Decrements the stored tick count.

```cpp
1) duration& operator--();
2) duration operator--(int);
```

### Return value

1\) Returns **`*this`**.
2\) Returns a copy of **`*this`** before the decrement.

## <a name="op_%="></a> `duration::operator%=`

Reduces the stored tick count modulo the specified value.

```cpp
1) duration& operator%=(const rep& Div);
2) duration& operator%=(const duration& Div);
```

### Parameters

*`Div`*\
1\) *`Div`* a tick count.
2\) *`Div`* a `duration` that contains a tick count.

### Return value

The `duration` object after the modulo operation is done.

## <a name="op_star_eq"></a> `duration::operator*=`

Multiplies the stored tick count by a specified value.

```cpp
duration& operator*=(const rep& Mult);
```

### Parameters

*`Mult`*\
A value of the type that is specified by `duration::rep`.

### Return value

The `duration` object after the multiplication is done.

## <a name="op_div_eq"></a> `duration::operator/=`

Divides the stored tick count by a specified value.

```cpp
duration& operator/=(const rep& Div);
```

### Parameters

*`Div`*\
A value of the type that is specified by `duration::rep`.

### Return value

The `duration` object after the division is done.

## <a name="op_add"></a> `duration::operator+`

Returns **`*this`**.

```cpp
constexpr duration operator+() const;
```

### Return value

`*this`

## <a name="op_++"></a> `duration::operator++`

Increments the stored tick count.

```cpp
1) duration& operator++();
2) duration operator++(int);
```

### Return value

1\) Returns **`*this`**.
2\) Returns a copy of **`*this`** before the increment.

## <a name="op_+="></a> `duration::operator+=`

Adds the tick count of a specified `duration` object to the stored tick count.

```cpp
duration& operator+=(const duration& Dur);
```

### Parameters

*`Dur`*\
A `duration` object.

### Return value

The `duration` object after the addition is done.

## <a name="operator-="></a> `duration::operator-=`

Subtracts the tick count of a specified `duration` object from the stored tick count.

```cpp
duration& operator-=(const duration& Dur);
```

### Parameters

*`Dur`*\
A `duration` object.

### Return value

The `duration` object after the subtraction is done.

## <a name="zero"></a> `duration::zero`

Returns `duration(duration_values<rep>::zero())`.

```cpp
static constexpr duration zero();
```

## <a name="op_="></a> `duration::operator=`

Assigns one duration to another.

```cpp
duration& operator=(const duration &other) = default;
```

### Parameters

*`other`*\
The `duration` object to copy.

### Return value

The LHS `duration` object.

## See also

[`<chrono>`](chrono.md)\
[Convenience `duration` typedefs such as `minutes`, `seconds`, and more](chrono.md#typedefs)\
[Convenience literals for hours, minutes, and more](chrono.md#literals)\
[`duration_values` structure](duration-values-structure.md)\
[Header Files Reference](cpp-standard-library-header-files.md)