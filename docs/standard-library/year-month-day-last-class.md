---
description: "Learn more about: year_month_day_last class"
title: "year_month_day_last class"
ms.date: "06/28/2021"
f1_keywords: ["chrono/std::chrono::year_month_day_last", "chrono/std::chrono::year_month_day_last::operator+=", "chrono/std::chrono::year_month_day_last::operator-=", "chrono/std::chrono::year_month_day_last::sysdays", "chrono/std::chrono::year_month_day_last::local_days", "chrono/std::chrono::year_month_day_last::day", "chrono/std::chrono::year_month_day_last::year", "chrono/std::chrono::year_month_day_last::ok"]
helpviewer_keywords: ["std::chrono [C++], year_month_day_last"]
dev_langs: ["C++"]
---
# `year_month_day_last` class  

 Represents the last day of a specific year and month.

`year_month_day_last` supports month arithmetic and years arithmetic, but not
days arithmetic. To do days-oriented arithmetic, convert the `year_month_day_last` to a `sys_days`.

## Syntax

```cpp
class year_month_day_last; // C++20
```

## Members

| Name | Description |
|--|--|
| [Constructors](#year_month_day_last) | Construct a `year_month_day_last` |
| [`day`](#day) | Get the last day of the month/year. |
| [`month`](#month) | Get the month. |
| [`month_day_last`](#month_day_last) | Get the [month_day_last](month-day-last-class.md) value stored in this `year_month_day_last`. |
| [`ok`](#ok) | Verify that the [`year`](year-class.md) and [`month`](month-class.md) values are in the valid range. |
| [`operator+=`](#op_+=) | Add months or years to this `year_month_day_last`. |
| [`operator-=`](#op_-=) | Subtract months or years from this `year_month_day_last`. |
| [`operator local_days`](#local_days) | Get the count of days from the `sys_days` epoch to this `year_month_day_last` as [`local_days`](chrono.md#typedefs). |
| [`operator sys_days`](#sys_days) | Get the count of days from the `sys_days` epoch to this `year_month_day_last` as [`sys_days`](chrono.md#typedefs). |
| [`year`](#year) | Get the year. |

## Non-members

| Name | Description |
|--|--|
| [`operator+`](chrono-operators.md#op_add) | Add months or years. |
| [`operator-`](chrono-operators.md#op_minus) | Subtract months or years. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `year_month_day_last` values are equal. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare two `year_month_day_last` values. The `>, >=, <=, <, !=` operators are synthesized by the compiler. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `year_month_day_last` to a stream. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="year_month_day_last"></a> Constructors

Construct a `year_month_day_last` for a specified month and year.

```cpp
constexpr year_month_day_last(const year& y, const month_day_last& mdl) noexcept;
```

### Parameters

*`mdl`*
The month value from the [`month_day_last`](month-day-last-class.md) is stored in the constructed `year_month_day_last`.

*`y`*\
The [`year`](year-class.md) value is stored in the constructed `year_month_day_last`.

## Remarks

For information about C++ 20 syntax used to specify dates, see [`operator/`](chrono-operators.md#op_/)

### Example: Create a `year_month_day_last`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_day_last ymdl{ April / last / 1975 };
    std::cout << ymdl;

    return 0;
}
```

```output
1975/Apr/last
```

## <a name="day"></a> `day`

If `ok()` is `true`, returns a [day](day-class.md) representing the last day of the year, month represented
by this `year_month_day_last`.

```cpp
constexpr day day() const noexcept;
```

### Return value

If `ok()` is `true`, returns a [`day`](day-class.md) representing the last day of the year and month represented by `*this`. Otherwise, the return value is unspecified.

## <a name="local_days"></a> `local_days`

Get the month, day, and year in this `year_month_day_last` as a count of days.

```cpp
constexpr explicit operator local_days() const noexcept;
```

### Return value

 `local_days{sys_days{*this}.time_since_epoch()}`

### Example

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_day_last ymdl{ June / last / 2021 };
    auto ld = local_days(ymdl);
    std::cout << ld.time_since_epoch();

    return 0;
}
```

```output
18808d
```

## <a name="month"></a> `month`

Get the stored month value.

```cpp
constexpr month month() const noexcept;
```

### Return value

The [`month`](month-class.md) value.

## <a name="month_day_last"></a> `month_day_last`

Gets the `month_day_last` value stored in this `year_month_day_last`.

```cpp
constexpr month_day_last month_day_last() const noexcept;
```

### Return value

The [`month_day_last`](month-day-last-class.md) value stored in this `year_month_day_last`.

## <a name="sys_days"></a> `operator sys_days`

Get the month, day, and year in this `year_month_day_last` as a count of days from the epoch for the system clock.

```cpp
constexpr explicit operator sys_days() const noexcept;
```

### Return value

 Returns `sys_days{this->year()/this->month()/this->day()}`

### Example

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_day_last ymdl{ June / last / 2021 };
    auto sd = sys_days(ymdl);
    std::cout << sd.time_since_epoch();

    return 0;
}
```

```output
18808d
```

## <a name="year"></a> `year`

Get the year.

```cpp
constexpr year year() const noexcept;
```

### Return value

The [`year`](year-class.md).

## <a name="ok"></a> `ok`

Check if the `year` and `month_day_last` value stored in this `year_month_day_last` are both in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the `year` and `month_day_last` value stored in this `year_month_day_last` are both in the valid range. Otherwise, `false`.

## <a name="op_+="></a> `operator+=`

Add months or years to this `year_month_day_last`.

```cpp
1) constexpr year_month_day_last& operator+=(const months& m) noexcept;
2) constexpr year_month_day_last& operator+=(const years& y) noexcept;
```

### Parameters

*`m`*\
The number of months to add.

*`y`*\
The numbers of years to add.

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
    year_month_day_last ymdl{ April / last / 1975 };

    std::cout << ymdl << '\n';

    ymdl += months{1};
    ymdl += years{1};

    std::cout << ymdl;
    
    return 0;
}
```

```output
1975/Apr/last
1976/May/last
```

## <a name="op_-="></a> `operator-=`

Subtract months or years from this `year_month_day_last`.

```cpp
1) constexpr year_month_day_last& operator-=(const months& m) noexcept;
2) constexpr year_month_day_last& operator-=(const years& y) noexcept;
```

### Parameters

*`m`*\
The number of months to subtract.

*`y`*\
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
    year_month_day_last ymdl{ April / last / 1975 };

    std::cout << ymdl << '\n';

    ymdl -= months{1};
    ymdl -= years{1};

    std::cout << ymdl;
    
    return 0;
}
```

```output
1975/Apr/last
1974/Mar/last
```

## See also

[`<chrono>`](chrono.md)\
[`year`](year-class.md)\
[`year_month`](year-month-class.md)\
[`year_month_day`](year-month-day-class.md)\
[`year_month_weekday`](year-month-weekday-class.md)\
[`year_month_weekday_last`](year-month-weekday-last-class.md)\
[`operator/`](chrono-operators.md#op_/)\
[Header Files Reference](cpp-standard-library-header-files.md)