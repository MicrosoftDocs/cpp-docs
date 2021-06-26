---
description: "Learn more about: &lt;chrono&gt; operators"
title: "&lt;chrono&gt; operators"
ms.date: "6/16/2021"
f1_keywords: ["chrono/std::operator modulo", "chrono/std::operator+", "chrono/std::operator!=", "chrono/std::operator*", "chrono/std::operator/", "chrono/std::operator-", "chrono/std::operator<", "chrono/std::operator<=", "chrono/std::operator<", "chrono/std::operator==", "chrono/std::operator>>", "chrono/std::operator<=>", "chrono/std::chrono::year::operator==", "chrono/std::chrono::year::operator<==>", "chrono/std::chrono::year::operator+", "chrono/std::chrono::year::operator-", "chrono/std::chrono::year::operator<<", "chrono/std::chrono::year::operatorfrom_stream"]
---
# `<chrono>` operators

## <a name="op_add"></a> `operator+`

Addition operator for the following types:

- [`day`](day-class.md)
- [`duration`](../standard-library/duration-class.md)
- [`month`](month-class.md)
- [`time_point`](../standard-library/time-point-class.md)
- [`weekday`](weekday-class.md)
- [`year`](year-class.md)
- [`year_month`](year-month-class.md)
- [`year_month_day`](year-month-day-class.md)

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
constexpr day operator+(const day& d, const days& ds) noexcept; // C++ 20
constexpr day operator+(const days& ds, const day&  d) noexcept; // C++ 20

5)
constexpr month operator+(const month& m, const months& ms) noexcept; // C++ 20
constexpr month operator+(const months& ms, const month& m) noexcept; // C++ 20

6)
constexpr weekday operator+(const weekday& wd, const days& wds) noexcept // C++ 20
constexpr weekday operator+(const days& ds, const weekday& wd) noexcept; // C++ 20

7)
constexpr year operator+(const year& y, const years& ys) noexcept; // C++ 20
constexpr year operator+(const years& ys, const year& y) noexcept; // C++ 20

8)
constexpr year_month operator+(const year_month& ym, const months& dm) noexcept; // C++ 20
constexpr year_month operator+(const months& dm, const year_month& ym) noexcept; // C++ 20
constexpr year_month operator+(const year_month& ym, const years& dy) noexcept; // C++ 20
constexpr year_month operator+(const years& dy, const year_month& ym) noexcept; // C++ 20

9)
constexpr year_month_day operator+(const year_month_day& ymd, const months& dm) noexcept; // C++ 20
constexpr year_month_day operator+(const months& dm, const year_month_day& ymd) noexcept; // C++ 20
constexpr year_month_day operator+(const year_month_day& ymd, const years& dy) noexcept; // C++ 20
constexpr year_month_day operator+(const years& dy, const year_month_day& ymd) noexcept; // C++ 20
```

### Return value

1\) Returns a `duration` object that has a time interval that is equal to the sum of the intervals of *`Left`* and *`Right`*.

2-3\) Return a `time_point` object that represents a point in time that is displaced by the interval *`Dur`* from the point in time *`Time`*.

4\) Returns the result of `d+ds.count()`. If the  result is out of the range [0, 255], then the result is unspecified.

5\) Returns the result of `m+ms.count()`. If the  result is out of the range [1, 12], it's reduced modulo 12 and then +1.

6\) Returns the result of adding the number of days/weekdays to the `weekday`. The result will be modulo 7, so always in the range \[0,6]

7\) Returns the result of adding the year to the specified number of years.

8\) Returns the result of adding the number of months and/or years to the specified month and year.

9\) Returns the result of adding months or years to a `year_month_day`.  If `ymd.month()` is `February` and `ymd.day()` is not in the range [1d, 28d], `ok()` may return `false` for the result of the addition.

### Example: `operator+`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    day d{1};
    d = d + days(2);  
    std::cout << d << '\n';

    month m{11};
    m = m + months(3); 
    std::cout << m << '\n';

    weekday wd = Thursday;
    wd = wd + days(1);
    std::cout << wd << '\n';

    return 0;
}
```

Output:

```output
03
Feb
Fri
```

## <a name="op_unary_plus"></a> Unary `operator+`

Apply unary plus to the following types:

