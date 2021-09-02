---
description: "Learn more about: year_month_day class"
title: "year_month_day class"
ms.date: "06/28/2021"
f1_keywords: ["chrono/std::chrono::year_month_day", "chrono/std::chrono::year::operator+=", "chrono/std::chrono::year::operator-=", "chrono/std::chrono::year::sysdays", "chrono/std::chrono::year::localdays", "chrono/std::chrono::year::ok"]
helpviewer_keywords: ["std::chrono [C++], year_month_day"]
---

# `year_month_day` class  

Represents a month, year, and day.

## Syntax

```cpp
class year_month_day; // C++ 20
```

## Members

| Name | Description |
|--|--|
| [Constructors](#year_month_day) | Construct a `year_month_day` |
| [`day`](#day) | Returns the day. |
| [`month`](#month) | Returns the month. |
| [`ok`](#ok) | Verify that the [`year`](year-class.md) and [`month`](month-class.md) values are in the valid range. |
| [`operator+=`](#op_+=) | Add the specified number of months or years. |
| [`operator-=`](#op_-=) | Subtract the specified number of months or years. |
| [`operator local_days`](#local_days) | Get the count of days from the `system_clock` epoch to this `year_month_day` as [`local_days`](chrono.md#typedefs). |
| [`operator sys_days`](#sys_days) | Get the count of days from the `system_clock` epoch to this `year_month_day` as [`sys_days`](chrono.md#typedefs). |
| [`year`](#year) | Returns the year. |

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `year_month_day` from a stream using the specified format |
| [`operator+`](chrono-operators.md#op_add) | Add months or years. |
| [`operator-`](chrono-operators.md#op_minus) | Subtract months or years. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `year_month_day` values are equal. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare two `year_month_day` values. The `>, >=, <=, <, !=` operators are synthesized by the compiler. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `year_month_day` to a stream. |

## Requirements

**Header:** `<chrono>` (since C++ 20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="year_month_day"></a> Constructors

Construct a `year_month_day`.

```cpp
1) year_month_day() = default;
2) constexpr year_month_day(const year& y, const month& m, day& d) noexcept;
3) constexpr year_month_day(const year_month_day_last& ymdl) noexcept;
4) constexpr year_month_day(const sys_days& dp) noexcept;
5) constexpr explicit year_month_day(const local_days& dp) noexcept;
```

### Parameters

*`d`*
A [`day`](day-class.md) value.

*`dp`*
A [`sys_days`](chrono.md#typedefs) or [`local_days`](chrono.md#typedefs) value.

*`m`*
A [`month`](month-class.md) value.

*`y`*\
A [`year`](year-class.md) value.

*`ymdl`*
A `year_month_day_last` value.

### Remarks

1\) The default constructor doesn't initialize the month or day.\
2\) Constructs a `year_month_day`with the specified year, month, and day.\
3\) Constructs a `year_month_day`with the specified year, month, and day from *`ymdl`*\
4\) Constructs a `year_month_day`with the same date as *`dp`*.\
5\) Constructs a `year_month_day`with the same date as *`dp`* but as though constructed by `year_month_day(sys_days(dp.time_since_epoch()))`.

For information about C++ 20 syntax used to specify dates, see [`operator/`](chrono-operators.md#op_/)

### Example: Create a `year_month_day`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_day ymd{ April / 4 / 1975 };
    std::cout << ymd;
    return 0;
}
```

```output
1975-04-04
```

## <a name="day"></a> `day`

Get the day.

```cpp
constexpr day day() const noexcept;
```

### Return value

The [`day`](day-class.md) value.

## <a name="month"></a> `month`

Get the month.

```cpp
constexpr month month() const noexcept;
```

### Return value

The [`month`](month-class.md) value.

## <a name="local_days"></a> `operator local_days`

Get the count of days from the `system_clock` epoch (1/1/1970) to this `year_month_day` as [`local_days`](chrono.md#typedefs)

```cpp
constexpr explicit operator local_days() const noexcept;
```

### Return value

If `ok()`, returns a count of days as `local_days{sys_days{*this}.time_since_epoch()}`

## <a name="sys_days"></a> `operator sys_days`

Get the count of days from the `system_clock` epoch (1/1/1970) to this `year_month_day` as [`sys_days`](chrono.md#typedefs).

```cpp
constexpr operator sys_days() const noexcept;
```

### Return value

If `ok()`, returns a `sys_days` holding a count of days from the `sys_days` epoch (1/1/1970) to the date held in this `year_month_day`. The value will be negative if the date in this `year_month_day` is prior to the `sys_days` epoch.

If the year and month in this `year_month_day` are `ok()`, returns `sys_days{year/month/1d} + (day-1d)`. Otherwise the value returned is unspecified.

A `sys_days` in the range [`days{-12687428}`, `days{11248737}`] can be converted to a `year_month_day` and back and have have the same value.

## <a name="year"></a> `year`

Get the year.

```cpp
constexpr year year() const noexcept;
```

### Return value

The [`year`](year-class.md).

## <a name="ok"></a> `ok`

Check if the year and month value stored in this `year_month_day` are both in the valid range. Ensures that the day is in the range [1d, (y/m/last).day()], accounting for leap years and the different number of days in each month.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the `year_month_day` year, month, and day values are in the valid range. Otherwise, `false`.

## <a name="op_+="></a> `operator+=`

Add months or years to this `year_month_day`.

```cpp
1) constexpr year_month_day& operator+=(const months& dm) noexcept;
2) constexpr year_month_day& operator+=(const years& dy) noexcept;
```

### Parameters

*`dm`*\
The number of months to add.

*`dy`*\
The number of years to add.

### Return value

`*this`, which reflects the result of the addition.

### Example: `operator+=`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_day ymd{June / 1d / 2021y};

    std::cout << ymd << '\n';

    ymd += months{2};
    ymd += years{1};

    std::cout << ymd;
    
    return 0;
}
```

```output
2021-06-01
2022-08-01
```

## <a name="op_-="></a> `operator-=`

Subtract months or years from this `year_month_day`.

```cpp
1) constexpr year_month_day& operator-=(const months& dm) noexcept;
2) constexpr year_month_day& operator-=(const years& dy) noexcept;
```

### Parameters

*`dm`*\
The number of months to subtract.

*`dy`*\
The number of years to subtract.

### Return value

`*this`, which reflects the result of the subtraction.

### Example: `operator-=`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_day ymd{June / 1d / 2021y};

    std::cout << ymd << '\n';

    ymd -= months{2};
    ymd -= years{1};

    std::cout << ymd;
    
    return 0;
}
```

```output
2021-06-01
2020-04-01
```

## See also

[`<chrono>`](chrono.md)\
[`year`](year-class.md)\
[`year_month`](year-month-class.md)\
[`year_month_day_last`](year-month-day-last-class.md)\
[`year_month_weekday`](year-month-weekday-class.md)\
[`year_month_weekday_last`](year-month-weekday-last-class.md)\
[`operator/`](chrono-operators.md#op_/)\
[Header Files Reference](cpp-standard-library-header-files.md)