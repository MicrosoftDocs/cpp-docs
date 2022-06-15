---
description: "Learn more about: year_month_weekday_last class"
title: "year_month_weekday_last class"
ms.date: "06/30/2021"
f1_keywords: ["chrono/std::chrono::year_month_weekday_last", "chrono/std::chrono::year_month_weekday_last::month", "chrono/std::chrono::year_month_weekday_last::year", "chrono/std::chrono::year_month_weekday_last::weekday", "chrono/std::chrono::year_month_weekday_last::weekday_last", "chrono/std::chrono::year_month_weekday_last::sys_days", "chrono/std::chrono::year_month_weekday_last::local_days", "chrono/std::chrono::year_month_weekday_last::ok", "chrono/std::chrono::year_month_weekday_last::operator+=", "chrono/std::chrono::year_month_weekday_last::operator-=", "chrono/std::chrono::year_month_weekday_last::operator local_days", "chrono/std::chrono::year_month_weekday_last::operator sys_days"]
helpviewer_keywords: ["std::chrono [C++], year_month_weekday_last"]
dev_langs: ["C++"]
---

# `year_month_weekday_last` class  

A specific year, month, and last weekday of the month.

## Syntax

```cpp
class year_month_weekday_last; // C++ 20
```

## Remarks

`year_month_weekday_last` supports years- and months-oriented arithmetic, but not days-oriented arithmetic. For days-oriented arithmetic, use the `sys_days` conversion to convert to a [`sys_days`](chrono.md#typedefs), which supports days-oriented arithmetic.

`year_month_weekday_last` is a trivially copyable and standard-layout class type.

## Members

|Name|Description|
|----------|-----------------|
| [`Constructor`](#year_month_weekday_last) | Construct a `year_month_weekday_last` with the specified month and weekday. |
| [`month`](#month) | Get the month value. |
| [`ok`](#ok) | Check if the `year_month_weekday_last` is valid. |
| [`operator+=`](#op_+=) | Add the specified number of months or years. |
| [`operator-=`](#op_-=) | Subtract the specified number of months or years. |
| [`operator local_days`](#local_days) | Get the count of days from the `system_clock` epoch to this `year_month_weekday_last` as [`local_days`](chrono.md#typedefs). |
| [`operator sys_days`](#sys_days) | Get the count of days from the `system_clock` epoch to this `year_month_weekday_last` as [`sys_days`](chrono.md#typedefs). |
| [`weekday`](#weekday) | Get the weekday. |
| [`weekday_last`](#weekday_last) | Get the `weekday_last` stored in this `year_month_weekday_last`. |
| [`year`](#year) | Get the year. |

## Non-members

|Name|Description|
|----------|-----------------|
| [`operator+`](chrono-operators.md#op_add) | Add months or years. |
| [`operator-`](chrono-operators.md#op_minus) | Subtract months or years. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `year_month_weekday_last` values are equal. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `year_month_weekday_last` to the given stream. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="year_month_weekday_last"></a> Constructor

Constructs a `year_month_weekday_last`.

```cpp
constexpr year_month_weekday_last(const year& y, const month& m, const weekday_last& wdl) noexcept
```

### Parameters

*`m`*\
The [`month`](month-class.md) value.

*`wdl`*\
The [`weekday_last`](weekdaylast-class.md) value.

*`y`*\
The [`year`](year-class.md) value.

For information about C++ 20 syntax used to specify dates, see [`operator/`](chrono-operators.md#op_/)

### Example: Create a `year_month_weekday_last`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_weekday_last ymwl{ 1997y / January / Wednesday[last] };
    std::cout << ymwl << '\n';
    
    return 0;
}
```

```output
1997/Jan/Wed[last]
```

## <a name="month"></a> `month`

 Get the month value.

```cpp
constexpr month month() const noexcept;
```

### Return value

The [`month`](month-class.md) value.

## <a name="ok"></a> `ok`

Check if the value stored in this `year_month_weekday_last` is valid.  The `year`, `month`, and `weekday_last` stored in this `year_month_weekday_last` must all be `ok` for this function to return `true`. Otherwise, returns `false`.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the `year_month_weekday_last` value is valid. Otherwise, `false`.\
A `year_month_weekday_last` is valid if the `month`, `weekday_indexed`, and `year` are all valid.

## <a name="op_+="></a> `operator+=`

Add months or years to this `year_month_weekday_last`.

```cpp
1) constexpr year_month_weekday_last& operator+=(const months& m) noexcept;
2) constexpr year_month_weekday_last& operator+=(const years& y) noexcept;
```

### Parameters

*`m`*\
The number of months to add.

*`y`*\
The number of years to add.

### Return value

`*this` which reflects the result of the addition.

### Example: `operator+=`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_weekday_last ymwl{ year(1997) / January / Wednesday[last] };
    std::cout << ymwl << '\n';

    ymwl += months{ 1 };
    ymwl += years{ 1 };

    std::cout << ymwl << '\n';
    
    return 0;
}
```

```output
1997/Jan/Wed[last]
1998/Feb/Wed[last]
```

## <a name="op_-="></a> `operator-=`

Subtract months or years from this `year_month_weekday_last`.

```cpp
1) constexpr year_month_weekday_last& operator-=(const months& m) noexcept;
2) constexpr year_month_weekday_last& operator-=(const years& y) noexcept;
```

### Parameters

*`m`*\
The number of months to subtract.

*`y`*\
The number of years to subtract.

### Return value

`*this` which reflects the result of the subtraction.

### Example: `operator-=`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_weekday_last ymwl{ year(1997) / January / Wednesday[last] };
    std::cout << ymwl << '\n';

    ymwl -= months{ 1 };
    ymwl -= years{ 1 };

    std::cout << ymwl << '\n';
    
    return 0;
}
```

```output
1997/Jan/Wed[last]
1995/Dec/Wed[last]
```

## <a name="local_days"></a> `operator local_days`

Get the count of days from the `system_clock` epoch (1/1/1970) to this `year_month_weekday_last` as [`local_days`](chrono.md#typedefs)

```cpp
constexpr explicit operator local_days() const noexcept;
```

### Return value

If `ok()`, returns a count of days as `local_days{sys_days{*this}.time_since_epoch()}`. Otherwise the returned value is unspecified.

## <a name="sys_days"></a> `operator sys_days`

Get the count of days from the `system_clock` epoch (1/1/1970) to this `year_month_day` as [`sys_days`](chrono.md#typedefs).

```cpp
constexpr operator sys_days() const noexcept;
```

### Return value

If `ok() == true`, returns a `sys_days` that represents the last `weekday()` of `year() / month()` (note: the `/` is the date operator, not a division). Otherwise the returned value is unspecified.

## <a name="weekday"></a> `weekday`

 Get the [`weekday`](weekday-class.md).

```cpp
constexpr weekday weekday() const noexcept;
```

### Return value

The [`weekday`](weekday-class.md).

## <a name="weekday_last"></a> `weekday_last`

 Get the [`weekday_last`](weekdaylast-class.md) stored in this `year_month_weekday_last`.

```cpp
constexpr weekday_indexed weekday_last() const noexcept;
```

### Return value

The [`weekday_last`](weekdaylast-class.md).

## <a name="year"></a> `year`

 Get the year value.

```cpp
constexpr year year() const noexcept;
```

### Return value

The [`year`](year-class.md) value.

## See also

[`<chrono>`](chrono.md)\
[`year`](year-class.md)\
[`year_month`](year-month-class.md)\
[`year_month_day`](year-month-day-class.md)\
[`year_month_day_last`](year-month-day-last-class.md)\
[`year_month_weekday`](year-month-weekday-class.md)\
[`operator/`](chrono-operators.md#op_/)\
[Header Files Reference](cpp-standard-library-header-files.md)