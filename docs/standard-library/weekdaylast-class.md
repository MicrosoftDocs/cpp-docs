---
description: "Learn more about: weekday_last Class"
title: "weekday_last class"
ms.date: "06/28/2021"
f1_keywords: ["chrono/std::chrono::weekday_last", "chrono/std::chrono::weekday_last::ok", "std::chrono::weekday_last::weekday", "chrono/std::chrono::weekday_last::ok", "chrono/std::chrono::weekday_last::weekday"]
helpviewer_keywords: ["std::chrono [C++], weekday_last"]
---

# `weekday_last` class  

Represents the last weekday of a month.

## Syntax

```cpp
class weekday_last; // C++20
```

## Remarks

 `weekday_last` is a trivially copyable and standard-layout class type.

## Members

### Constructor

|Name|Description|
|----------|-----------------|
| [weekday_last](#weekday_last) | Constructs a `weekday_last` with the specified weekday value. |

### Functions

|Name|Description|
|----------|-----------------|
| [`ok`](#ok) | Check if the weekday value is valid. |
| [`weekday`](#weekday) | Get the weekday value. |

### Operators

|Name|Description|
|----------|-----------------|
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two `weekday_last` instances are equal. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a  `weekday_last` to the specified stream. |

## Requirements

**Header:** `<chrono>` Since C++ 20

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="weekday_last"></a> Constructor

Constructs a `weekday_last` that is initialized with a `weekday` value.

```cpp
constexpr explicit weekday_last(const chrono::weekday& wd) noexcept; // C++20
```

### Parameters

*`wd`*\
The weekday value for the created `weekday_last` class.

### Remarks

It's easier to construct a `weekday_last` using the `weekday` `operator[]`. See the example below.

## <a name="ok"></a> `ok`

Check if the value stored in this `weekday_last` is in the valid range.

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

using namespace std::chrono;

int main()
{
    constexpr auto wdl{ Monday[last] }; // wdl is the last Monday of an unspecified month
    std::cout << wdl.weekday() << "\n";

    return 0;
}
```

```output
Mon
```

## See also

[`<chrono>`](chrono.md)\
[`weekday` class](weekday-class.md)\
[`weekday_indexed` class](weekdayindexed-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)