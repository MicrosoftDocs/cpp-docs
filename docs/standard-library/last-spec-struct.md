---
description: "Learn more about: last_spec struct"
title: "last_spec struct"
ms.date: 09/15/2021
f1_keywords: ["chrono/std::chrono::last_spec"]
helpviewer_keywords: ["std::chrono [C++], last_spec"]
dev_langs: ["C++"]
---

# `last_spec` struct

Indicates the last item in a month. For example, the last day of the week of a month, such as the last Tuesday of February 2020. Or the last day of a month, such as the last day of April 2019.

## Syntax

```cpp
struct last_spec; // C++20
inline constexpr last_spec last{} // C++20
```

## <a name="example"></a> Example: `last`

Use `last_spec` to indicate the last item in a month. The following example uses `last` to indicate the:
- Last day in December as a `monthDayLast`
- Last Friday in July of 2021 as a `year_month_weekday_last`
- Last day in April of 1975 as a `year_month_day_last`

```cpp
// compile using: /std:c++latest
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    constexpr auto monthDayLast{December/last}; // 'last' resolves to last_spec
    std::cout << monthDayLast << '\n';

    constexpr auto yearMonthWeekDayLast{year(2021)/July/Friday[last]}; // 'last' resolves to last_spec
    std::cout << yearMonthWeekDayLast << '\n';

    constexpr auto yearMonthDayLast{ April / last / 1975 };
    std::cout << yearMonthDayLast << "\n";  

    return 0;
}
```

```output
Dec/last
2021/Jul/Fri[last]
1975/Apr/last
```

## Members

|Name|Description|
|----------|-----------------|
| [Constructor](#lastSpec) | Construct a `last_spec`. |

## Requirements

**Header:** `<chrono>` (since C++20)

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## <a name="lastSpec"></a> Constructor

Construct a `last_spec`.

```cpp
explicit last_spec() = default;
```

### Remarks

You typically won't create a `last_spec` instance directly. You'll use `last` as shown above in [Example `last`](#example).

## See also

[`<chrono>`](chrono.md)\
[`month_day_last` Class](month-day-last-class.md)\
[`month_weekday_last` class](month-weekday-last-class.md)\
[Header Files Reference](cpp-standard-library-header-files.md)