- [`duration`](duration-class.md).

```cpp
// duration
constexpr common_type_t<duration> operator+() const // C++ 20
```

### Return value

Returns `*this`

## <a name="op_minus"></a> `operator-`

Subtraction operator for the following types:

- [`day`](day-class.md)
- [`duration`](duration-class.md)
- [`month`](month-class.md)
- [`time_point`](time-point-class.md)
- [`weekday`](weekday-class.md)
- [`year`](year-class.md)
- [`year_month`](year-month-class.md)
- [`year_month_day`](year-month-day-class.md)

```cpp
1)
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr typename common_type<duration<Rep1, Period1>, duration<Rep2, Period2>>::type
   operator-(
       const duration<Rep1, Period1>& Left,
       const duration<Rep2, Period2>& Right);
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
constexpr day operator-(const day& d,  days& ds) noexcept; // C++ 20
constexpr day operator-(const day& d, const day& d) noexcept; // C++ 20

5)
constexpr month operator-(const month& m, const months& ms) noexcept; // C++ 20
constexpr month operator-(const month& m, const month& ms) noexcept; // C++ 20

6)
constexpr months operator-(const year_month& Left, const year_month& Right) noexcept; // C++ 20

7)
constexpr weekday operator-(const weekday& Left, const days& Right) noexcept; // C++ 20

8)
constexpr days operator-(const weekday& Left, const weekday& Right) noexcept; // C++ 20

9)
constexpr year operator-(const year& y, const years& ys) noexcept; // C++ 20

10)
constexpr years operator-(const year& y, const year& y2) noexcept; // C++ 20

11)
constexpr year_month operator-(const year_month& ym, const months& dm) noexcept; // C++ 20
constexpr year_month operator-(const year_month& ym, const years& dy) noexcept; // C++ 20

12)
constexpr year_month_day operator-(const year_month_day& ymd, const months& dm) noexcept; // C++ 20
constexpr year_month_day operator-(const year_month_day& ymd, const years& dy) noexcept; // C++ 20
```

### Return value

1\) Returns a `duration` whose interval length is the difference between *`Left`* and *`Right`*.

2\) Returns a `time_point` that represents a point in time that is displaced by the negation of the time interval that is represented by *`Dur`*, from the point in time that is specified by *`Time`*.

3\) Returns a `duration` object that represents the time interval between *`Left`* and *`Right`*.

4\) Returns the result of `d-ds.count()`. If the result is out of the range [0, 255], then the result is unspecified.

5\) If `m.ok() == true` and `ms.ok() == true`, returns the result of subtracting the two month values, or subtracting the number of months. The result will be in the range  [1, 12]. If the result is negative, it wraps around. For example, subtracting one month from January (`month m1{1} - months(1);` results in 12 (December).

6\) Returns the difference in months between *`Left`* and *`Right`*

7\) If `Left.ok() == true` and `Right.ok() == true`, returns a `weekday` in the range [`days{0}`, `days{6}`].

8\) Returns the number of days between two weekdays.

9\) Returns `year(int(y)-ys.count)())`

10\) Returns `years(int(y) - int(y2))`. Subtracting two `year` values results in a `std::chrono::years`, which represents the difference in years between `y` and `y2`. For example, `2021y-2000y` produces `years(21)`.

11\) Returns the result of subtracting a number of months or years from a `year_month` value.

12\) Returns the result of subtracting a number of months years from a `year_month_day` value.

### Example: `operator-`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    // day
    day d{10};
    d = d - days(5);  
    std::cout << d << '\n'; // 5

    // months 
    month m{2};
    m = m - months(1);
    std::cout << m << '\n'; // 1
    m = m - months(1);
    std::cout << m << '\n'; // 12

    // years
    auto diff1 = 2021y-2000y;
    auto diff2 = 2021y-years(1);
    std::cout << diff1.count() << '\n';
    std::cout << diff2 << '\n';

    // year_month
    const year theYear{ 2021 };
    year_month ym1{theYear, June};
    year_month ym2 = ym1 - months{2};
    std::cout << ym2 << '\n';
    year_month ym3 = ym1 - years{2};
    std::cout << ym3;
    
    return 0;
}
```

```output
05
Jan
Dec
21
2020
2021/Apr
2019/Jun
```

## <a name="op_unary_negate"></a> Unary `operator-`

Negates the following types:

- [`duration`](duration-class.md)

```cpp
constexpr common_type_t<duration> operator-() const;
```

### Return value

Returns a negated copy of `*this`

### Example: unary `operator-`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
   duration<int, std::milli> milliseconds(120);
   std::cout << -milliseconds << '\n';
   return 0;
}
```

