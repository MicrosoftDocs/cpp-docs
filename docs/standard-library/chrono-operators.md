---
description: "Learn more about: <chrono> operators"
title: "<chrono> operators"
ms.date: 09/17/2021
f1_keywords: ["chrono/std::operator modulo", "chrono/std::operator+", "chrono/std::chrono::day::operator+", "chrono/std::chrono::duration::operator+", "chrono/std::chrono::month::operator+", "chrono/std::chrono::time_point::operator+", "chrono/std::chrono::weekday::operator+", "chrono/std::chrono::year_month::operator+", "chrono/std::chrono::year::operator+", "chrono/std::chrono::year_month_day::operator+", "chrono/std::chrono::year_month_day_last::operator+", "chrono/std::chrono::year_month_weekday::operator+", "chrono/std::chrono::year_month_weekday_last::operator+", "chrono/std::operator!=", "chrono/std::operator*", "chrono/std::operator/", "chrono/std::operator-", "chrono/std::operator<", "chrono/std::operator<=", "chrono/std::operator<", "chrono/std::operator==", "chrono/std::operator>>", "chrono/std::operator<=>", "chrono/std::chrono::day::operator<=>", "chrono/std::chrono::month::operator<=>", "chrono/std::chrono::year::operator<=>", "chrono/std::chrono::year_month::operator<=>", "chrono/std::chrono::time_point::operator<=>", "chrono/std::chrono::time_zone_link::operator<=>", "chrono/std::chrono::time_zone_link::operator==", "chrono/std::chrono::duration::operator<=>", "chrono/std::chrono::month_day_last::operator<=>", "chrono/std::chrono::year_month_day_last::operator<=>", "chrono/std::operator==", "chrono/std::chrono::year::operator<==>", "chrono/std::chrono::day::operator==", "chrono/std::chrono::duration::operator==", "chrono/std::chrono::month::operator==", "chrono/std::chrono::month_day::operator==", "chrono/std::chrono::month_day_last::operator==", "chrono/std::chrono::month_weekday::operator==", "chrono/std::chrono::month_weekday_last::operator==", "chrono/std::chrono::time_point::operator==", "chrono/std::chrono::weekday::operator==", "chrono/std::chrono::year_month::operator==", "chrono/std::chrono::year::operator==", "chrono/std::chrono::year_month_day::operator==", "chrono/std::chrono::year_month_day_last::operator==", "chrono/std::chrono::year_month_weekday_last::operator==", "chrono/std::chrono::year_month_weekday::operator==", "chrono/std::chrono::month_weekday_last::operator==", "chrono/std::chrono::weekday::operator==", "chrono/std::chrono::weekday_last::operator==", "chrono/std::chrono::year_month_weekday_indexed::operator==", "chrono/std::chrono::year_month_weekday_last::operator==", "chrono/std::chrono::year::operator==", "chrono/std::chrono::year_month::operator==",  "chrono/std::chrono::year_month_day::operator==", "chrono/std::chrono::year_month_day_last::operator==", "chrono/std::chrono::zoned_time::operator==", "chrono/std::operator-", "chrono/std::chrono::day::operator-", "chrono/std::chrono::duration::operator-", "chrono/std::chrono::month::operator-", "chrono/std::chrono::time_point::operator-", "chrono/std::chrono::weekday::operator-", "chrono/std::chrono::year_month::operator-", "chrono/std::chrono::year::operator-", "chrono/std::chrono::year_month_day::operator-", "chrono/std::chrono::year_month_day_last::operator-", "chrono/std::chrono::year_month_weekday::operator-", "chrono/std::chrono::year_month_weekday_last::operator-", "chrono/std::chrono::day::operator<<", "chrono/std::chrono::hh_mm_ss::operator<<", "chrono/std::chrono::month_day::operator<<", "chrono/std::chrono::month_day_last::operator<<", "chrono/std::chrono::month_weekday::operator<<", "chrono/std::chrono::month_weekday_last::operator<<", "chrono/std::chrono::weekday::operator<<", "chrono/std::chrono::weekday_indexed::operator<<", "chrono/std::chrono::weekday_last::operator<<", "chrono/std::chrono::year::operator<<", "chrono/std::chrono::year_month_day::operator<<", "chrono/std::chrono::year_month_day_last::operator<<", "chrono/std::chrono::year_month_weekday::operator<<", "chrono/std::chrono::utc_time::operator<<", "chrono/std::chrono::tai_time::operator<<", "chrono/std::chrono::gps_time::operator<<", "chrono/std::chrono::local_time::operator<<", "chrono/std::chrono::file_time::operator<<", "chrono/std::chrono::sys_info::operator<<", "chrono/std::chrono::local_info::operator<<", "chrono/std::chrono::zoned_time::operator<<"]
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
- [`year_month_day_last`](year-month-day-last-class.md)
- [`year_month_weekday`](year-month-weekday-class.md)
- [`year_month_weekday_last`](year-month-weekday-last-class.md)

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

