---
description: "Learn more about: month_weekday Class"
title: "month_weekday class"
ms.date: "06/28/2021"
f1_keywords: ["chrono/std::chrono::month_weekday", "chrono/std::chrono::month_weekday::weekday", "chrono/std::chrono::month_weekday::month", "chrono/std::chrono::month_weekday::ok", "chrono/std::chrono::month_weekday::weekday_indexed"]
helpviewer_keywords: ["std::chrono [C++], month_weekday"]
dev_langs: ["C++"]
---

# `month_weekday` class  

Represents the nth weekday of a specific month.

## Syntax

```cpp
class month_weekday; // C++ 20
```

## Remarks

The year is unspecified.\
`month_weekday` is a trivially copyable and standard-layout class type.

## Members

|Name|Description|
|----------|-----------------|
| [`Constructor`](#month_weekday) | Construct a `month_weekday` with the specified month and weekday. |
| [`month`](#month) | Return the month value. |
| [`ok`](#ok) | Check if the `month_weekday` is valid. |
| [`weekday_indexed`](#weekday_indexed) | Return the weekday index. |

## Non-members

|Name|Description|
|----------|-----------------|
| [`operator==`](chrono-operators.md#op_eq_eq) | Determine whether two months are equal. |
| [`operator<<`](chrono-operators.md#op_left_shift) | Output a `month_weekday` to the given stream. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="month_weekday"></a> Constructor

Constructs a `month_weekday`. The month and weekday aren't initialized.

```cpp
constexpr month_weekday(const month& m, const weekday_indexed& wdi) noexcept;
```

### Parameters

*`m`*\
Construct a `month_weekday` with a month value of *`m`*.

*`wdi`*\
Construct a `month_weekday` with a weekday value of *`wdi`*.

### Remarks: Constructor

For information about C++ 20 syntax to specify dates, see [`operator/`](chrono-operators.md#op_/)

### Example: Create a `month_weekday`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    month_weekday mw{ July/Monday[1] };
    std::cout << mw << '\n';

    // Another way to create a month_weekday
    month_weekday mw2 = February / Tuesday[3];
    std::cout << mw2;

    return 0;
}
```

```output
Jul/Mon[1]
Feb/Tue[3]
```

## <a name="month"></a> `month`

 Get the month value.

```cpp
constexpr month month() const noexcept;
```

### Return value

The month value.

## <a name="ok"></a> `ok`

Check if the value stored in this `month_weekday` is valid.

```cpp
constexpr bool ok() const noexcept;
```

### Return value

`true` if the `month_weekday` value is valid. Otherwise, `false`.\
A `month_weekday` is valid if both the `month` is valid and the `weekday_indexed` value is valid.

## <a name="weekday_indexed"></a> `weekday_indexed`

 Return the weekday of the month value.

```cpp
constexpr weekday_indexed weekday_indexed() const noexcept;
```

### Return value

The weekday of the month.

## See also

[`<chrono>`](chrono.md)\
[`month` class](month-class.md)\
[`month_day` Class](month-day-class.md)\
[`month_day_last` Class](month-day-last-class.md)\
[`month_weekday_last` class](month-weekday-last-class.md)