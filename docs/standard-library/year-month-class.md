---
description: "Learn more about: year_month class"
title: "year_month class"
ms.date: "06/28/2021"
f1_keywords: ["chrono/std::chrono::year_month", "chrono/std::chrono::year_month::operator+=", "chrono/std::chrono::year_month::operator-=", "chrono/std::chrono::year_month::ok"]
helpviewer_keywords: ["std::chrono [C++], year_month"]
dev_langs: ["C++"]
---
# `year_month` class  

Represents a month and year. The day isn't specified.

## Syntax

```cpp
class year_month; // C++20
```

## Members

| Name | Description |
|--|--|
| [Constructors](#year_month) | Construct a `year_month` |
| [`year`](#year) | Returns the year. |
| [`month`](#month) | Returns the month. |
| [`ok`](#ok) | Verify that the [`year`](year-class.md) and [`month`](month-class.md) values are in the valid range. |
| [`operator+=`](#op_+=) | Add the specified number of months or years. |
| [`operator-=`](#op_-=) | Subtract the specified number of months or years. |

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `year_month` from a stream using the specified format |
| [`operator+`](chrono-operators.md#op_add) | Add months and/or years. |
| [`operator-`](chrono-operators.md#op_minus) | Subtract months and/or years. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `year_month` values are equal. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare two `year_month` values. The `>, >=, <=, <, !=` operators are synthesized by the compiler. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `year_month` to a stream. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="year_month"></a> Constructors

Construct a `year_month`.

```cpp
1) year_month() = default;
2) constexpr year_month(const year& y, const month& m) noexcept;
```

### Parameters

*`y`*\
The [`year`](year-class.md) value.

*`m`*\
The [`month`](month-class.md) value.

### Remarks

1\) The default constructor doesn't initialize the `year` or `month` value.\
2\) Construct a `year_month` with the specified values.

For information about C++ 20 syntax to specify dates, see [`operator/`](chrono-operators.md#op_/)

### Example: Create a `year_month`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month ym{2021y / June};

    std::cout << ym;
    return 0;
}
```

```output
2021/Jun
```

## <a name="month"></a> `month`

Get the month.

```cpp
constexpr month month() const noexcept;
```

### Return value

The [`month`](month-class.md) value.

## <a name="year"></a> `year`

Get the year.

```cpp
constexpr year year() const noexcept;
```

### Return value

The [`year`](year-class.md).

## <a name="ok"></a> `ok`

Check if the year and month value stored in this `year_month` are both in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the `year_month` year and month values are in the valid range. Otherwise, `false`.

## <a name="op_+="></a> `operator+=`

Add months or years to this `year_month`.

```cpp
1) constexpr year_month& operator+=(const months& dm) noexcept;
2) constexpr year_month& operator+=(const years& dy) noexcept;
```

### Parameters

*`dm`*\
The number of months to add.

*`dy`*\
The number of years to add.

### Return value

`*this`, which reflects the result of the addition.

### Example: `operator +=`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month ym{2021y / June};

    std::cout << ym << '\n';

    ym += months{2};
    ym += years{1};

    std::cout << ym;
    
    return 0;
}
```

```output
2021/Jun
2022/Aug
```

## <a name="op_-="></a> `operator-=`

Subtract months or years from this `year_month`.

```cpp
1) constexpr year_month& operator-=(const months& dm) noexcept;
2) constexpr year_month& operator-=(const years& dy) noexcept;
```

### Parameters

*`dm`*\
The number of months to subtract.

*`dy`*\
The number of years to subtract.

### Return value

`*this`, which reflects the result of the subtraction.

### Example: `operator -=`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year_month ym{2021y / June};

    std::cout << ym << '\n';

    ym -= months{2};
    ym -= years{1};

    std::cout << ym;
    
    return 0;
}
```

```output
2021/Jun
2020/Apr
```

## See also

[`<chrono>`](chrono.md)\
[`year`](year-class.md)\
[`year_month_day`](year-month-day-class.md)\
[`year_month_day_last`](year-month-day-last-class.md)\
[`year_month_weekday`](year-month-weekday-class.md)\
[`year_month_weekday_last`](year-month-weekday-last-class.md)\
[`operator/`](chrono-operators.md#op_/)\
[Header Files Reference](cpp-standard-library-header-files.md)