Output:

```output
-120ms
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

Unless `is_convertible<Rep2, common_type<Rep1, Rep2>>`*holds true*, the first function doesn't participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

Unless `is_convertible<Rep1, common_type<Rep1, Rep2>>`*holds true*, the second function doesn't participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

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
1\) [`duration`](duration-class.md) objects represent time intervals that have the same length.\
2\) [`time_point`](time-point-class.md) objects represent the same point in time.\
3\) [`day`](day-class.md) objects represent the same day.\
4\) [`month`](month-class.md) objects represent the same month.\
5\) [`month_day`](month-day-class.md) objects represent the same month and day.\
6\) [`month_day_last`](month-day-last-class.md) objects represent the same month.\
7\) [`month_weekday`](month-weekday-class.md) objects represent the same month and nth weekday.\
8\) [`month_weekday_last`](month-weekday-last-class.md) objects represent the same month and last weekday.\
9\) [`weekday`](weekday-class.md) objects represent the same weekday.\
10\) [`weekday_last`](weekdaylast-class.md) objects represent the same last weekday of the month.\
11\) [`weekday_indexed`](weekdayindexed-class.md) represent the same weekday index.\
12\) [`year`](year-class.md) represent the same year.\
13\) [`year_month`](year-month-class.md) represent the same year and month.\
14\) [`year_month_day`](year-month-day-class.md) represent the same year, month, and day.

```cpp
// 1) duration<Rep, Period>
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
constexpr bool operator==(const day& Left, const day& Right) noexcept; // C++ 20

// 4) month
constexpr bool operator==(const month& Left, const month& Right) noexcept; // C++ 20

// 5) month_day
constexpr bool operator==(const month_day& Left, const month_day& Right) noexcept; // C++ 20

// 6) month_day_last
constexpr bool operator==(const month_day_last& Left, const month_day_last& Right) noexcept; // C++ 20

// 7) month_weekday
constexpr bool operator==(const month_weekday& Left, const month_weekday& Right) noexcept; // C++ 20

// 8) month_weekday_last
constexpr bool operator==(const month_weekday_last& Left, const month_weekday_last& Right) noexcept; // C++ 20

// 9) weekday
constexpr bool operator==(const weekday& Left, const weekday& Right) noexcept; // C++ 20

// 10) weekday_last
constexpr bool operator==(const weekday_last& Left, const weekday_last& Right) noexcept; // C++ 20

// 11) weekday_indexed
constexpr bool operator==(const weekday_indexed& x, const weekday_indexed& y) noexcept; // C++ 20

// 12) year
constexpr bool operator==(const year& Left, const year& y ) noexcept; // C++ 20

// 13) year_month
constexpr bool operator==(const year_month& Left, const year_month& Right) noexcept; // C++ 20

// 14) year_month_day
constexpr bool operator==(const year_month_day& Left, const year_month_day& Right) noexcept; // C++ 20
```

### Parameters

*`Left`*\
The left object to compare, for example, `Left` == `Right`

*`Right`*\
The right object to compare.

### Return value

1\) Returns **`true`** if *`Left`* and *`Right`* represent time intervals that have the same length. Otherwise, the function returns **`false`**.\
2\) Returns **`true`** if *`Left`* and *`Right`* represent the same point in time. Otherwise, returns **`false`**.\
3-14\) Returns **`true`** if *`Left`* and *`Right`* have the same value. Otherwise, returns **`false`**.

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

## <a name="op_spaceship"></a> `operator<=>`

The spaceship operator, in conjunction with `operator==`, synthesizes operators for `<`, `<=`, `>`, `>=`, and `!=`

```cpp
constexpr bool operator<=>(const day& Left, const day& Right) noexcept; // C++ 20
constexpr std::strong_ordering operator<=>(const month& Left, const month& Right) noexcept; // C++ 20
constexpr strong_ordering operator<=>(const month_day& Left, const month_day& Right) noexcept; // C++ 20
constexpr strong_ordering operator<=>(const month_day_last& Left, const month_day_last& Right) noexcept;
constexpr std::strong_ordering operator<=>(const year& Left, const year& Right ) noexcept; // C++ 20
constexpr strong_ordering operator<=>(const year_month& Left, const year_month& Right) noexcept; // C++ 20
template<class Clock, class Duration1, three_­way_­comparable_­with<Duration1> Duration2>
       constexpr auto operator<=>(const time_point<Clock, Duration1>& Left, const time_point<Clock, Duration2>& Right); // C++ 20
