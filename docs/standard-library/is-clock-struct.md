---
description: "Learn more about is_clock struct"
title: "is_clock class"
ms.date: 07/19/2021
f1_keywords: ["chrono/std::is_clock", "std::chrono::is_clock::operator()", "std::chrono::is_clock::operator bool", "std::chrono::value"]
helpviewer_keywords: ["std::chrono [C++], is_clock"]
dev_langs: ["C++"]
---

# `is_clock` structure

A type trait that determines whether the specified type meets the requirements to be a clock.

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
| [`operator ()`](#op_parens) | Returns [`value`](#value). |
| [`operator bool`](#op_bool) | Returns [`value`](#value). |

## Remarks

A clock has a `rep`, `period`, `duration`, `time_point`, `is_steady`, and a `now()` function.

For more details about the requirements to be a C++17 clock, see [Cpp17Clock requirements](https://eel.is/c++draft/tab:time.clock).

The following code works because `is_clock`, derives from `Cpp17UnaryTypeTrait`, which derives from `integral_constant`. This is where `value_type`, which is a `bool`, and `type`, which is a `std::integral_constant<bool, value>` come from.  

## Example

```cpp
#include <iostream>
#include <chrono>

using namespace `std::chrono`;

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

**Header:** `<chrono>`

**Namespace:** `std::chrono`

**Compiler Option:** [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md)

## `Value`

Get whether the specified type satisfies the requirements to be a clock.

```cpp
static constexpr T value;
```

### Return value

`true` if specified type meets the requirements to be a clock. Otherwise, `false`.

## <a name="op_parens"></a> `operator()`

```cpp
constexpr value_type operator()() const noexcept
```

Returns `value`, that is, whether the specified type meets the requirements to be a clock.

### Return value

`true` if specified type meets the requirements to be a clock. Otherwise, `false`.

## <a name="op_bool"></a> `operator bool`

```cpp
constexpr operator value_type() const noexcept
```

Returns `value`, that is, whether the specified type meets the requirements to be a clock.

### Return value

`true` if specified type meets the requirements to be a clock. Otherwise, `false`.

## See also

[`<chrono>`](chrono.md)\
[Header Files Reference](cpp-standard-library-header-files.md)
