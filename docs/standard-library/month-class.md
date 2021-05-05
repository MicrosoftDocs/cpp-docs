---
description: "Learn more about: month Class"
title: "month class"
ms.date: "04/26/2021"
f1_keywords: ["chrono/std::chrono::month", "chrono/std::chrono::month::January", "chrono/std::chrono::month::February", "chrono/std::chrono::month::March","chrono/std::chrono::month::April","chrono/std::chrono::month::May","chrono/std::chrono::month::June","chrono/std::chrono::month::July","chrono/std::chrono::month::August","chrono/std::chrono::month::September","chrono/std::chrono::month::October","chrono/std::chrono::month::November","chrono/std::chrono::month::December","chrono/std::chrono::month::operator++", "chrono/std::chrono::month::operator--", "chrono/std::chrono::month::operator unsigned", "chrono/std::chrono::month::ok"]
helpviewer_keywords: ["std::chrono [C++], month"]
---
# `month` class  

Represents a month of a year. For example, July.

## Syntax

```cpp
class month; // c++ 20
```

## Remarks

A `month` normally holds values in the range [1, 12]. It can also hold non-negative values outside this range.
See [Month constants](#month-constants), below, for constants that you can use with the `month` class.

## Members

### Constructors

|Name|Description|
|----------|-----------------|
| [month](#month) | Constructs a `month` object with an uninitialized value. |
| [month(unsigned m)](#month) | Constructs a `month` object with the specified value. |

### Functions

|Name|Description|
|----------|-----------------|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a month from the given stream using the specified format. |
| [`ok`](#ok) | Verify that the month value is in the valid range [1,31]. |

### Operators

|Name|Description|
|----------|-----------------|
| [`month::operator+`](chrono-operators.md#op_add) | Add specified number of months to this `month`, returning a new `month` instance. |
| [`month::operator++`](#op_++) | Increment the `month`. |
| [`month::operator+=`](#op_+=) | Add the specified number of months to this `month`. |
| [`month::operator-`](chrono-operators.md#op_minus) | Subtract the specified number of months from this month. Returns a new `month` instance. |
| [`month::operator--`](#op_--) | Decrement this `month`. |
| [`month::operator-=`](#op_-=) | Subtract the specified number of months from this `month`. |
| [`month::operator==`](chrono-operators.md#op_eq_eq) | Determine whether two months are equal. |
| [`month::operator<=>`](chrono-operators.md#op_spaceship) | Compare this month against another month. The >, >=, <=, <, and != operators are synthesized by the compiler. |
| [`month::operator<<`](chrono-operators.md#op_left_shift) | Output a `month` to the given stream. |
| [`month::operator unsigned`](#op_unsigned) | Get the `month` value |

## Requirements

**Header:** \<chrono> (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="month"></a> `month::month` constructor

Constructs a `month`.

```cpp
month() = default;
explicit constexpr month(unsigned m) noexcept;
```

### Parameters

*`m`*\
Construct a `month` with value *`m`*.

### Remarks

|**Constructor**  | **Description**  |
|---------|---------|
| `month() = default` | The default constructor doesn't initialize the day value. |
|  `month(unsigned m) noexcept` | Construct a `month` with the day value initialized to `m` |

## <a name="ok"></a> `month::ok`

Check if the value stored in this `month` is in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the month value is in the range [1,12]. Otherwise, `false`.

## <a name="op_++"></a> `month::operator++`

Increment the month value.

```cpp
constexpr std::chrono::month& operator++() noexcept;
constexpr std::chrono::month operator++(int) noexcept;
```

### Return value

|Operator| Return value |
|----------|----------------|
|`constexpr std::chrono::month& operator++() noexcept;`| A reference to `*this` month *after* it has been incremented (a postfix increment).|
|`constexpr std::chrono::month operator++(int) noexcept;` | A copy of the `month`, *before* it has been incremented (a prefix increment).|

### Example: `operator++`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::month m{1};

    std::cout << m << " " << ++m << "\n"; // constexpr month& operator++() noexcept
    std::cout << m << " " << m++ << "\n"; // constexpr month operator++(int) noexcept
    std::cout << m << "\n";

    return 0;
}
```

Output:
```output
Jan Feb
Feb Feb
Mar
```

### Remarks

If the result exceeds 12, it's set to 1.

## <a name="op_--"></a> `month::operator--`

Subtract 1 from the month value.

```cpp
constexpr std::chrono::month& operator--() noexcept;
constexpr std::chrono::month operator--(int) noexcept;
```

### Return value

|Operator| Return value |
|----------|----------------|
| `constexpr std::chrono::month& operator--() noexcept;`| A reference to `*this` `month` *after* it has been decremented (a postfix decrement).|
| `constexpr std::chrono::month operator--(int) noexcept;` | A copy of the `month` *before* it has been decremented (a prefix decrement).|

### Example: `operator--`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::month m{5};

    cout << m << " " << --m << "\n"; // constexpr month& operator++() noexcept
    cout << m << " " << m-- << "\n"; // constexpr month operator++(int) noexcept
    cout << m << "\n";

    return 0;
}
```

Output:

```output
May Apr
Apr Apr
Mar
```

### Remarks

If the decremented result is less than 1, it's set to 12.

## <a name="op_+="></a> `month::operator+=`

Add months to this `month`.

```cpp
constexpr month& operator+=(const months& m) noexcept;
```

### Parameters

*`m`*\
The number of months to add.

### Return value

`*this`

## <a name="op_-="></a> `day::operator-=`

Subtract months from this `month`.

```cpp
constexpr month& operator-=(const months& m) noexcept;
```

### Parameters

*`m`*\
The number of months to subtract.

### Return value

`*this`.

## <a name="op_unsigned"></a> `month::operator unsigned`

Get the `month` value.

```cpp
explicit constexpr operator unsigned() const noexcept;
```

### Return value

The value of the `month`

### Example: `operator unsigned()`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::month m{July};
    unsigned monthValue = static_cast<unsigned>(m);
    std::cout << monthValue << "\n";

    return 0;
}
```

Output:
```Output
7
```

### Month constants

(C++20) The <chrono> header defines the following constants that you can use with `month` for greater convenience, type-safety, and maintainability of your code. These constants are in scope when std::chrono is in scope.

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

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[`<chrono>`](../standard-library/chrono.md)