template<class Rep1, class Period1, class Rep2, class Period2>
  requires three_­way_­comparable<typename CT::rep>
  constexpr auto operator<=>(const duration<Rep1, Period1>& Left, const duration<Rep2, Period2>& Right);
```

### Parameters

*`Left`, `Right`*\
The [`day`](day-class.md), [`duration`](duration-class.md), [`month`](month-class.md), [`month_day`](month-day-class.md), [`month_day_last`](month-day-last-class.md), [`time_point`](time-point-class.md), [`year`](year-class.md), [`year_month`](year-month-class.md), [`year_month_day`](year-month-day-class.md) to compare.

### Return value

`0` if `Left == Right`\
`< 0` if `Left < Right`\
`> 0` if `Left > Right`

### Example: `operator<=>`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono; // for day and 'd' literals

int main()
{
    day d1{3};
    day d2{2};

    if ((d1 <=> d2) == 0)
    {
        std::cout << "equal\n";
    }
    else if ((d1 <=> d2) < 0)
    {
        std::cout << "d1 < d2\n";
    }
    else if ((d1 <=> d2) > 0)
    {
        std::cout << "d1 > d2\n";
    }

    std::cout << std::boolalpha << (1d <= 1d) << ' ' << (1d != 2d) << ' ' << (2d > 3d);

    return 0;
}
```

Output:

```output
d1 < d2
true true false 
```

## <a name="op_left_shift"></a> `operator<<`

Output the following types to a stream:

- [day](day-class.md)
- [hh_mm_ss](hhmmss-class.md)
- [month](month-class.md)
- [month_day](month-day-class.md)
- [month_day_last](month-day-last-class.md)
- [month_weekday](month-weekday-class.md)
- [month_weekday_last](month-weekday-last-class.md)
- [weekday](weekday-class.md)
- [weekday_indexed](weekdayindexed-class.md)
- [weekday_last](weekdaylast-class.md)
- [year](year-class.md)
- [year_month](year-month-class.md)
- [year_month_day](year-month-day-class.md)

```cpp
// 1) day
template <class CharT, class Traits>
std::basic_ostream<CharT, Traits>&
operator<<(std::basic_ostream<CharT, Traits>& os, const day& d); // C++ 20

// 2) hh_mm_ss
template<class CharT, class traits, class Duration>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const hh_mm_ss<Duration>& hms); // C++ 20

// 3) month
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const month& m); // C++ 20

// 4) month_day
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const month_day& md); // C++ 20

// 5) month_day_last
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const month_day_last& mdl); // C++ 20

// 6) month_weekday
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const month_weekday& mwd); // C++ 20

// 7) month_weekday_last
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const month_weekday_last& mwdl); // C++ 20

// 8) weekday
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const weekday& wd); // C++ 20

// 9) weekday_indexed
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const weekday_indexed& wdi); // C++ 20

// 10) weekday_last
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const weekday_last& wdl); // C++ 20

// 11) year
template <class CharT, class Traits>
std::basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const year& y); // C++ 20

//12) year_month
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const year_month& ym);

//13) year_month_day
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const year_month_day& ymd);
```

### Parameters

