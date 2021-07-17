---
description: "Learn more about: is_clock struct"
title: "add_pointer Class"
ms.date: "7/12/2021"
f1_keywords: ["chrono/std::is_clock"]
helpviewer_keywords: ["std::chrono [C++], is_clock"]
---

# `is_clock` class

A type trait that determines whether the specified type meets the requirements to be a clock. At a high level, a clock has a `duration`, `time_point`, `now()` function.

For more details about the requirements to be a Cpp17CLock, see [Cpp17Clock requirements](https://eel.is/c++draft/tab:time.clock). 

## Syntax

```cpp
template<class T> struct is_clock; // c++ 20
```

**Helper variable template**

```cpp
 template<class T> inline constexpr bool is_clock_v = is_clock<T>::value; // c++ 20
```

### Parameters

*`T`*\
The type to test.

## Members

|Name|Description|
|----------|-----------------|
| [`value`](#value) | Indicates whether `T` satisfies the requirements to be a clock.  |
| [`operator ()`](#op_parens) | Returns `value`. |
| [`operator bool`](#op_bool) | Returns `value` as a bool. |


## Remarks

## Example

```cpp
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main()
{
    is_clock<system_clock> ic;

    std::cout << std::boolalpha << ic.value << ", " << ic() << ", " << (bool)ic;
    return 0;
}
```

```output
true, true, true
```

## Requirements

**Header:** \<`chrono`>

**Namespace:** `std`

## See also

[`<chrono>`](chrono.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
