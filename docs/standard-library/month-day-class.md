---
description: "Learn more about: month_day Class"
title: "month_day class"
ms.date: "6/4/2021"
f1_keywords: ["chrono/std::chrono::month_day", "chrono/std::chrono::month_day::day", "chrono/std::chrono::month_day::month", "chrono/std::chrono::month_day::ok"]
helpviewer_keywords: ["std::chrono [C++], month_day"]
---

# `month_day` class  

Represents a specific day of a specific month. The year isn't specified.

## Syntax

```cpp
class month_day; // C++20
```

## Members

| Name | Description |
|--|--|
| [Constructors](#month_day) | Construct a `month_day`. |
| [`day`](#day) | Return the day value. |
| [`month`](#month) | Return the month value. |
| [`ok`](#ok) | Check if the `month_day` is valid. |

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `month_day` from the given stream using the specified format. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two months are equal. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare this month against another month. The `>, >=, <=, <, !=` operators are synthesized by the compiler. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `month_day` to the given stream. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="month_day"></a> Constructors

Construct a `month_day`.

```cpp
1) month_day() = default;
2) constexpr month_day(const month& m, const day& d) noexcept;
```

### Parameters

*`d`*\
Construct a `month_day` with a day value of *`d`*.

*`m`*\
Construct a `month_day` with a month value of *`m`*.

### Remarks

1\) The default constructor doesn't initialize the month or day values.\
2\) Construct a `month_day` with the month value initialized to `m` and the day value initialized to `d`.

### Example: Create a `month_day`

```cpp
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    month m(7);
    day d(30);
    month_day md(m, d);

    month_day md2 = July/30; // a convenient way to construct a month_day

    std::cout << md << ' ' << md2;
    return 0;
}
```

```output
Jul/30 Jul/30
```

## <a name="day"></a> `day`

 Return the day value.

```cpp
constexpr day day() const noexcept;
```

### Return value

The day value.

## <a name="month"></a> `month`

 Return the month value.

```cpp
constexpr month month() const noexcept;
```

### Return value

The month value.

## <a name="ok"></a> `ok`

Check if the value stored in this `month_day` is valid.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the `month_day` value is valid. Otherwise, `false`.\
A `month_day` is valid if the month is valid and the day is less than or equal to the number of days in that month. February has 29 days.

## See also

[`<chrono>`](chrono.md)\
[`month` class](month-class.md)\
[`month_day_last` class](month-day-last-class.md)\
[`month_weekday` class](month-weekday-class.md)\
[`month_weekday_last` class](month-weekday-last-class.md)