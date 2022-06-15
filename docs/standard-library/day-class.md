---
description: "Learn more about: day Class"
title: "day class"
ms.date: 09/07/2021
f1_keywords: ["chrono/std::chrono::day", "chrono/std::chrono::day::ok", "chrono/std::chrono::day:operator++", "chrono/std::chrono::day::operator--", "chrono/std::chrono::day::operator unsigned"]
helpviewer_keywords: ["std::chrono [C++], day"]
dev_langs: ["C++"]
---
# `day` class  

Represents a day of the month. For example, the 25th day of the month.

## Syntax

```cpp
class day; // C++ 20
```

## Remarks

A `day` normally holds values in the range [1, 31]. It may hold non-negative values outside this range, but the behavior is unspecified if it isn't within the range [0, 255].

## Members

|Name|Description|
|----------|-----------------|
| [Constructors](#day) | Construct a `day`. |
| [`ok`](#ok) | Verify that the day value is in the valid range [1,31]. |
| [`operator++`](#op_++) | Increment this `day`. |
| [`operator+=`](#op_+=) | Add the specified number of days to this `day`. |
| [`operator--`](#op_--) | Decrement the `day`. |
| [`operator-=`](#op_-=) | Subtract the specified number of days from this `day`  |
| [`operator unsigned`](#op_unsigned) | Get the day value as an unsigned integer. |

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `day` from the given stream using the specified format. |
| [`operator+`](chrono-operators.md#op_add) | Add specified number of days to this `day`, returning a new `day` object. |
| [`operator-`](chrono-operators.md#op_minus) | Subtract the specified number of days from this `day`, returning a new `day` object. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `day` instances are equal. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare this `day` against another `day`. The `>, >=, <=, <, !=` operators are synthesized by the compiler. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `day` to the given stream. |
| [`operator""d`](chrono-literals.md) | Create a `day` literal for a day in the month. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="day"></a> Constructors

Constructs a `day`.

```cpp
1) day() = default;
2) explicit constexpr day(unsigned d) noexcept;
```

### Parameters

*`d`*\
Construct a `day` with value *`d`*.

### Remarks

1\) The default constructor doesn't initialize the day value.\
2\) Construct a `day` with the day value initialized to `d`.

### Example: Create a `day`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    day d{1}; // day 1
    day d2 = 2d; // day 2

    std::cout << d << ", " << d2;

    return 0;
}
```

```output
01, 02
```

## <a name="ok"></a> `ok`

Check if the value stored in this `day` is in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the day value is in the range [1,31]. Otherwise, `false`.

## <a name="op_++"></a> `operator++`

Add 1 to the day value.

```cpp
1) constexpr std::chrono::day& operator++() noexcept;
2) constexpr std::chrono::day operator++(int) noexcept;
```

### Return value

1\) A reference to `*this` `day` *after* it has been incremented (a postfix increment).\
2\) A copy of the `day`, *before* it has been incremented (a prefix increment).

### Example: `operator++`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    day d{1};

    std::cout << d << " " << ++d << "\n"; // constexpr day& operator++() noexcept
    std::cout << d << " " << d++ << "\n"; // constexpr day operator++(int) noexcept
    std::cout << d;

    return 0;
}
```

```output
01 02
02 02
03
```

### Remarks

If the incremented result is out of the range \[0, 255], then the stored value is unspecified.

## <a name="op_--"></a> `operator--`

Subtract 1 from the day value.

```cpp
1) constexpr std::chrono::day& operator--() noexcept;
2) constexpr std::chrono::day operator--(int) noexcept;
```

### Return value

1\) A reference to `*this` day *after* it has been decremented (a postfix decrement).\
2\) A copy of the `*day`, *before* it has been decremented (a prefix decrement).

### Example: `operator--`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

int main()
{
    day d{5};
    std::cout << d << " " << --d << "\n"; // constexpr day& operator--() noexcept
    std::cout << d << " " << d-- << "\n"; // constexpr day operator--(int) noexcept
    std::cout << d << "\n";

    return 0;
}
```

```output
05 04
04 04
03
```

### Remarks

If the decremented result is out of the range \[0, 255], then the stored value is unspecified.

## <a name="op_+="></a> `operator+=`

Add days to this `day`.

```cpp
constexpr day& operator+=(const days& d) noexcept;
```

### Parameters

*`d`*\
The number of days to add.

### Return value

`*this`

If the result is outside the range \[0, 255], then the stored value is unspecified.

## <a name="op_-="></a> `operator-=`

Subtract days from this `day`.

```cpp
constexpr day& operator-=(const days& d) noexcept;
```

### Parameters

*`d`*\
The number of days to subtract.

### Return value

`*this`. If the result is outside the range \[0, 255], then the stored value is unspecified.

## <a name="op_unsigned"></a> `operator unsigned`

Get the `day` value.

```cpp
explicit constexpr operator unsigned() const noexcept;
```

### Return value

The value of the `day`

### Example: `operator unsigned()`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

int main()
{
    chrono::day d{14d};
    unsigned dayValue = static_cast<unsigned>(d);
    cout << dayValue << "\n";
    
    return 0;
}
```

```Output
14
```

## See also

[`<chrono>`](../standard-library/chrono.md)\
[`month_day` class](month-day-class.md)\
[`month_day_last` class](month-day-last-class.md)\
[`year_month_day`](year-month-day-class.md)\
[`year_month_day_last`](year-month-day-last-class.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)