*`CharT`*\
The data type of a single character to be read from the stream and stored in the string. The C++ Standard Library provides specializations of this class template, with the type definitions [`string`](../standard-library/string-typedefs.md#string) for elements of type `char`, [`wstring`](../standard-library/string-typedefs.md#wstring), for `wchar_t`, [`u16string`](../standard-library/string-typedefs.md#u16string) for `char16_t`, and [`u32string`](../standard-library/string-typedefs.md#u32string) for `char32_t`.

*`Traits`*\
Describes `CharT` attributes for the `basic_string` and `basic_istream` specialization.

*`os`*\
The output stream to emit the `day` value into.

*`d`*\
The `day` to output.

*`hms`*\
The `hh_mm_ss` to output.

*`m`*\
The `month` to output.

*`md`*\
The `month_day` to output.

*`mdl`*\
The `month_day_last` to output.

*`mwd`*\
The `month_weekday` to output.

*`mwdl`*\
The `month_weekday_last` to output.

*`wd`*\
The `weekday` to output.

*`wdi`*\
The `weekday_indexed` to output.

*`wdl`*\
The `weekday_last` to output.

*`y`*\
The `year` to output.

*`ym`*\
The `year_month` to output.

*`ymd`*\
The `year_month_day` to output.


### Return value

The output stream you passed in, `os`

### Remarks

1\) The `day` value is output as a decimal number, with a leading zero if the result would be a single digit. If `!d.ok()`, then " isn't a valid day" is appended to the output.

2\) The `hh_mm_ss` value is output as hours:minutes:seconds:thousands of seconds. For example, `"00:00:05.721`"

3\) The abbreviated month name, using the locale associated with `os`, is output. For example, `Jan`. If `!m.ok()`, then `" is not a valid month"` is appended to the output.

4\) The abbreviated month name, using the locale associated with `os`, followed by the date, with a leading zero if the result would be a single digit, is output. For example, `Jan/05`. If `!md.ok()`, then `" is not a valid month"` may be appended to the output of the month, and `"is not a valid day"` may be appended to the output of the day. For example, `204 is not a valid month/204 is not a valid day`.

5\) The abbreviated month name, using the locale associated with `os`, followed by `/last`. For example, `Jan/last`.

6\) The abbreviated weekday name, using the locale associated with `os`, followed by the nth weekday in the month it represents in brackets. For example, `Mon[1]`.

7\) The abbreviated weekday name, using the locale associated with `os`, followed by the last weekday in the month it represents in brackets. For example, `Jan/Mon[last]`.

8\) The abbreviated weekday name, using the locale associated with `os`, is output. If `!wd.ok()`, then `" is not a valid weekday"` is appended to the output.

9\) The abbreviated weekday name, using the locale associated with `os`, is output, followed by the weekday of the month in brackets. For example, `Mon[3]`. If `!wd.ok()`, then `" is not a valid weekday"` may be appended to the day of the week output, and `"is not a valid index"` may be appended to the weekday index output.

10\) The last weekday of a month, using the locale associated with `os`, is output, followed by `[last]`, followed by the date. For example, `Tue[last] 2019-10-29`. If `!wd.ok()`, then `" is not a valid weekday"` may be appended to the day of the week output, and `"is not a valid index"` may be appended to the weekday index output.

11\) The year is left-padded with 0 (zero) to four digits if the result would be less than that. If `!y.ok()`, then `" is not a valid year"` is appended to the output.

12\) The `year_month` is output in the form yyy-mm-dd. If `ym.ok` returns `false`, then `" is not a valid date"` is appended.

13\) The `year_month_day` is output in the form yyyy-mm-dd. If `ymd.ok` returns `false`, then `" is not a valid date"` is appended.

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

## <a name="op_div"></a> `operator/` for `duration`