10)
constexpr year_month_day_last operator+(const year_month_day_last& ymdl, const months& dm) noexcept; // C++ 20

11)
constexpr year_month_day_last operator+(const months& dm, const year_month_day_last& ymdl) noexcept; // C++ 20

12)
constexpr year_month_day_last operator+(const year_month_day_last& ymdl, const years& dy) noexcept; // C++ 20
constexpr year_month_day_last operator+(const years& dy, const year_month_day_last& ymdl) noexcept; // C++ 20

13)
constexpr year_month_weekday operator+(const year_month_weekday& ymwd, const months& dm) noexcept; // C++ 20
constexpr year_month_weekday operator+(const months& dm, const year_month_weekday& ymwd) noexcept; // C++ 20

14)
constexpr year_month_weekday operator+(const year_month_weekday& ymwd, const years& dy) noexcept; // C++ 20

15)
constexpr year_month_weekday operator+(const years& dy, const year_month_weekday& ymwd) noexcept; // C++ 20

16)
constexpr year_month_weekday_last operator+(const year_month_weekday_last& ymwdl, const months& dm) noexcept; // C++ 20
constexpr year_month_weekday_last operator+(const months& dm, const year_month_weekday_last& ymwdl) noexcept; // C++ 20

17)
constexpr year_month_weekday_last operator+(const year_month_weekday_last& ymwdl, const years& dy) noexcept; // C++ 20
constexpr year_month_weekday_last operator+(const years& dy, const year_month_weekday_last& ymwdl) noexcept; // C++ 20
```

### Return value

1\) After converting *`Left`* and *`Right`* to their common type, returns a `duration` with a tick count equal to the sum of the converted tick counts.

2-3\) Return a `time_point` object that represents a point in time that is displaced by the interval *`Dur`* from the point in time *`Time`*.

4\) Returns the result of `d+ds.count()`. If the  result is out of the range [0, 255], then the result is unspecified.

5\) Returns the result of `m+ms.count()`. If the result is out of the range [1, 12], it's reduced modulo 12 and then +1.

6\) Returns the result of adding the number of days and weekdays to the `weekday`. The result will be modulo 7, so always in the range \[0,6]

7\) Returns the result of adding the year to the specified number of years.

8\) Returns the result of adding the number of months and years to the specified month and year.

9\) Returns the result of adding months or years to a `year_month_day`.  If `ymd.month()` is `February` and `ymd.day()` is not in the range [1d, 28d], `ok()` may return `false` for the result of the addition.

10\) Returns `(ymdl.year() / ymdl.month() + dm) / last`. Note: The `/` used here isn't a division operator. It's the date operator.

11\) Returns `ymdl + dm`.

12\) Returns  `{ymdl.year()+dy, ymdl.month_day_last()}`

13\) Returns `ymwd + dm.count()`.

14-15\) Returns `{ymwd.year()+dy, ymwd.month(), ymwd.weekday_indexed()}`.

16\) Returns `(ymwdl.year() / ymwdl.month() + dm) / ymwdl.weekday_last()`. Note: The `/` used here isn't a division operator but the date operator.

17\) Returns: `ymwdl + dy`

### Example: `operator+`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    // day
    day d{1};
    std::cout << d + days(2) << '\n'; // 03

    // month
    month m{11};
    std::cout << m + months(3)<< '\n'; // Feb

    // weekday
    weekday wd = Thursday;
    std::cout << wd + days(1) << '\n'; // Fri

    // year_month_day_last
    year_month_day_last ymdl{June / last / 2021};
    std::cout << ymdl + years{1} + months{1} << '\n'; // 2022/Jul/last

    // year_month_weekday
    year_month_weekday ymw{ year(1997) / January / Wednesday[1] };
    std::cout << ymw + months{1} << '\n'; // 1997/Feb/Wed[1]
    std::cout << ymw + years{1} << '\n'; // 1998/Jan/Wed[1] 

    // year_month_weekday_last
    year_month_weekday_last ymwl{ year(1997) / January / Wednesday[last] };
    std::cout << ymwl + months{ 1 } << '\n'; // 1997/Feb/Wed[last]
    std::cout << ymwl + years{ 1 } << '\n'; // 1998/Jan/Wed[last] 

    return 0;
}
```

