---
description: "Learn more about: year Class"
title: "year class"
ms.date: "06/28/2021"
f1_keywords: ["chrono/std::chrono::year", "chrono/std::chrono::year::operator++", "chrono/std::chrono::year::operator--", "chrono/std::chrono::year::operator+=", "chrono/std::chrono::year::operator-=", "chrono/std::chrono::year::operator int", "chrono/std::chrono::year::is_leap", "chrono/std::chrono::year::max", "chrono/std::chrono::min", "chrono/std::chrono::year::ok"]
helpviewer_keywords: ["std::chrono [C++], year"]
---
# `year` class  

Represents a year in the [Gregorian calendar](https://en.wikipedia.org/wiki/Proleptic_Gregorian_calendar).

## Syntax

```cpp
class year; // C++20
```

## Remarks

 A `year` can hold a year value between -32767 to 32767.

## Members

| Name | Description |
|--|--|
| [Constructors](#year) | Construct a `year` |
| [`is_leap`](#is_leap) | Determine if the year is a leap year. |
| [`max`](#max) | Returns the largest possible year value. |
| [`min`](#min) | Returns the smallest possible year value. |
| [`ok`](#ok) | Verify that the year value is in the valid range [-32767, 32767]. |
| [`operator+`](#op_unary+) | Unary plus. |
| [`operator++`](#op_++) | Increment the year. |
| [`operator+=`](#op_+=) | Add the specified number of years to this `year`. |
| [`operator-`](#op_unary-) | Unary minus. |
| [`operator--`](#op_--) | Decrement the year. |
| [`operator-=`](#op_-=) | Subtract the specified number of years from this `year`. |
| [`operator int`](#op_int) | Get the `year` value. |

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `year` from a stream using the specified format |
| [`operator+`](chrono-operators.md#op_add) | Add years. |
| [`operator-`](chrono-operators.md#op_minus) | Subtract years. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two years are equal. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare this `year` against another `year`. The `>, >=, <=, <, !=` operators are synthesized by the compiler. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `year` to the given stream. |
| [`operator""y`](chrono-literals.md) | Create a `year` literal. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="year"></a> Constructors

Construct a `year`.

```cpp
1) year() = default;
2) explicit constexpr year(unsigned y) noexcept;
```

### Parameters

*`y`*\
Construct a `year` with value *`y`*.

### Remarks

1\) The default constructor doesn't initialize the `year` value.\
2\) Construct a `year` with the specified value.

### Example: Create a `year`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year y{2020};
    year y2 = 2021y;
    
    std::cout << y << ", " << y2;

    return 0;
}
```

```output
2020, 2021
```

## <a name="is_leap"></a> `is_leap`

Check if the value stored in this `year` is in the valid range.

```cpp
constexpr bool is_leap() const noexcept;
```

### Return value

`true` if the year value is a leap year. Otherwise, `false`.
A leap year is a year divisible by 4 but not 100--or is divisible by 400.

## <a name="max"></a> `max`

Returns the largest possible year.

```cpp
static constexpr year max() noexcept;
```

### Return value

`year{32767}`

## <a name="min"></a> `min`

Returns the smallest possible year.

```cpp
static constexpr year min() noexcept;
```

### Return value

`year{-32767}`

## <a name="ok"></a> `ok`

Check if the value stored in this `year` is in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the year value is in the range [-32676, 32767]. Otherwise, `false`.

## <a name="op_unary+"></a> `operator+`

Apply unary plus.

```cpp
constexpr year operator+() const noexcept;
```

### Return value

Returns `*this`

### Example: unary `operator+`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
   year y{-1};
   std::cout << +y;
   return 0;
}
```

```output
-0001
```

## <a name="op_++"></a> `operator++`

Add 1 to the year value.

```cpp
1) constexpr year& operator++() noexcept;
2) constexpr year operator++(int) noexcept;
```

### Return value

1\) Returns reference to this year *after* it has been incremented (a postfix increment).\
2\) Returns a copy of the `year`, *before* it has been incremented (a prefix increment).

### Example: `operator++`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year y{2021};

    std::cout << y << " " << ++y << "\n"; // constexpr year& operator++() noexcept
    std::cout << y << " " << y++ << "\n"; // constexpr year operator++(int) noexcept
    std::cout << y << "\n";
    return 0;
}
```

```output
2021 2022
2022 2022
2023
```

### Remarks

If the incremented result exceeds 32767, it overflows to -32768

## <a name="op_unary-"></a> `operator-`

Unary minus. Negate the `year`.

```cpp
constexpr year operator-() const noexcept; // C++ 20
```

### Return value

Returns a negated copy of the `year`.

### Example: unary `operator-`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
   year y{1977};
   std::cout << -y << '\n';

   return 0;
}
```

```output
-1977
```

## <a name="op_--"></a> `operator--`

Subtract 1 from the year value.

```cpp
1) constexpr year& operator--() noexcept;
2) constexpr year operator--(int) noexcept;
```

### Return value

1\) A reference to this `year` *after* it has been decremented (a postfix decrement).\
2\) A copy of the `year` *before* it has been decremented (a prefix decrement).

### Example: `operator--`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
   year y{2021};

    std::cout << y << " " << --y << "\n"; // constexpr year& operator++() noexcept
    std::cout << y << " " << y-- << "\n"; // constexpr year operator++(int) noexcept
    std::cout << y << "\n";

    return 0;
}
```

```output
2021 2020
2020 2020
2019
```

### Remarks

If the decremented result is less than -32768, it's set to 32767.

## <a name="op_+="></a> `operator+=`

Add days to this `year`.

```cpp
constexpr year& operator+=(const years& y) noexcept;
```

### Parameters

*`y`*\
The number of years to add.

### Return value

`*this` If the incremented result exceeds 32767, it overflows to -32768.

## <a name="op_-="></a> `operator-=`

Subtract days from this `year`.

```cpp
constexpr year& operator-=(const years& y) noexcept;
```

### Parameters

*`y`*\
The number of years to subtract.

### Return value

`*this`. If the decremented result is less than -32768, it's set to 32767.

## <a name="op_int"></a> `operator int`

Get the `year` value.

```cpp
explicit constexpr operator int() const noexcept;
```

### Return value

The value of the `year`

### Example: `operator int()`

```cpp
// compile using: /std:c++latest

 #include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    year y{2020};
    int yearValue = static_cast<int>(y);
    std::cout << yearValue;

    return 0;
}
```

```Output
2020
```

## See also

[`<chrono>`](chrono.md)\
[`year_month`](year-month-class.md)\
[`year_month_day`](year-month-day-class.md)\
[`year_month_day_last`](year-month-day-last-class.md)\
[`year_month_weekday`](year-month-weekday-class.md)\
[`year_month_weekday_last`](year-month-weekday-last-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)