Division operator for [`duration`](../standard-library/chrono-operators.md#op_star) objects.

```cpp
// 1)
template <class Rep1, class Period1, class Rep2>
constexpr duration<typename common_type<Rep1, Rep2>::type, Period1>
   operator/(
     const duration<Rep1, Period1>& Dur,
     const Rep2& Div);

// 2)
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

1\) A duration object whose interval length is the length of *`Dur`* divided by the value *`Div`*.

2\) The ratio of the interval lengths of *`Left`* and *`Right`*.

Unless `is_convertible<Rep2, common_type<Rep1, Rep2>>`*holds true*, and `Rep2` isn't an instantiation of `duration`, the first operator doesn't participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

## <a name="op_/"></a> `operator/` for calendar dates

Provides syntax to create calendar dates in the following forms:

*month/day/year*\
*day/month/year*\
*year/month/day*

You can replace *day* with:

`last`\
`weekday[n]` for the nth day of the month\
`weekday[last]` for the last [`weekday`](weekday-class.md) of the month.

Partial dates can be formed as follows:

```cpp
year_month ym = 2015y/April;
month_day md1 = April/4;
month_day md2 = 4d/April;
```

Integers can be used as long as the interpretation isn't ambiguous.

```cpp
/////////  returns year_month

// 1
constexpr year_month
operator/(const year& y, const month& m) noexcept;

// 2
constexpr year_month
operator/(const year& y, int m) noexcept;
 
/////////  returns month_day

// 3
constexpr month_day
operator/(const month& m, const day& d) noexcept;

// 4
constexpr month_day
operator/(const month& m, int d) noexcept;

// 5
constexpr month_day
operator/(int m, const day& d) noexcept;

// 6
constexpr month_day
operator/(const day& d, const month& m) noexcept;

// 7
constexpr month_day
operator/(const day& d, int m) noexcept;

/////////  returns month_day_last

// 8
constexpr month_day_last
operator/(const month& m, last_spec) noexcept;

// 9
constexpr month_day_last
operator/(int m, last_spec) noexcept;

// 10
constexpr month_day_last
operator/(last_spec, const month& m) noexcept;

// 11
constexpr month_day_last
operator/(last_spec, int m) noexcept;

/////////  returns month_weekday

// 12
constexpr month_weekday
operator/(const month& m, const weekday_indexed& wdi) noexcept;

// 13
constexpr month_weekday
operator/(int m, const weekday_indexed& wdi) noexcept;

// 14
constexpr month_weekday
operator/(const weekday_indexed& wdi, const month& m) noexcept;

// 15
constexpr month_weekday
operator/(const weekday_indexed& wdi, int m) noexcept;

/////////  returns month_weekday_last

// 16
constexpr month_weekday_last
operator/(const month& m, const weekday_last& wdl) noexcept;

// 17
constexpr month_weekday_last
operator/(int m, const weekday_last& wdl) noexcept;

// 18
constexpr month_weekday_last
operator/(const weekday_last& wdl, const month& m) noexcept;

// 19
constexpr month_weekday_last
operator/(const weekday_last& wdl, int m) noexcept;

/////////  returns year_month_day

// 20
constexpr year_month_day
operator/(const year_month& ym, const day& d) noexcept;

// 21
constexpr year_month_day
operator/(const year_month& ym, int d) noexcept;

// 22
constexpr year_month_day
operator/(const year& y, const month_day& md) noexcept;

// 23
constexpr year_month_day
operator/(int y, const month_day& md) noexcept;

// 24
constexpr year_month_day
operator/(const month_day& md, const year& y) noexcept;

// 25
constexpr year_month_day
operator/(const month_day& md, int y) noexcept;

/////////  returns year_month_day_last

// 26
constexpr year_month_day_last
operator/(const year_month& ym, last_spec) noexcept;

// 27
constexpr year_month_day_last
operator/(const year& y, const month_day_last& mdl) noexcept;

// 28
constexpr year_month_day_last
operator/(int y, const month_day_last& mdl) noexcept;

// 29
constexpr year_month_day_last
operator/(const month_day_last& mdl, const year& y) noexcept;

// 30
constexpr year_month_day_last
operator/(const month_day_last& mdl, int y) noexcept;

/////////  returns year_month_weekday

// 31
constexpr year_month_weekday
operator/(const year_month& ym, const weekday_indexed& wdi) noexcept;

// 32
constexpr year_month_weekday
operator/(const year& y, const month_weekday& mwd) noexcept;

// 33
constexpr year_month_weekday
operator/(int y, const month_weekday& mwd) noexcept;

// 34
constexpr year_month_weekday
operator/(const month_weekday& mwd, const year& y) noexcept;

// 35
constexpr year_month_weekday
operator/(const month_weekday& mwd, int y) noexcept;

/////////  returns year_month_weekday_last

// 36
constexpr year_month_weekday_last
operator/(const year_month& ym, const weekday_last& wdl) noexcept;

// 37
constexpr year_month_weekday_last
operator/(const year& y, const month_weekday_last& mwdl) noexcept;

// 38
constexpr year_month_weekday_last
operator/(int y, const month_weekday_last& mwdl) noexcept;

// 39
constexpr year_month_weekday_last
operator/(const month_weekday_last& mwdl, const year& y) noexcept;

// 40
constexpr year_month_weekday_last
operator/(const month_weekday_last& mwdl, int y) noexcept;
```

### Parameters

*`d`*\
The day. Provided either as an integer in the range [1,31], or as a [`day`](day-class.md).

*`lastspec`*\
An empty tag type that indicates the last item in s sequence. For example, `2021y/May/last` is the last day of May 2021.

*`m`*\
The month. Provided either as an integer in the range [1,12], or as a [`month`](month-class.md).

*`md`*\
The month and day.

*`mdl`*\
The last day of the specified month.

*`mwd`*\
The n-th weekday of the specified month.

*`mwdl`*\
The last weekday of the specified month.

*`wdi`*\
A weekday index ([`weekday_indexed`](weekdayindexed-class.md)). For example, `weekday_indexed(Monday, 1)` is the first Monday of a month.

*`wdl`*\
The last weekday of a month. For example, `Monday[last]` is the last Monday of a month.

*`y`*\
The year. Provided either as an integer, or as a [`year`](year-class.md).

*`ym`*\
The year and month.

### Return value

1\) `year_month(y, m)`\
2\) `year_month(y, month(m))`\
3\) `month_day(m, d)`\
4\) `month_day(m, day(d))`\
5\) `month_day(month(m), d)`\
6\) `month_day(m, d)`\
7\) `month_day(month(m), d)`\
8\) `month_day_last(m)`\
9\) `month_day_last(month(m))`\
10\) `month_day_last(m)`\
11\) `month_day_last(month(m))`\
12\) `month_weekday(m, wdi)`\
13\) `month_weekday(month(m), wdi)`\
14\) `month_weekday(m, wdi)`\
15\) `month_weekday(month(m), wdi)`\
16\) `month_weekday_last(m, wdl)`\
17\) `month_weekday_last(month(m), wdl)`\
18\) `month_weekday_last(m, wdl)`\
19\) `month_weekday_last(month(m), wdl)`\
20\) `year_month_day(ym.year(), ym.month(), d)`\
21\) `year_month_day(ym.year(), ym.month(), day(d))`\
22\) `year_month_day(y, md.month(), md.day())`\
23\) `year_month_day(year(y), md.month(), md.day())`\
24\) `year_month_day(y, md.month(), md.day())`\
25\) `year_month_day(year(y), md.month(), md.day())`\
26\) `year_month_day_last(ym.year(), month_day_last(ym.month()))`\
27\) `year_month_day_last(y, mdl)`\
28\) `year_month_day_last(year(y), mdl)`\
29\) `year_month_day_last(y, mdl)`\
30\) `year_month_day_last(year(y), mdl)`\
31\) `year_month_weekday(ym.year(), ym.month(), wdi)`\
32\) `year_month_weekday(y, mwd.month(), mwd.weekday_indexed())`\
33\) `year_month_weekday(year(y), mwd.month(), mwd.weekday_indexed())`\
34\) `year_month_weekday(y, mwd.month(), mwd.weekday_indexed())`\
35\) `year_month_weekday(year(y), mwd.month(), mwd.weekday_indexed())`\
36) `year_month_weekday_last(ym.year(), ym.month(), wdl)`\
37\) `year_month_weekday_last(y, mwdl.month(), mwdl.weekday_last())`\
38) `year_month_weekday_last(year(y), mwdl.month(), mwdl.weekday_last())`\
39\) `year_month_weekday_last(y, mwdl.month(), mwdl.weekday_last())`\
40\) `year_month_weekday_last(year(y), mwdl.month(), mwdl.weekday_last())`

### Example: `operator/` for calendar dates

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    constexpr auto d1 {January/1d/2021y};
    constexpr auto d2 {2021y/5/7};
    constexpr auto d3 {January/last};
    constexpr auto d4 {11/Monday[1]};
    constexpr auto d5 {January/Monday[last]};

    std::cout << d1 << '\n' << d2 << '\n' << d3 << '\n' << d4 << '\n' << d5;

    return 0;
}
```
