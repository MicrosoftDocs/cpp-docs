---
description: "Learn more about: &lt;chrono&gt; operators"
title: "&lt;chrono&gt; operators"
ms.date: "4/23/2021"
f1_keywords: ["chrono/std::operator modulo", "chrono/std::operator+", "chrono/std::operator!=", "chrono/std::operator*", "chrono/std::operator/", "chrono/std::operator-", "chrono/std::operator<", "chrono/std::operator<=", "chrono/std::operator<", "chrono/std::operator==", "chrono/std::operator>>", 'chrono/std::operator""d', "chrono/std::operator<=>"]
---
# `<chrono>` operators

## <a name="op_minus"></a> `operator-`

Operator for subtraction or negation of:
- [`duration`](../standard-library/duration-class.md)
- [`time_point`](../standard-library/time-point-class.md)
- [`day`](../standard-library/day-class.md) objects.
- [`month`](month-class.md)
- [`weekday`](weekday-class.md)

```cpp
1) 
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr typename common_type<duration<Rep1, Period1>, duration<Rep2, Period2>>::type
   operator-(
       const duration<Rep1, Period1>& Left,
       cconst duration<Rep2, Period2>& Right);
2)
template <class Clock, class Duration1, class Rep2, class Period2>
constexpr time_point<Clock, typename common_type<Duration1, duration<Rep2, Period2>>::type
   operator-(
       const time_point<Clock, Duration1>& Time,
       const duration<Rep2, Period2>& Dur);
3)
template <class Clock, class Duration1, class Duration2>
constexpr typename common_type<Duration1, Duration2>::type
   operator-(
       const time_point<Clock, Duration1>& Left,
       const time_point<Clock, Duration2>& Right);
4)
constexpr std::chrono::day operator-(const std::chrono::day& d,  std::chrono::days& ds) noexcept; // C++ 20
constexpr std::chrono::day operator-(const std::chrono::days& ds, const std::chrono::day&  d) noexcept; // C++ 20

5)
constexpr month operator-(const month& Left, const months& Right) noexcept; // C++ 20
constexpr month operator-(const month& Left, const month& Right) noexcept; // C++ 20

6)
constexpr weekday operator-(const weekday& Left, const days& ds) noexcept; // C++ 20
constexpr days operator-(const weekday& Left, const weekday& Right) noexcept; // C++ 20
```

### Parameters

*`Left`*\
The left `duration`, `time_point`, `month`, `weekday` object.

*`Right`*\
The right `duration`, `time_point`, `month`, `months`, `weekday` object.

*`Time`*\
A `time_point` object.

*`d`*\
A `day` object.

*`ds`*\
The number of days to subtract.

*`Dur`*\
A `duration` object.

*`m`*\
A `month` object.

*`ms`*\
The number of months to subtract.

### Return value

1) Returns a `duration` object whose interval length is the difference between the time intervals of the two arguments.

2) returns a `time_point` object that represents a point in time that is displaced, by the negation of the time interval that is represented by *`Dur`*, from the point in time that is specified by *`Time`*.

3) Returns a `duration` object that represents the time interval between *`Left`* and *`Right`*.

4) Returns the result of `d-ds.count()`. If the result is out of the range [0, 255], then the result is unspecified.

5) If `m.ok() == true` and `ms.ok() == true`, returns the result of subtracting the two month values. The result will be in the range  [1, 12]. If the result is negative, it wraps around. For example, subtracting one month from January (`month m1{1} - months(1);` results in 12 (December).

6) If `Left.ok() == true and Right.ok() == true`, returns a value `d` in the range [`days{0}`, `days{6}`] where `y + d == x`.

