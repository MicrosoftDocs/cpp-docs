---
description: "Learn more about: month Class"
title: "month class"
ms.date: "6/25/2021"
f1_keywords: ["chrono/std::chrono::month", "chrono/std::chrono::month::January", "chrono/std::chrono::month::February", "chrono/std::chrono::month::March","chrono/std::chrono::month::April","chrono/std::chrono::month::May","chrono/std::chrono::month::June","chrono/std::chrono::month::July","chrono/std::chrono::month::August","chrono/std::chrono::month::September","chrono/std::chrono::month::October","chrono/std::chrono::month::November","chrono/std::chrono::month::December","chrono/std::chrono::month::operator++", "chrono/std::chrono::month::operator--", "chrono/std::chrono::month::operator unsigned", "chrono/std::chrono::month::ok"]
helpviewer_keywords: ["std::chrono [C++], month"]
dev_langs: ["C++"]
---
# `month` class  

Represents a month of a year. For example, July.

## Syntax

```cpp
class month; // C++ 20
```

## Remarks

A `month` normally holds values in the range [1, 12]. It can also hold non-negative values outside this range.
See [Month constants](#month-constants), below, for constants that you can use with the `month` class.

## Members

|Name|Description|
|----------|-----------------|
| [Constructors](#month) | Construct a `month`. |
| [`ok`](#ok) | Verify that the month value is in the valid range [1,12]. |
| [`operator++`](#op_++) | Increment the `month`. |
| [`operator+=`](#op_+=) | Add the specified number of months to this `month`. |
| [`operator--`](#op_--) | Decrement this `month`. |
| [`operator-=`](#op_-=) | Subtract the specified number of months from this `month`. |
| [`operator unsigned`](#op_unsigned) | Get the `month` value. |

## Non-members

| Name | Description |
|--|--|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a `month` from the given stream using the specified format. |
| [`operator+`](chrono-operators.md#op_add) | Add specified number of months to this `month`, returning a new `month` instance. |
| [`operator-`](chrono-operators.md#op_minus) | Subtract the specified number of months from this month. Returns a new `month` instance. |
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two months are equal. |
| [`operator<=>`](chrono-operators.md#op_spaceship) | Compare this month against another month. The `>, >=, <=, <, !=` operators are synthesized by the compiler. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `month` to the given stream. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="month"></a> Constructors

Construct a `month`.

```cpp
1) month() = default;
2) explicit constexpr month(unsigned m) noexcept;
```

### Parameters

*`m`*\
Construct a `month` with value *`m`*.

### Remarks

1\) The default constructor doesn't initialize the day value.\
2\) Construct a `month` with the day value initialized to `m`.

## <a name="ok"></a> `ok`

Check if the value stored in this `month` is in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the month value is in the range [1,12]. Otherwise, `false`.

## <a name="op_++"></a> `operator++`

Increment the month value.

```cpp
1) constexpr month& operator++() noexcept;
2) constexpr month operator++(int) noexcept;
```

### Return value

1\) A reference to `*this` month *after* it has been incremented (a postfix increment).\
2\) A copy of the `month`, *before* it has been incremented (a prefix increment).

### Example: `operator++`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    month m{ January };
    month m2{4}; // April

    std::cout << m << " " << ++m << "\n"; // constexpr month& operator++() noexcept
    std::cout << m << " " << m++ << "\n"; // constexpr month operator++(int) noexcept
    std::cout << m << "\n";
    std::cout << m2 << "\n";

    return 0;
}
```

```output
Jan Feb
Feb Feb
Mar
Apr
```

### Remarks

If the result exceeds 12, it's set to 1.

## <a name="op_--"></a> `operator--`

Subtract 1 from the month value.

```cpp
1) constexpr month& operator--() noexcept;
2) constexpr month operator--(int) noexcept;
```

### Return value

1\) A reference to `*this` `month` *after* it has been decremented (a postfix decrement).\
2\) A copy of the `month` *before* it has been decremented (a prefix decrement).

### Example: `operator--`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    month m{May};

    cout << m << " " << --m << "\n"; // constexpr month& operator++() noexcept
    cout << m << " " << m-- << "\n"; // constexpr month operator++(int) noexcept
    cout << m << "\n";

    return 0;
}
```

```output
May Apr
Apr Apr
Mar
```

### Remarks

If the decremented result is less than 1, it's set to 12.

## <a name="op_+="></a> `operator+=`

Add months to this `month`.

```cpp
constexpr month& operator+=(const months& m) noexcept;
```

### Parameters

*`m`*\
The number of months to add.

### Return value

`*this`

## <a name="op_-="></a> `operator-=`

Subtract `months` from this `month`.

```cpp
constexpr month& operator-=(const months& m) noexcept;
```

### Parameters

*`m`*\
The months to subtract.

### Return value

`*this`.

## <a name="op_unsigned"></a> `operator unsigned`

Get the unsigned `month` value.

```cpp
explicit constexpr operator unsigned() const noexcept;
```

### Return value

The unsigned value of this `month`

### Example: `operator unsigned()`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    month m{July};
    unsigned monthValue = static_cast<unsigned>(m);
    std::cout << monthValue << "\n";

    return 0;
}
```

```Output
7
```

### Month constants

(C++20) The `<chrono>` header defines the following constants that you can use with `month` for greater convenience, type-safety, and maintainability of your code. These constants are in scope when `std::chrono` is in scope.

```cpp
// Calendrical constants
inline constexpr month January{1};
inline constexpr month February{2};
inline constexpr month March{3};
inline constexpr month April{4};
inline constexpr month May{5};
inline constexpr month June{6};
inline constexpr month July{7};
inline constexpr month August{8};
inline constexpr month September{9};
inline constexpr month October{10};
inline constexpr month November{11};
inline constexpr month December{12};
```

## See also

[`<chrono>`](chrono.md)\
[`month_day` Class](month-day-class.md)\
[`month_day_last` Class](month-day-last-class.md)\
[`month_weekday` Class](month-weekday-class.md)\
[`month_weekday_last` class](month-weekday-last-class.md)