```output
03
Feb
Fri
2022/Jul/last
1997/Feb/Wed[1]
1998/Jan/Wed[1]
1997/Feb/Wed[last]
1998/Jan/Wed[last]
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
- [`year_month_day_last`](year-month-day-last-class.md)
- [`year_month_weekday`](year-month-weekday-class.md)
- [`year_month_weekday_last`](year-month-weekday-last-class.md)

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

13)
constexpr year_month_day_last operator-(const year_month_day_last& ymdl, const months& dm) noexcept;  // C++ 20

14)
constexpr year_month_day_last operator-(const year_month_day_last& ymdl, const years& dy) noexcept;  // C++ 20

15)
constexpr year_month_weekday operator-(const year_month_weekday& ymwd, const months& dm) noexcept; // C++ 20

16)
constexpr year_month_weekday operator-(const year_month_weekday& ymwd, const years& dy) noexcept; // C++ 20

17)
constexpr year_month_weekday_last operator-(const year_month_weekday_last& ymwdl, const months& dm) noexcept; // C++ 20

18)
constexpr year_month_weekday_last operator-(const year_month_weekday_last& ymwdl, const years& dy) noexcept; // C++ 20
```

### Return value

1\) After converting the durations being subtracted to their common type, returns a `duration` with a tick count equal to the number of ticks in *`Right`* subtracted from the number of ticks in *`Left`*.

2\) Returns a `time_point` that represents a point in time that is displaced by the negation of the time interval that is represented by *`Dur`*, from the point in time that is specified by *`Time`*.

3\) Returns a `duration` object that represents the time interval between *`Left`* and *`Right`*.

4\) Returns the result of `d-ds.count()`. If the result is out of the range [0, 255], then the result is unspecified.

5\) If `m.ok() == true` and `ms.ok() == true`, returns the result of subtracting the two month values, or subtracting the number of months. The result will be in the range  [1, 12]. If the result is negative, it wraps around. For example, subtracting one month from January (`month m1{1} - months{1};` results in 12 (December).

6\) Returns the difference in months between *`Left`* and *`Right`*

7\) If `Left.ok() == true` and `Right.ok() == true`, returns a `weekday` in the range [`days{0}`, `days{6}`].

8\) Returns the number of days between two weekdays.

9\) Returns `year(int(y)-ys.count)())`

10\) Returns `years(int(y) - int(y2))`. Subtracting two `year` values results in a `std::chrono::years`, which represents the difference in years between `y` and `y2`. For example, `2021y-2000y` produces `years(21)`.

11\) Returns the result of subtracting months or years from a `year_month` value.

12\) Returns the result of subtracting months years from a `year_month_day` value.

13\) Returns the result of subtracting the number of months from the `year_month_day_last` value. Essentially: `ymdl-dm`.

14\) Returns the result of subtracting the number of years from the `year_month_day_last` value. Essentially: `ymdl-dy`.

15\) Returns the result of subtracting the number of months from the `year_month_weekday` value. Essentially: `ymwd-dm`.

16\) Returns the result of subtracting the number of years from the `year_month_weekday` value. Essentially: `ymwd-dy`.

17\) Returns the result of subtracting the number of months from the `year_month_weekday_last` value. Essentially: `ymwdl-dm`.

18\) Returns the result of subtracting the number of years from the `year_month_weekday_last` value. Essentially: `ymwdl-dy`.

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
    std::cout << d << '\n'; // 05

    // month 
    month m{2};
    m = m - months{1};
    std::cout << m << '\n'; // Jan
    m = m - months{1};
    std::cout << m << '\n'; // Dec

    // year
    auto diff1 = 2021y-2000y;
    auto diff2 = 2021y-years{1};
    std::cout << diff1.count() << '\n'; // 21
    std::cout << diff2 << '\n'; // 2020

    // year_month
    const year theYear{ 2021 };
    year_month ym1{theYear, June};
    year_month ym2 = ym1 - months{2};
    std::cout << ym2 << '\n'; // 2021/Apr
    year_month ym3 = ym1 - years{2};
    std::cout << ym3 << '\n'; // 2019/Jun

    // year_month_day_last
    year_month_day_last ymdl = June / last / 2021;
    std::cout << ymdl - years{1} - months{1} << '\n'; // 2022/Jul/last

    // year_month_weekday
    year_month_weekday ymw{ year(1997) / January / Wednesday[1] };
    std::cout << ymw - months{1} << '\n'; // 1996/Dec/Wed[1]
    std::cout << ymw - years{1} << '\n'; // 1996/Jan/Wed[1] 

    // year_month_weekday_last
    year_month_weekday_last ymwl{ year(1997) / January / Wednesday[last] };
    std::cout << ymwl - months{ 1 } << '\n'; // 1996/Dec/Wed[last]
    std::cout << ymwl - years{ 1 } << '\n'; // 1996/Jan/Wed[last]
    
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
2020/May/last
1996/Dec/Wed[1]
1996/Jan/Wed[1]
1996/Dec/Wed[last]
1996/Jan/Wed[last]
```

## <a name="op_unary_negate"></a> Unary `operator-`

Negates a [`duration`](duration-class.md).

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

```output
-120ms
```

## <a name="op_neq"></a> `operator!=`

Determines whether:

1\) Two [`duration`](duration-class.md) objects don't represent the same number of ticks.\
2\) Two [`time_point`](time-point-class.md) objects don't represent the same point in time.\

```cpp
1)
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator!=(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

2)
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

