---
description: "Learn more about: day Class"
title: "day class"
ms.date: "04/23/2021"
f1_keywords: ["chrono/std::chrono::day", "chrono/std::chrono::day::from_stream", "chrono/std::chrono::day::ok", "chrono/std::chrono::day:operator++", "chrono/std::chrono::day::operator--", "chrono/std::chorono::day::operator unsigned"]
helpviewer_keywords: ["std::chrono [C++], day"]
---
# `day` class  

Represents a day of the month. For example, the 25th day of the month.

## Syntax

```cpp
class day; // c++ 20
```

## Remarks

A `day` normally holds values in the range [1, 31]. It may hold non-negative values outside this range, but the behavior is unspecified if it isn't within the range [0, 255].

## Members

### Constructors

|Name|Description|
|----------|-----------------|
| [day](#day) | Constructs a `day` object with an uninitialized value. |
| [day(unsigned d)](#day) | Constructs a `day` object with the specified value. |

### Functions

|Name|Description|
|----------|-----------------|
| [`from_stream`](chrono-functions.md#std-chrono-from-stream) | Parse a day from the given stream using the specified format. |
| [`ok`](#ok) | Verify that the day value is in the valid range [1,31]. |

### Operators

|Name|Description|
|----------|-----------------|
| [`day::operator+`](chrono-operators.md#op_add) | Add specified number of days to this `day`, returning a new `day` object. |
| [`day::operator++`](#op_++) | Increment this `day`. |
| [`day::operator+=`](#op_+=) | Add the specified number of days to this `day`. |
| [`day::operator-`](chrono-operators.md#op_minus) | Subtract the specified number of days from this `day`, returning a new `day` object. |
| [`day::operator--`](#op_--) | Decrement the `day`. |
| [`day::operator-=`](#op_-=) | Subtract the specified number of days from this `day`  |
| [`day::operator==`](chrono-operators.md#op_eq_eq) | Determine whether two days are equal. |
| [`day::operator<=>`](chrono-operators.md#op_spaceship) | Compare this day against another day. The >, >=, <=, <, and != operators are synthesized by the compiler. |
| [`day::operator<<`](chrono-operators.md#op_left_shift) | Output a `day` to the given stream. |
| [`day::operator""d`](chrono-literals.md) | Create a `day` literal for a day in the month. |
| [`day::operator unsigned`](#op_unsigned) | Get the day value as an unsigned integer. |

## Requirements

**Header:** \<chrono> (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="day"></a> `day::day` constructor

Constructs a `day`.

```cpp
day() = default;
explicit constexpr day(unsigned d) noexcept;
```

### Parameters

*`d`*\
Construct a `day` with value *`d`*.

### Remarks

|**Constructor**  | **Description**  |
|---------|---------|
| `day() = default` | The default constructor doesn't initialize the day value. |
|  `day(unsigned d) noexcept` | Construct a `day` with the day value initialized to `d` |

## <a name="ok"></a> `day::ok`

Check if the value stored in this `day` is in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the day value is in the range [1,31]. Otherwise, `false`.

## <a name="op_++"></a> `day::operator++`

Add 1 to the day value.

```cpp
constexpr std::chrono::day& operator++() noexcept;
constexpr std::chrono::day operator++(int) noexcept;
```

### Return value

|Operator| Return value |
|----------|----------------|
|`constexpr std::chrono::day& operator++() noexcept;`| A reference to `*this` `day` *after* it has been incremented (a postfix increment).|
| `constexpr std::chrono::day operator++(int) noexcept;` | A copy of the `day`, *before* it has been incremented (a prefix increment).|

### Example: `operator++`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::day d{1};

    std::cout << d << " " << ++d << "\n"; // constexpr day& operator++() noexcept
    std::cout << d << " " << d++ << "\n"; // constexpr day operator++(int) noexcept
    std::cout << d;

    return 0;
}
```

Output:

```output
01 02
02 02
03
```

### Remarks

If the incremented result is out of the range \[0, 255], then the stored value is unspecified.

## <a name="op_--"></a> `day::operator--`

Subtract 1 from the day value.

```cpp
constexpr std::chrono::day& operator--() noexcept;
constexpr std::chrono::day operator--(int) noexcept;
```

### Return value

|Operator| Return value |
|----------|----------------|
|`constexpr std::chrono::day& operator--() noexcept;`| A reference to `*this` day *after* it has been decremented (a postfix decrement).|
| `constexpr std::chrono::day operator--(int) noexcept;` | A copy of the `*day`, *before* it has been decremented (a prefix decrement).|

### Example: `operator--`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::day d{5};
    cout << d << " " << --d << "\n"; // constexpr day& operator--() noexcept
    cout << d << " " << d-- << "\n"; // constexpr day operator--(int) noexcept
    cout << d << "\n";

    return 0;
}
```

Output:

```output
05 04
04 04
03
```

### Remarks

If the decremented result is out of the range \[0, 255], then the stored value is unspecified.

## <a name="op_+="></a> `day::operator+=`

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

## <a name="op_-="></a> `day::operator-=`

Subtract days from this `day`.

```cpp
constexpr day& operator-=(const days& d) noexcept;
```

### Parameters

*`d`*\
The number of days to subtract.

### Return value

`*this`. If the result is outside the range \[0, 255], then the stored value is unspecified.

## <a name="op_unsigned"></a> `day::operator unsigned`

Get the `day` value.

```cpp
explicit constexpr operator unsigned() const noexcept;
```

### Return value

The value of the `day`

### Example: `operator unsigned()`

```cpp
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    std::chrono::day d{14d};
    unsigned dayValue = static_cast<unsigned>(d);
    std::cout << dayValue << "\n";
    
    return 0;
}
```

Output:
```Output
14
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[`<chrono>`](../standard-library/chrono.md)