### Example: `operator-`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::day d{10};
    d = d - std::chrono::days(5);  
    std::cout << d << '\n'; // 5

    std::chrono::month m{2};
    m = m - std::chrono::months(1);
    std::cout << m << '\n'; // 1
    m = m - std::chrono::months(1);
    std::cout << m << '\n'; // 12

    return 0;
}
```

Output:

```output
05
Jan
Dec
```

## <a name="op_neq"></a> `operator!=`

Inequality operator for [`duration`](../standard-library/duration-class.md) or [`time_point`](../standard-library/time-point-class.md) objects.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator!=(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator!=(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### Parameters

*`Left`*\
The left `duration` or `time_point` object.

*`Right`*\
The right `duration` or `time_point` object.

### Return value

Each function returns `!(Left == Right)`.

## <a name="op_star"></a> `operator*`

Multiplication operator for [`duration`](../standard-library/chrono-operators.md#op_star) objects.

```cpp
template <class Rep1, class Period1, class Rep2>
constexpr duration<typename common_type<Rep1, Rep2>::type, Period1>
   operator*(
      const duration<Rep1, Period1>& Dur,
      const Rep2& Mult);

template <class Rep1, class Rep2, class Period2>
constexpr duration<typename common_type<Rep1, Rep2>::type, Period2>
   operator*(
       const Rep1& Mult,
       const duration<Rep2,
       Period2>& Dur);
```

### Parameters

*`Dur`*\
A `duration` object.

*`Mult`*\
An integral value.

### Return value

Each function returns a `duration` object whose interval length is *`Mult`* multiplied by the length of *`Dur`*.

Unless `is_convertible<Rep2, common_type<Rep1, Rep2>>`*holds true*, the first function does not participate in overload resolution. For more information, sssee [<type_traits>](../standard-library/type-traits.md).

Unless `is_convertible<Rep1, common_type<Rep1, Rep2>>`*holds true*, the second function does not participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

## <a name="op_div"></a> `operator/`

Division operator for [`duration`](../standard-library/chrono-operators.md#op_star) objects.

```cpp
template <class Rep1, class Period1, class Rep2>
constexpr duration<typename common_type<Rep1, Rep2>::type, Period1>
   operator/(
     const duration<Rep1, Period1>& Dur,
     const Rep2& Div);

template <class Rep1, class Period1, class Rep2, class Period2>
constexpr typename common_type<Rep1, Rep2>::type
   operator/(
     const duration<Rep1, Period1>& Left,
     const duration<Rep2, Period2>& Right);
```

### Parameters

*`Dur`*\
A `duration` object.

*`Div`*\
An integral value.

*`Left`*\
The left `duration` object.

*`Right`*\
The right `duration` object.

### Return value

The first operator returns a duration object whose interval length is the length of *`Dur`* divided by the value *`Div`*.

The second operator returns the ratio of the interval lengths of *`Left`* and *`Right`*.

Unless `is_convertible<Rep2, common_type<Rep1, Rep2>>`*holds true*, and `Rep2` is not an instantiation of `duration`, the first operator does not participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

## <a name="op_add"></a> `operator+`

Adds:
- [`duration`](../standard-library/duration-class.md)
- [`time_point`](../standard-library/time-point-class.md)
- [`day`](day-class.md).
- [`month`](month-class.md)
- [`weekday`](weekday-class.md)
- [`year`](year-class.md)

```cpp
1)
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr typename common_type<duration<Rep1, Period1>, duration<Rep2, Period2>>::type
   operator+(
      const duration<Rep1, Period1>& Left,
      const duration<Rep2, Period2>& Right);
2)
template <class Clock, class Duration1, class Rep2, class Period2>
constexpr time_point<Clock, typename common_type<Duration1, duration<Rep2, Period2>>::type>
   operator+(
      const time_point<Clock, Duration1>& Time,
      const duration<Rep2, Period2>& Dur);
3)
template <class Rep1, class Period1, class Clock, class Duration2>
time_point<Clock, constexpr typename common_type<duration<Rep1, Period1>, Duration2>::type>
   operator+(
      const duration<Rep1, Period1>& Dur,
      const time_point<Clock, Duration2>& Time);
4)
constexpr day operator+(const day& d, const days& ds) noexcept; // c++ 20
constexpr day operator+(const days& ds, const day&  d) noexcept; // c++ 20

