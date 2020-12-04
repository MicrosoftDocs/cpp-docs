---
description: "Learn more about: common_type Structure"
title: "common_type Structure"
ms.date: "11/04/2016"
f1_keywords: ["chrono/std::common_type"]
ms.assetid: 2b42722c-c3dc-4d62-8613-0271e52b6f00
---
# common_type Structure

Describes specializations of class template [common_type](../standard-library/common-type-class.md) for instantiations of [duration](../standard-library/duration-class.md) and [time_point](../standard-library/time-point-class.md).

## Syntax

```cpp
template <class Rep1, class Period1,
    class Rep2, class Period2>
struct common_type
<chrono::duration<Rep1, Period1>,
chrono::duration<Rep2, Period2>>;

template <class Clock,
    class Duration1, class Duration2>
struct common_type
<chrono::time_point<Clock, Duration1>,
chrono::time_point<Clock, Duration2>>;
```

## Requirements

**Header:** \<chrono>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<chrono>](../standard-library/chrono.md)
