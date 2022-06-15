---
description: "Learn more about: year_month_weekday class"
title: "year_month_weekday class"
ms.date: "06/30/2021"
f1_keywords: ["chrono/std::chrono::year_month_weekday", "chrono/std::chrono::year_month_weekday::weekday", "chrono/std::chrono::year_month_weekday::month", "chrono/std::chrono::year_month_weekday::index", "chrono/std::chrono::year_month_weekday::year", "chrono/std::chrono::year_month_weekday::weekday", "chrono/std::chrono::year_month_weekday::weekday_indexed", "chrono/std::chrono::year_month_weekday::sys_days", "chrono/std::chrono::year_month_weekday::local_days", "chrono/std::chrono::year_month_weekday::ok", "chrono/std::chrono::year_month_weekday::operator+=", "chrono/std::chrono::year_month_weekday::operator-=", "chrono/std::chrono::year_month_weekday::operator local_days", "chrono/std::chrono::year_month_weekday::operator sys_days"]
helpviewer_keywords: ["std::chrono [C++], year_month_weekday"]
dev_langs: ["C++"]
---

# `year_month_weekday` class  

Represents a specific year, month, and nth weekday of the month.

## Syntax

```cpp
class year_month_weekday; // C++ 20
```

## Remarks

`year_month_weekday` supports years- and months-oriented arithmetic, but not days-oriented arithmetic. For days-oriented arithmetic, use the `sys_days` conversion to convert to a [`sys_days`](chrono.md#typedefs), which supports days-oriented arithmetic.

`year_month_weekday` is a trivially copyable and standard-layout class type.

## Members

|Name|Description|
|----------|-----------------|
| [`Constructor`](#year_month_weekday) | Construct a `year_month_weekday` with the specified month and weekday. |
| [`index`](#index) | Get the index of the weekday. |
| [`month`](#month) | Get the month value. |
| [`ok`](#ok) | Check if the `year_month_weekday` is valid. |
| [`operator+=`](#op_+=) | Add the specified number of months or years. |
| [`operator-=`](#op_-=) | Subtract the specified number of months or years. |
| [`operator local_days`](#local_days) | Get the count of days from the `system_clock` epoch to this `year_month_weekday` as [`local_days`](chrono.md#typedefs). |
| [`operator sys_days`](#sys_days) | Get the count of days from the `system_clock` epoch to this `year_month_weekday` as [`sys_days`](chrono.md#typedefs). |
| [`weekday`](#weekday) | Get the weekday. |
| [`weekday_indexed`](#weekday_indexed) | Get the [`weekday_indexed`] stored in this `year_month_weekday`. |
| [`year`](#year) | Get the year. |

## Non-members

|Name|Description|
|----------|-----------------|
| [`operator+`](chrono-operators.md#op_add) | Add months or years. |
| [`operator-`](chrono-operators.md#op_minus) | Subtract months or years. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `year_month_weekday` values are equal. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `year_month_weekday` to the given stream. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="year_month_weekday"></a> Constructor

Constructs a `year_month_weekday`.

```cpp
// 1)
year_month_weekday() = default

// 2)
constexpr year_month_weekday(const year& y, const month& m, const weekday_indexed& wdi) noexcept;

// 3) 
constexpr explicit year_month_weekday(const local_days& dp) noexcept;

// 4)
constexpr year_month_weekday(const sys_days& dp) noexcept;
```

### Parameters

*`m`*\
The [`month`](month-class.md) value.

*`dp`*\
A [`sys_days`](chrono.md#typedefs) or [`local_days`](chrono.md#typedefs)

*`wdi`*\
The [`weekday`](weekday-class.md) value.

*`y`*\
The [`year`](year-class.md) value.

### Remarks: Constructor

1\) The default constructor doesn't initialize any of the fields.

2\) Constructs a `year_month_weekday` that corresponds to the specified `year`, `month`, and `weekday_indexed`.

3\) Constructs a `year_month_weekday` that corresponds to the date represented by `sys_days{dp.time_since_epoch()}`.

4\) Constructs a `year_month_weekday` that corresponds to the date represented by *`dp`*.  For any `year_month_weekday` (ymdl) for which `ok()` is `true`, comparison with `operator==` to `year_month_weekday{sys_days{ymdl}}` will be `true`.

For information about C++ 20 syntax used to specify dates, see [`operator/`](chrono-operators.md#op_/)

### Example: Create a `year_month_weekday`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month_weekday ymw{1997y / January / Wednesday[1]};
    std::cout << ymw << '\n';
    
    return 0;
}
```

```output
1997/Jan/Wed[1]
```

## <a name="index"></a> `index`

 Get the week index of the weekday in this `year_month_weekday`. 

```cpp
constexpr unsigned index() const noexcept;
```

### Return value

The index of the weekday. For example, if the weekday was the first Wednesday of the week, the index would be 1.  

## <a name="month"></a> `month`

 Get the month value.

```cpp
constexpr month month() const noexcept;
```

### Return value

The [`month`](month-class.md) value.

## <a name="ok"></a> `ok`

Check if the value stored in this `year_month_weekday` is valid.  The `year`, `month`, and `weekday_index` stored in this `year_month_weekday` must all be `ok` for this function to return `true`. Otherwise, returns `false`.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the `year_month_weekday` value is valid. Otherwise, `false`.\
A `year_month_weekday` is valid if both the `month` is valid and the `weekday_indexed` value is valid.

## <a name="op_+="></a> `operator+=`

Add months or years to this `year_month_weekday`.

```cpp
1) constexpr year_month_weekday& operator+=(const months& m) noexcept;
2) constexpr year_month_weekday& operator+=(const years& y) noexcept;
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
    year_month_weekday ymw{1997y / January / Wednesday[1]};
    std::cout << ymw << '\n';

    ymw += months{1};
    ymw += years{1};

    std::cout << ymw << '\n';
    
    return 0;
}
```

```output
1997/Jan/Wed[1]
1998/Feb/Wed[1]
```

## <a name="op_-="></a> `operator-=`

Subtract months or years from this `year_month_weekday`.

```cpp
1) constexpr year_month_weekday& operator-=(const months& m) noexcept;
2) constexpr year_month_weekday& operator-=(const years& y) noexcept;
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
    year_month_weekday ymw{1997y / January / Wednesday[1]};
    std::cout << ymw << '\n';

    ymw -= months{1};
    ymw -= years{1};

    std::cout << ymw << '\n';
    
    return 0;
}
```

```output
1997/Jan/Wed[1]
1995/Dec/Wed[1]
```

## <a name="local_days"></a> `operator local_days`

Get the count of days from the `system_clock` epoch (1/1/1970) to this `year_month_weekday` as [`local_days`](chrono.md#typedefs)

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

If `ok()`, returns a `sys_days` that represents the date that is `(index() - 1) * 7` days after the first `weekday()` of `year()/month()`. If `index()` is `0`, the returned `sys_days` represents the date 7 days before the first `weekday()` of `year()/month()`.

## <a name="weekday"></a> `weekday`

 Get the [`weekday`](weekday-class.md) stored in the [`weekday_indexed`](weekdayindexed-class.md) stored in this `year_month_weekday`.

```cpp
constexpr weekday weekday() const noexcept;
```

### Return value

The [`weekday`](weekday-class.md) value.

## <a name="weekday_indexed"></a> `weekday_indexed`

 Get the [`weekday_indexed`](weekdayindexed-class.md) stored in this `year_month_weekday`.

```cpp
constexpr weekday_indexed weekday_indexed() const noexcept;
```

### Return value

The [`weekday_indexed`](weekdayindexed-class.md) value.

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
[`year_month_weekday_last`](year-month-weekday-last-class.md)\
[`operator/`](chrono-operators.md#op_/)
[Header Files Reference](cpp-standard-library-header-files.md)