5)
constexpr month operator+(const month& m, const months& ms) noexcept; // c++ 20
constexpr month operator+(const months& ms, const month& m) noexcept; // c++ 20

6)
constexpr weekday operator+(const weekday& wd, const days& wds) noexcept // c++ 20
constexpr weekday operator+(const std::chrono::days& ds, const std::chrono::weekday& wd) noexcept; // c++ 20
```

### Parameters

*`Left`*\
The left `duration` or `time_point` object.

*`Right`*\
The right `duration` or `time_point` object.

*`Time`*\
A `time_point` object.

*`d`*\
The `day` to add to.

*`ds`*\
The number of days to add

*`Dur`*\
A `duration` object.

*`m`*\
The `month` to add to.

*`ms`*\
The number of months to add.

*`wd`*\
A weekday to add to.

*`wds`*\
The number of weekdays to add.

### Return value

1) Returns a `duration` object that has a time interval that is equal to the sum of the intervals of *`Left`* and *`Right`*.

2-3) Return a `time_point` object that represents a point in time that is displaced, by the interval *`Dur`*, from the point in time *`Time`*.

4) Returns the result of `d+ds.count()`. If the  result is out of the range [0, 255], then the result is unspecified.

5) Returns the result of `m+ms.count()`. If the  result is out of the range [1, 12], it is reduced modulo 12 and then +1.

6) Returns the result of adding the number of days/weekdays to the `weekday`. The result will be modulo 7, so always in the range \[0,6]

### Example: `operator+`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::day d{1};
    d = d + std::chrono::days(2);  
    std::cout << d << '\n';

    std::chrono::month m{11};
    m = m + std::chrono::months(3); 
    cout << m << '\n';

    std::chrono::weekday wd = std::chrono::Thursday;
    wd = wd + std::chrono::days(1);
    cout << wd << '\n';

    return 0;
}
```

Output:

```output
03
Feb
Fri
```

## <a name="op_unary_plus"></a> Unary `operator +`

Apply unary plus to a [`year`](year-class.md) value. Returns `*this`.

```cpp
constexpr year operator+() const noexcept; // C++ 20
```

### Return value

Returns a copy of the `year`.

### Example: unary `operator+`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
   std::chrono::year y{-1};
   std::cout << +y;
    return 0;
}
```

Output:

```output
-0001
```

## <a name="op_unary_negate"></a> Unary `operator -`

Return the negation of a [`year`](year-class.md) value.

```cpp
constexpr year operator-() const noexcept; // C++ 20
```

### Return value

Returns a negated copy of the `year`.

### Example: unary `operator-`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
   std::chrono::year y{-1977};
   std::cout << -y;
    return 0;
}
```

Output:

```output
1977
```

## <a name="op_lt"></a> `operator<`

Determines whether one [`duration`](../standard-library/duration-class.md) or [`time_point`](../standard-library/time-point-class.md) object is less than another `duration` or `time_point` object.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator<(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator<(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### Parameters

*`Left`*\
The left `duration` or `time_point` object.

*`Right`*\
The right `duration` or `time_point` object.

### Return value

The first function returns **`true`** if the interval length of *`Left`* is less than the interval length of *`Right`*. Otherwise, the function returns **`false`**.

The second function returns **`true`** if *`Left`* precedes *`Right`*. Otherwise, the function returns **`false`**.

## <a name="op_lt_eq"></a> `operator<=`

Determines whether one [`duration`](../standard-library/duration-class.md) or [`time_point`](../standard-library/time-point-class.md) object is less than or equal to another `duration` or `time_point` object.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator<=(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator<=(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### Parameters

*`Left`*\
The left `duration` or `time_point` object.

*`Right`*\
The right `duration` or `time_point` object.

### Return value

Each function returns `!(Right < Left)`.

## <a name="op_eq_eq"></a> `operator==`

Determines whether:
1) [`duration`](duration-class.md) objects represent time intervals that have the same length.
2) [`time_point`](time-point-class.md) objects represent the same point in time.
3) [`day`](day-class.md) objects represent the same day.
4) [`month`](month-class.md) objects represent the same month.
5) [`weekday`](weekday-class.md) objects represent the same weekday.
6) [`weekday_last`](weekdaylast-class.md) objects represent the same last weekday of the month.
7) [`weekday_indexed`](weekdayindexed-class.md) represent the same weekday and index.

