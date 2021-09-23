---
description: "Learn more about: weekday_indexed Class"
title: "weekday_indexed class"
ms.date: "06/25/2021"
f1_keywords: ["chrono/std::chrono::weekday_indexed", "chrono/std::chrono::weekday_indexed::ok", "std::chrono::weekday_indexed::weekday", "std::chrono::weekday_indexed::ok"]
helpviewer_keywords: ["std::chrono [C++], weekday_indexed"]
---
# `weekday_indexed` class  

Combines a weekday, representing a day of the week in the Gregorian calendar, with an index in the range [1, 5] that represents the weekday of the month (1st, 2nd, 3rd, and so on).

## Syntax

```cpp
class weekday_indexed; // C++20
```

## Remarks

 `weekday_indexed` is a trivially copyable and standard-layout class type.

## Members

|Name|Description|
|----------|-----------------|
| [Constructors](#weekday_indexed) | Construct a `weekday_indexed` with the specified weekday and value. |
| [`ok`](#ok) | Check if the weekday value is valid. |
| [`weekday`](#weekday) | Get the weekday value. |

### Non-members

|Name|Description|
|----------|-----------------|
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `weekday_indexed` instances are equal. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a  `weekday_indexed` to the specified stream. |

## Requirements

**Header:** `<chrono>` Since C++ 20

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="weekday_indexed"></a> Constructor

Constructs a `weekday_indexed` initialized with a `weekday` value and an index.

```cpp
constexpr weekday_indexed(const chrono::weekday& wd, unsigned index) noexcept; // C++20
```

### Parameters

*`wd`*\
The weekday value for the created `weekday_indexed` class.

*`index`*\
The weekday of the month that the weekday lands on. It is in the range \[1, 5].  For example, 2 indicates that the weekday lands on the second week of the month.

### Example: Create a `weekday_indexed`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
   constexpr auto wdi = weekday_indexed{Monday, 1};
   constexpr auto wdi2 = Monday[1];

    std::cout << wdi << ", " << wdi2;
    return 0;
}
```

```output
Mon[1], Mon[1]
```

## <a name="ok"></a> `ok`

Check if the value stored in this `weekday_indexed` is in the valid range.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the week weekday value is in the valid range. Otherwise, `false`.

## <a name="weekday"></a> `weekday`

 Get the weekday value.

```cpp
constexpr chrono::weekday weekday() const noexcept;
```

### Return value

The weekday value.

### Example

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

int main()
{
    constexpr auto wdi = weekday_indexed{ Monday, 1 };
	std::cout << wdi << "\n";

    return 0;
}
```

```output
Mon[1]
```

## See also

[`weekday` class](weekday-class.md)\
[`weekday_last` class](weekdaylast-class.md)\
[`<chrono>`](chrono.md)\
[Header Files Reference](cpp-standard-library-header-files.md)