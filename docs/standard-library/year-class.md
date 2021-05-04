---
description: "Learn more about: year Class"
title: "year class"
ms.date: "04/27/2021"
f1_keywords: ["chrono/std::chrono::year", "chrono/std::chrono::year::January", "chrono/std::chrono::year::February", "chrono/std::chrono::year::March","chrono/std::chrono::year::April","chrono/std::chrono::year::May","chrono/std::chrono::year::June","chrono/std::chrono::year::July","chrono/std::chrono::year::August","chrono/std::chrono::year::September","chrono/std::chrono::year::October","chrono/std::chrono::year::November","chrono/std::chrono::year::December","chrono/std::chrono::year::operator++", "chrono/std::chrono::year::operator--", "chrono/std::chrono::year::operator unsigned"]
helpviewer_keywords: ["std::chrono [C++], year"]
---
# `year` class  

Represents a year in the [Gregorian calendar](https://en.wikipedia.org/wiki/Proleptic_Gregorian_calendar).

## Syntax

```cpp
class year; // c++20
```

## Remarks

 A `year` can hold a value of -32767 to 32767.

## Members

### Constructors

|Name|Description|
|----------|-----------------|
| [year](#year) | Constructs a `year` object with an uninitialized value. |
| [year(unsigned y)](#year) | Constructs a `year` object with the specified value. |

### Functions

|Name|Description|
|----------|-----------------|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a year from a stream using the specified format. |
| [`is_leap`](#is_leap) | Determine if the year is a leap year. |
| [`max`](#max) | Returns the largest possible year value. |
| [`min`](#min) | Returns the smallest possible year value. |
| [`ok`](#ok) | Verify that the year value is in the valid range [-32767, 32767]. |

### Operators

|Name|Description|
|----------|-----------------|
| [`year::operator+`](chrono-operators.md#op_unary_plus) | Unary plus. Returns `*this`. |
| [`year::operator++`](#op_++) | Increment the year. |
| [`year::operator+=`](#op_+=) | Add the specified number of years to this `year`. |
| [`year::operator-`](chrono-operators.md#op_unary_negate) | Unary negation. |
| [`year::operator--`](#op_--) | Decrement the year. |
| [`year::operator-=`](#op_-=) | Subtract the specified number of years from this `year`. |
| [`year::operator==`](chrono-operators.md#op_eq_eq) | Determine whether two years are equal. |
| [`year::operator<=>`](chrono-operators.md#op_spaceship) | Compare this year against another year. The >, >=, <=, <, and != operators are synthesized by the compiler. |
| [`year::operator<<`](chrono-operators.md#op_left_shift) | Output a `year` to the given stream. |
| [`year::operator""y`](chrono-literals.md) | Create a `year` literal for a day in the year. |
| [`year::operator int`](#op_int) | Get the `year` value |

## Requirements

**Header:** \<chrono> (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="year"></a> `year::year` constructor

Constructs a `year`.

```cpp
year() = default;
explicit constexpr year(unsigned m) noexcept;
```

### Parameters

*`y`*\
Construct a `year` with value *`y`*.

### Remarks

|**Constructor**  | **Description**  |
|---------|---------|
| `year() = default` | The default constructor doesn't initialize the year value. |
|  `year(unsigned m) noexcept` | Construct a `year` with the specified value  |

## <a name="is_leap"></a> `year::is_leap`

Check if the value stored in this `year` is in the valid range.

```cpp
constexpr bool is_leap() const noexcept;
```

### Return value

`true` if the year value is a leap year. Otherwise, `false`.
A leap year is a year divisible by 4 but not 100, or is divisible by 400.

## <a name="max"></a> `year::max`

Returns the largest possible year.

```cpp
static constexpr std::chrono::year max() noexcept;
```

### Return value

`std::chrono::year(32767)`

## <a name="min"></a> `year::min`

Returns the smallest possible year.

```cpp
static constexpr std::chrono::year min() noexcept;
```

### Return value

## <a name="ok"></a> `year::ok`

Check if the value stored in this `year` is in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the year value is in the range [-32676, 32767]. Otherwise, `false`.

## <a name="op_++"></a> `year::operator++`

Add 1 to the year value.

```cpp
constexpr std::chrono::year& operator++() noexcept;
constexpr std::chrono::year operator++(int) noexcept;
```

### Return value

|Operator| Return value |
|----------|----------------|
|`constexpr std::chrono::year& operator++() noexcept;`| A reference to `*this` year *after* it has been incremented (a postfix increment).|
|`constexpr std::chrono::year operator++(int) noexcept;` | A copy of the `year`, *before* it has been incremented (a prefix increment).|

### Example: `operator++`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::year y{2021};

    std::cout << y << " " << ++y << "\n"; // constexpr year& operator++() noexcept
    std::cout << y << " " << y++ << "\n"; // constexpr year operator++(int) noexcept
    std::cout << y << "\n";
    return 0;
}
```

Output:
```output
2021 2022
2022 2022
2023
```

### Remarks

If the incremented result exceeds 32767, it overflows to -32768

## <a name="op_--"></a> `year::operator--`

Subtract 1 from the year value.

```cpp
constexpr std::chrono::year& operator--() noexcept;
constexpr std::chrono::year operator--(int) noexcept;
```

### Return value

|Operator| Return value |
|----------|----------------|
| `constexpr std::chrono::year& operator--() noexcept;`| A reference to `*this` `year` *after* it has been decremented (a postfix decrement).|
| `constexpr std::chrono::year operator--(int) noexcept;` | A copy of the `year` *before* it has been decremented (a prefix decrement).|

### Example: `operator--`

```cpp
#include <iostream>
#include <chrono>

int main()
{
   std::chrono::year y{2021};

    cout << y << " " << --y << "\n"; // constexpr year& operator++() noexcept
    cout << y << " " << y-- << "\n"; // constexpr year operator++(int) noexcept
    cout << y << "\n";

    return 0;
}
```

Output:

```output
2021 2020
2020 2020
2019
```

### Remarks

If the decremented result is less than -32768, it's set to 32767.

## <a name="op_+="></a> `year::operator+=`

Add days to this `year`.

```cpp
constexpr year& operator+=(const years& y) noexcept;
```

### Parameters

*`y`*\
The number of years to add.

### Return value

`*this` If the incremented result exceeds 32767, it overflows to -32768.

## <a name="op_-="></a> `year::operator-=`

Subtract days from this `year`.

```cpp
constexpr year& operator-=(const years& y) noexcept;
```

### Parameters

*`y`*\
The number of years to subtract.

### Return value

`*this`. If the decremented result is less than -32768, it's set to 32767.


## <a name="op_int"></a> `year::operator int`

Get the `year` value.

```cpp
explicit constexpr operator int() const noexcept;
```

### Return value

The value of the `year`

### Example: `operator int()`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::year y{2020};
    int yearValue = static_cast<int>(y);
    std::cout << yearValue;

    return 0;
}
```

Output:
```Output
2020
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[`<chrono>`](../standard-library/chrono.md)