1\) Returns **`true`** if the number of ticks for the type common to *`Left`* and *`Right`* aren't equal. Otherwise, returns **`false`**.\
2\) Returns **`true`**  if the two [`time_point`](time-point-class.md) objects don't represent the same point in time. Otherwise, returns **`false`**.\

## <a name="op_star"></a> `operator*`

Multiplication operator for [`duration`](../standard-library/chrono-operators.md#op_star) objects. After converting the `duration`s being multiplied to their common type, returns a `duration` with a tick count equal to the multiplication of the converted tick counts.

```cpp
1)
template <class Rep1, class Period1, class Rep2>
constexpr duration<typename common_type<Rep1, Rep2>::type, Period1>
   operator*(
      const duration<Rep1, Period1>& Dur,
      const Rep2& Mult);

2)
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

Returns a `duration` object whose interval length is *`Mult`* multiplied by the length of *`Dur`*.

1\) Unless `is_convertible<Rep2, common_type<Rep1, Rep2>>`*holds `true`*, this function doesn't participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

2\) Unless `is_convertible<Rep1, common_type<Rep1, Rep2>>`*holds `true`*, this function doesn't participate in overload resolution. For more information, see [<type_traits>](../standard-library/type-traits.md).

## <a name="op_lt"></a> `operator<`

1\) After converting the `duration`s being compared to their common type, determines if the number of ticks for `Left` is fewer than for `Right`.

2\) Determines if the point in time since the epoch of the `Left`[`time_point`](../standard-library/time-point-class.md) is less than the time since the epoch of the `time_point` in `Right`.

```cpp
1)
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator<(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

2)
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

1\) Returns **`true`** if number of ticks for *`Left`* is less than the number of ticks for *`Right`*. Otherwise, the function returns **`false`**.

2\) Returns **`true`** if *`Left`* precedes *`Right`*. Otherwise, returns **`false`**.

## <a name="op_lt_eq"></a> `operator<=`

1\) After converting the `duration`s being compared to their common type, determines if the number of ticks for `Left` is fewer or the same as `Right`.

2\) Determines if the point in time since the epoch of the `Left`[`time_point`](../standard-library/time-point-class.md) is less than or equal to the time since the epoch of the `time_point` in `Right`.

```cpp
1)
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator<=(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

2)
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

1\) Returns **`true`** if number of ticks for *`Left`* is less than or equal to the number of ticks for *`Right`*. Otherwise, the function returns **`false`**.

2\) Returns **`true`** if *`Left`* precedes, or is equal to, *`Right`*. Otherwise, returns **`false`**.

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
14\) [`year_month_day`](year-month-day-class.md) represent the same year, month, and day.\
15\) [`year_month_day_last`](year-month-day-last-class.md) represent the same last day of the year and month.\
16\) [`year_month_weekday`](year-month-weekday-class.md) represent the same weekday, year, and month.\
17\) [`year_month_weekday_last`](year-month-weekday-last-class.md) represent the same last weekday of the month, year, and month.\
18\) [`time_zone_link`](time-zone-link-class.md) have the same `name`. The `target` name isn't considered.\
19\) [`zoned_time`](zoned-time-class.md) represent the same time and time zone.

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

// 15) year_month_day_last
constexpr bool operator==(const year_month_day_last& Left, const year_month_day_last& Right) noexcept; // C++ 20

// 16) year_month_weekday
constexpr bool operator==(const year_month_weekday& Left, const year_month_weekday& Right) noexcept; // C++ 20

// 17)  year_month_weekday_last
constexpr bool operator==(const year_month_weekday_last& Left, const year_month_weekday_last& Right) noexcept; // C++ 20

// 18) time_zone_link
bool operator==(const time_zone_link& Left, const time_zone_link& Right) noexcept;

// 19) zoned_time
template <class Duration1, class Duration2, class TimeZonePtr>
bool operator==(const zoned_time<Duration1, TimeZonePtr>& Left, const zoned_time<Duration2, TimeZonePtr>& Right); // C++ 20
```