```cpp
// 1) duration<Rep1, Period1>
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator==(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

// 2) time_point
template <class Clock, class Duration1, class Duration2>
constexpr bool operator==(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);

// 3) day
constexpr bool operator==(const std::chrono::day& Left, const std::chrono::day& Right) noexcept; // C++ 20

// 4) month
constexpr bool operator==(const month& Left, const month& Right) noexcept; // C++ 20

// 5) year
constexpr bool operator==(const std::chrono::year& Left, const std::chrono::year& y ) noexcept; // C++ 20

// 6) weekday
constexpr bool operator==(const weekday& Left, const weekday& Right) noexcept; // C++ 20

// 7) weekday_last
constexpr bool operator==(const weekday_last& Left, const weekday_last& Right) noexcept; // C++ 20

// 8) weekday_indexed
constexpr bool operator==(const weekday_indexed& x, const weekday_indexed& y) noexcept;
```

### Parameters

*`Left`*\
The left object to compare, for example, Left == Right

*`Right`*\
The right object to compare.

### Return value

1) Returns **`true`** if *`Left`* and *`Right`* represent time intervals that have the same length. Otherwise, the function returns **`false`**.
2) Returns **`true`** if *`Left`* and *`Right`* represent the same point in time. Otherwise, returns **`false`**.
3-7) Returns **`true`** if *`Left`* and *`Right`* have the same value. Otherwise, returns **`false`**.

## <a name="op_gt"></a> `operator>`