### Parameters

*`Left`*\
The left object to compare, for example, `Left` == `Right`

*`Right`*\
The right object to compare.

### Return value

1\) Returns **`true`** if the number of ticks for the type common to *`Left`* and *`Right`* are equal. Otherwise, returns **`false`**.\
2\) Returns **`true`** if *`Left`* and *`Right`* represent the same point in time. Otherwise, returns **`false`**.\
3-17\) Returns **`true`** if *`Left`* and *`Right`* have the same value. Otherwise, returns **`false`**.\
18\) Returns **`true`** if `Left.name() == Right.name()`. Otherwise, returns `*false*`.\
19\) Returns **`true`** if `Left.get_time_zone() == _Right.get_time_zone() && Left.get_sys_time() == Right.get_sys_time();`

## <a name="op_gt"></a> `operator>`

1\) After converting the `duration`s being compared to their common type, determines if the number of ticks for `Left` is greater than for `Right`.

2\) Determines if the point in time since the epoch of the `Left`[`time_point`](../standard-library/time-point-class.md) is greater than the time since the epoch of the `time_point` in `Right`.

```cpp
1) 
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator>(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

2)
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

1\) Returns **`true`** if number of ticks for *`Left`* is greater than the number of ticks for *`Right`*. Otherwise, the function returns **`false`**.

2\) Returns **`true`** if *`Left`* comes after *`Right`*. Otherwise, returns **`false`**.

## <a name="op_gt_eq"></a> `operator>=`

1\) After converting the `duration`s being compared to their common type, determines if the number of ticks for `Left` is greater than or equal to `Right`.

2\) Determines if the point in time since the epoch of the `Left`[`time_point`](../standard-library/time-point-class.md) is greater than or equal to the time since the epoch of the `time_point` in `Right`.

```cpp
1)
template <class Rep1, class Period1, class Rep2, class Period2>
constexpr bool operator>=(
    const duration<Rep1, Period1>& Left,
    const duration<Rep2, Period2>& Right);

2)
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

1\) Returns **`true`** if number of ticks for *`Left`* is greater than or equal to the number of ticks for *`Right`*. Otherwise, the function returns **`false`**.

2\) Returns **`true`** if *`Left`* comes after, or is equal to, *`Right`*. Otherwise, returns **`false`**.

## <a name="op_spaceship"></a> `operator<=>`

The spaceship operator, with `operator==`, synthesizes operators for `<`, `<=`, `>`, `>=`, and `!=` for the following types:

- [`day`](day-class.md)
- [`duration`](duration-class.md)
- [`month`](month-class.md)
- [`month_day`](month-day-class.md)
- [`month_day_last`](month-day-last-class.md)
- [`time_point`](time-point-class.md)
- [`time_zone_link`](time-zone-link-class.md)
- [`year`](year-class.md)
- [`year_month`](year-month-class.md)
- [`year_month_day_last`](year-month-day-last-class.md)

```cpp
1)
constexpr bool operator<=>(const day& Left, const day& Right) noexcept; // C++ 20

constexpr std::strong_ordering operator<=>(const month& Left, const month& Right) noexcept; // C++ 20

constexpr strong_ordering operator<=>(const month_day& Left, const month_day& Right) noexcept; // C++ 20

constexpr std::strong_ordering operator<=>(const year& Left, const year& Right ) noexcept; // C++ 20

constexpr strong_ordering operator<=>(const year_month& Left, const year_month& Right) noexcept; // C++ 20

template<class Clock, class Duration1, three_­way_­comparable_­with<Duration1> Duration2>
    constexpr auto operator<=>(const time_point<Clock, Duration1>& Left, const time_point<Clock, Duration2>& Right); // C++ 20

template<class Rep1, class Period1, class Rep2, class Period2>
  requires three_­way_­comparable<typename CT::rep>
    constexpr auto operator<=>(const duration<Rep1, Period1>& Left, const duration<Rep2, Period2>& Right);

2)
constexpr strong_ordering operator<=>(const month_day_last& Left, const month_day_last& Right) noexcept;

3)
constexpr strong_ordering operator<=>(const year_month_day_last& Left, const year_month_day_last& Right) noexcept;

4)
strong_ordering operator<=>(const time_zone_link& Left, const time_zone_link& Right) noexcept;
```

### Parameters

*`Left`, `Right`*\
The [`day`](day-class.md), [`duration`](duration-class.md), [`month`](month-class.md), [`month_day`](month-day-class.md), [`month_day_last`](month-day-last-class.md), [`time_point`](time-point-class.md), [`time_zone_link`](time-zone-link-class.md), [`year`](year-class.md), [`year_month`](year-month-class.md), [`year_month_day`](year-month-day-class.md),  [`year_month_day_last`](year-month-day-last-class.md) to compare.

### Return value

1\)\
`0` if `Left == Right`\
`< 0` if `Left < Right`\
`> 0` if `Left > Right`

2\)\
Equivalent to: `Left.month() <=> Right.month()`

3\)\
Equivalent to:

```cpp
if (auto c = Left.year() <=> Right.year(); c != 0) return c;
return Left.month_day_last() <=> Right.month_day_last();
```

4\)\
Equivalent to:
```cpp
Left.name() <=> Right.name()
```

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

```output
d1 < d2
true true false 
```

## <a name="op_left_shift"></a> `operator<<`

Output the following types to a stream:

- [`day`](day-class.md)
- [`file_time`](chrono.md)
- [`gps_time`](gps-clock-class.md)
- [`hh_mm_ss`](hhmmss-class.md)
- [`local_time`](local_t.md)
- [`local_info`](local-info-struct.md)
- [`month`](month-class.md)
- [`month_day`](month-day-class.md)
- [`month_day_last`](month-day-last-class.md)
- [`month_weekday`](month-weekday-class.md)
- [`month_weekday_last`](month-weekday-last-class.md)
- [`sys_info`](sys-info-struct.md)
- [`tai_time`](tai-clock-class.md)
- [`utc_time`](utc-clock-class.md)
- [`weekday`](weekday-class.md)
- [`weekday_indexed`](weekdayindexed-class.md)
- [`weekday_last`](weekdaylast-class.md)
- [`year`](year-class.md)
- [`year_month`](year-month-class.md)
- [`year_month_day`](year-month-day-class.md)
- [`year_month_day_last`](year-month-day-last-class.md)
- [`year_month_weekday`](year-month-weekday-class.md)
- [`year_month_weekday_last`](year-month-weekday-last-class.md)
- [`zoned_time`](zoned-time-class.md)

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

// 12) year_month
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const year_month& ym); // C++ 20

// 13) year_month_day
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const year_month_day& ymd); // C++ 20

// 14) year_month_day_last
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const year_month_day_last& ymdl); // C++ 20

// 15) year_month_weekday
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const year_month_weekday& ymwd); // C++ 20

// 16) year_month_weekday_last
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const year_month_weekday_last& ymwdl); // C++ 20

// 17) tai_time
template<class CharT, class Traits, class Duration>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const tai_time<Duration>& t); // C++ 20

// 18) utc_time
template<class CharT, class Traits, class Duration>
basic_ostream<CharT, traits>&
operator<<(basic_ostream<CharT, Traits>& os, const utc_time<Duration>& t); // C++ 20

// 19) gps_time
template<class CharT, class Traits, class Duration>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const gps_time<Duration>& t); // C++ 20

// 20) local_time
template<class CharT, class Traits, class Duration>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const local_time<Duration>& t); // C++ 20

// 21) sys_info
template<class CharT, class Traits>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const sys_info& si);

// 22) local_info
template<class CharT, class Traits>
basic_ostream<charT, traits>&
operator<<(basic_ostream<CharT, Traits>& os, const local_info& li);

// 23) zoned_time
template<class CharT, class Traits, class Duration, class TimeZonePtr>
basic_ostream<CharT, Traits>&
operator<<(basic_ostream<CharT, Traits>& os, const zoned_time<Duration, TimeZonePtr>& zt);
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

*`li`*\
The `local_info` to output.

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

*`si`*\
The `sys_info` to output.

*`t`*\
The `local_time`, `gps_time`, `tai_time`, or `utc_time` to output.

*`TimeZonePtr`*\
A pointer to the [time_zone](time-zone-class.md) stored in the [`zoned_time`](zoned-time-class.md).

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

*`ymdl`*\
The `year_month_day_last` to output.

*`ymwd`*\
The `year_month_weekday` to output.

*`ymwdl`*\
The `year_month_weekday_last` to output.

*`zt`*\
The `zoned_time` to output.

### Return value

The output stream you passed in, `os`

### Remarks

1\) The `day` value is output as a decimal number, with a leading zero if the result would be a single digit. If `!d.ok()`, then " isn't a valid day" is appended to the output.

2\) The `hh_mm_ss` value is output as hours:minutes:seconds:thousandths of seconds. For example, `"00:00:05.721`"

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

14\) The `year_month_day_last` is output in the form yyyy/month/last. For example, `2020/May/last`.

15\) The `year_month_weekday` is output in the form yyyy/month/weekday[index]. For example, `1996/Jan/Wed[1]`