Determines whether one [`duration`](../standard-library/duration-class.md) or [`time_point`](../standard-library/time-point-class.md) object is greater than another `duration` or `time_point` object.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator>(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator>(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### Parameters

*`Left`*\
The left `duration` or `time_point` object.

*`Right`*\
The right `duration` or `time_point` object.

### Return value

Each function returns `Right < Left`.

## <a name="op_gt_eq"></a> `operator>=`

Determines whether one [`duration`](../standard-library/duration-class.md) or [`time_point`](../standard-library/time-point-class.md) object is greater than or equal to another `duration` or `time_point` object.

```cpp
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator>=(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

template <class Clock, class Duration1, class Duration2>
constexpr bool operator>=(
    const time_point<Clock, Duration1>& Left,
    const time_point<Clock, Duration2>& Right);
```

### Parameters

*`Left`*\
The left `duration` or `time_point` object.

*`Right`*\
The right `duration` or `time_point` object.

### Return value

Each function returns `!(Left < Right)`.

## <a name="op_spaceship"></a> `day::operator<=>`

Spaceship operator: with `operator==`, synthesizes operators for `<`, `<=`, `>`, `>=`, and `!=`

```cpp
constexpr bool operator<=>( const std::chrono::day& Left, const std::chrono::day& Right ) noexcept; // C++ 20
constexpr std::strong_ordering operator<=>(const std::chrono::month& Left, const std::chrono::month& Right) noexcept; // C++ 20
constexpr std::strong_ordering operator<=>(const std::chrono::year& Left, const std::chrono::year& Right ) noexcept; // C++ 20
```

### Parameters

*`Left`, `Right`*\
The [day](day-class.md), [month](month-class.md), or [year](year-class.md) to compare.

### Return value

`true` if the comparison is true; `false` otherwise.

### Example: `operator<=>`

```cpp
#include <iostream>
#include <chrono>

int main()
{
    std::chrono::day d1{1};
    std::chrono::day d2{2};

    if ( d1 == d2 )
    {
        std::cout << "equal\n";
    }
    else if (d1 < d2)
    {
        std::cout << "d1 < d2\n";
    }

    std::cout << std::boolalpha << 1d <= 1d << ' ' << 1d != 2d << ' '  << 2d > 3d;
    
    return 0;
}
```

Output:

```output
d1 < d2
true true false 
```

## <a name="op_left_shift"></a> `day::operator<<`

Output a [day](day-class.md), [weekday](weekday-class.md), [month](month-class.md), [year](year-class.md), [weekday_indexed](weekdayindexed-class.md) or [hh_mm_ss](hhmmss-class.md) value to a stream.

```cpp
1)
template <class CharT, class Traits>
std::basic_ostream<CharT, Traits>&
operator<<(std::basic_ostream<CharT, Traits>& os, const std::chrono::day& d); // C++ 20

2)
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const std::chrono::month& m); // C++ 20

3)
template <class CharT, class Traits>
std::basic_ostream<CharT, Traits>&
operator<<(std::basic_ostream<CharT, Traits>& os, const std::chrono::year& y); // C++ 20

4)
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const weekday& wd); // C++ 20

5)
template<class charT, class traits, class Duration>
basic_ostream<charT, traits>&
operator<<(basic_ostream<charT, traits>& os, const hh_mm_ss<Duration>& hms); // C++ 20

6)
template<class charT, class traits>
basic_ostream<charT, traits>&
operator<<(basic_ostream<charT, traits>& os, const weekday_indexed& wdi);
```

### Parameters

*`CharT`*\
The data type of a single character to be read from the stream and stored in the string. The C++ Standard Library provides specializations of this class template, with the type definitions [`string`](../standard-library/string-typedefs.md#string) for elements of type `char`, [`wstring`](../standard-library/string-typedefs.md#wstring), for `wchar_t`, [`u16string`](../standard-library/string-typedefs.md#u16string) for `char16_t`, and [`u32string`](../standard-library/string-typedefs.md#u32string) for `char32_t`.

*`traits`*\
Describes `CharT` attributes for the `basic_string` and `basic_istream` specialization.

*`os`*\
The output stream to emit the `day` value into.

*`d`*\
The `day` to output.

`*hms*`\
The `hh_mm_ss` to output.

*`m`*\
The `month` to output.

*`wd`*\
The `weekday` to output.

*`wdi`*\
The `weekday_indexed` to output.

*`y`*\
The `year` to output.

### Return value

The output stream you passed in, `os`

### Remarks

1) The value of `d` is output as a decimal number, with a leading zero if the result would be a single digit.
If `!d.ok()`, then " isn't a valid day" is appended to the output.

2) The abbreviated month name, using the locale associated with `os`, is output. If `!m.ok()`, then `" is not a valid month"` is appended to the output.

3) The year is left-padded with 0 (zero) to four digits if the result would be less than that. If `!y.ok()`, then `" is not a valid year"` is appended to the output.

4) The abbreviated weekday name, using the locale associated with `os`, is output. If `!wd.ok()`, then `" is not a valid weekday"` is appended to the output.

## <a name="op_modulo"></a> `operator modulo`

Operator for modulo operations on [`duration`](../standard-library/duration-class.md) objects.

```cpp
template <class Rep1, class Period1, class Rep2>
constexpr duration<Rep1, Period1, Rep2>::type
   operator%(
      const duration<Rep1, Period1>& Dur,
      const Rep2& Div);

template <class Rep1, class Period1, class Rep2, class Period2>
constexpr typename common_type<duration<Rep1, _Period1>, duration<Rep2, Period2>>::type
   operator%(
     const duration<Rep1, Period1>& Left,
     const duration<Rep2, Period2>& Right);
```

### Parameters

*`Dur`*\
A `duration` object.

*`Div`*\
An integral value.

*`Left`*\
The left `duration` object.

*`Right`*\
The right `duration` object.

### Return value

The first function returns a `duration` object whose interval length is *`Dur`* modulo *`Div`*.

The second function returns a value that represents *`Left`* modulo *`Right`*.