16\) The `year_month_weekday_last` is output in the form yyyy/month/weekday[last]. For example, `1996/Jan/Wed[last]`

17\) The `tai_time` is output in the form yyyy-mm-dd hh:mm:ss.sssssss. For example, `2021-08-13 23:23:08.4358666`

18\) The `utc_time` is output in the form yyyy-mm-dd hh:mm:ss.sssssss. For example, `2021-08-13 23:23:08.4358666`

19\) The `gps_time` is output in the form yyyy-mm-dd hh:mm:ss.sssssss. For example, `2021-08-13 23:23:08.4358666`

20\) The `local_time` is output as the number of seconds since the clock's epoch. It's output as though by `os << std::chrono::sys_time<Duration>(some_local_time.time_since_epoch());`. For example, if `some_local_time` is August 18, 2021 3:13pm, the output is `1597792380`.

21\) In Microsoft's implementation, a `sys_info` is output as its `begin`, `end`, `offset`, `save`, and `abbrev` fields. For example: `begin: 2021-03-14 10:00:00, end: 2021-11-07 09:00:00, offset: -25200s, save: 60min, abbrev: PDT`

22\) In Microsoft's implementation, a `local_info` is output as yyyy-mm-dd hh:mm::ss.ssssss. For example, `2021-09-17 13:55:59.6590120`

23\) The local time in the `zoned_time` (obtained as `zt.get_local_time()`) is output using the format yyyy-mm-dd hh:mm:ss timezone. For example, `2021-09-15 10:45:00 GMT-6`

### Example: `operator<<`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    std::cout << utc_clock::now() << '\n';

    year_month ym{ 2021y / April };
    std::cout << ym;
    return 0;
}
```

```output
2021-08-16 20:47:05.6299822
2021/Apr
```

## <a name="op_modulo"></a> `operator modulo`

Operator for modulo operations on [`duration`](../standard-library/duration-class.md).

```cpp
1)
template <class Rep1, class Period1, class Rep2>
constexpr duration<Rep1, Period1, Rep2>::type
   operator%(
      const duration<Rep1, Period1>& Dur,
      const Rep2& Div);

2)
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
The dividend. The modulo is the remainder after dividing the dividend by the divisor.

*`Right`*\
The right `duration` object, the divisor.

### Return value

1\) Returns a `duration` object whose interval length is *`Dur`* modulo *`Div`*.

2\) Returns a value that represents *`Left`* modulo *`Right`*.

## <a name="op_div"></a> `operator/` for `duration`

Division operator for [`duration`](../standard-library/chrono-operators.md#op_star) objects.

```cpp
1)
template <class Rep1, class Period1, class Rep2>
constexpr duration<typename common_type<Rep1, Rep2>::type, Period1>
   operator/(
     const duration<Rep1, Period1>& Dur,
     const Rep2& Div);

2)
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

*`Left`*\w
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
operator/(const year& y, const month& m) noexcept; // C++ 20

// 2
constexpr year_month
operator/(const year& y, int m) noexcept; // C++ 20
 
/////////  returns month_day

// 3
constexpr month_day
operator/(const month& m, const day& d) noexcept; // C++ 20

// 4
constexpr month_day
operator/(const month& m, int d) noexcept; // C++ 20

// 5
constexpr month_day
operator/(int m, const day& d) noexcept; // C++ 20

// 6
constexpr month_day
operator/(const day& d, const month& m) noexcept; // C++ 20

// 7
constexpr month_day
operator/(const day& d, int m) noexcept; // C++ 20

/////////  returns month_day_last

// 8
constexpr month_day_last
operator/(const month& m, last_spec) noexcept; // C++ 20

// 9
constexpr month_day_last
operator/(int m, last_spec) noexcept; // C++ 20

// 10
constexpr month_day_last
operator/(last_spec, const month& m) noexcept; // C++ 20

// 11
constexpr month_day_last
operator/(last_spec, int m) noexcept; // C++ 20

/////////  returns month_weekday

// 12
constexpr month_weekday
operator/(const month& m, const weekday_indexed& wdi) noexcept; // C++ 20

// 13
constexpr month_weekday
operator/(int m, const weekday_indexed& wdi) noexcept; // C++ 20

// 14
constexpr month_weekday
operator/(const weekday_indexed& wdi, const month& m) noexcept; // C++ 20

// 15
constexpr month_weekday
operator/(const weekday_indexed& wdi, int m) noexcept; // C++ 20

/////////  returns month_weekday_last

// 16
constexpr month_weekday_last
operator/(const month& m, const weekday_last& wdl) noexcept; // C++ 20

// 17
constexpr month_weekday_last
operator/(int m, const weekday_last& wdl) noexcept; // C++ 20

// 18
constexpr month_weekday_last
operator/(const weekday_last& wdl, const month& m) noexcept; // C++ 20

// 19
constexpr month_weekday_last
operator/(const weekday_last& wdl, int m) noexcept; // C++ 20

/////////  returns year_month_day

// 20
constexpr year_month_day
operator/(const year_month& ym, const day& d) noexcept; // C++ 20

// 21
constexpr year_month_day
operator/(const year_month& ym, int d) noexcept; // C++ 20

// 22
constexpr year_month_day
operator/(const year& y, const month_day& md) noexcept; // C++ 20

// 23
constexpr year_month_day
operator/(int y, const month_day& md) noexcept; // C++ 20

// 24
constexpr year_month_day
operator/(const month_day& md, const year& y) noexcept; // C++ 20

// 25
constexpr year_month_day
operator/(const month_day& md, int y) noexcept; // C++ 20

/////////  returns year_month_day_last

// 26
constexpr year_month_day_last
operator/(const year_month& ym, last_spec) noexcept; // C++ 20

// 27
constexpr year_month_day_last
operator/(const year& y, const month_day_last& mdl) noexcept; // C++ 20

// 28
constexpr year_month_day_last
operator/(int y, const month_day_last& mdl) noexcept; // C++ 20

// 29
constexpr year_month_day_last
operator/(const month_day_last& mdl, const year& y) noexcept; // C++ 20

// 30
constexpr year_month_day_last
operator/(const month_day_last& mdl, int y) noexcept; // C++ 20

/////////  returns year_month_weekday

// 31
constexpr year_month_weekday
operator/(const year_month& ym, const weekday_indexed& wdi) noexcept; // C++ 20

// 32
constexpr year_month_weekday
operator/(const year& y, const month_weekday& mwd) noexcept; // C++ 20

// 33
constexpr year_month_weekday
operator/(int y, const month_weekday& mwd) noexcept; // C++ 20

// 34
constexpr year_month_weekday
operator/(const month_weekday& mwd, const year& y) noexcept; // C++ 20

// 35
constexpr year_month_weekday
operator/(const month_weekday& mwd, int y) noexcept; // C++ 20

/////////  returns year_month_weekday_last

// 36
constexpr year_month_weekday_last
operator/(const year_month& ym, const weekday_last& wdl) noexcept; // C++ 20

// 37
constexpr year_month_weekday_last
operator/(const year& y, const month_weekday_last& mwdl) noexcept; // C++ 20

// 38
constexpr year_month_weekday_last
operator/(int y, const month_weekday_last& mwdl) noexcept; // C++ 20

// 39
constexpr year_month_weekday_last
operator/(const month_weekday_last& mwdl, const year& y) noexcept; // C++ 20

// 40
constexpr year_month_weekday_last
operator/(const month_weekday_last& mwdl, int y) noexcept; // C++ 20
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
    month m{ July }; // Jul
    month_day md{ April / 4 }; // Apr/04
    month_day md2{ 4d / April }; // Apr/04
    month_day_last mdl{ January / last }; // Jan/last
    month_weekday mw{ 11 / Monday[1] }; // Nov/Mon[1]
    month_weekday_last mwl{ January / Monday[last] }; // Jan/Mon[last]
    weekday wd{ Monday }; // Mon
    weekday_indexed wdi{ Monday, 1 }; // Mon[1]
    year_month ym{ 2021y / April }; // 2021/Apr
    year_month_day ymd{ January / 1d / 2021y }; // 2021-01-01
    year_month_day ymd2{ 2021y / 5 / 7 }; // 2021-05-07
    year_month_day_last ymdl{ April / last / 1975 }; // 1975/Apr/last
    year_month_weekday ymw{ 1997y / January / Wednesday[1] }; // 1997/Jan/Wed[1]
    year_month_weekday_last ymwl{ 1997y / January / Wednesday[last] }; // 1997/Jan/Wed[last]
    int yearValue{ 2021 / 4 / 4 }; // 126

    std::cout << m << '\n' << md << '\n' << md2 << '\n' << mdl << '\n' << mw
        << '\n' << mwl << '\n' << wd << '\n' << wdi << '\n'
        << ym << '\n' << ymd << '\n' << ymd2 << '\n' << ymdl
        << '\n' << ymw << '\n' << ymwl << '\n' << yearValue;

    return 0;
}
```

```output
Jul
Apr/04
Apr/04
Jan/last
Nov/Mon[1]
Jan/Mon[last]
Mon
Mon[1]
2021/Apr
2021-01-01
2021-05-07
1975/Apr/last
1997/Jan/Wed[1]
1997/Jan/Wed[last]
126
```
