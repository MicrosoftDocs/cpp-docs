---
description: "Learn more about: noexcept (C++)"
title: "noexcept (C++)"
ms.date: 09/27/2022
f1_keywords: ["noexcept_cpp"]
ms.assetid: df24edb9-c6a6-4e37-9914-fd5c0c3716a8
---
# `noexcept` (C++)

**C++11:** Specifies whether a function might throw exceptions.

## Syntax

*`noexcept-specifier`*:\
&emsp; **`noexcept`**\
&emsp; *`noexcept-expression`*\
&emsp; **`throw`** **`(`** **`)`**\
*`noexcept-expression`*:\
&emsp; **`noexcept`** **`(`** *`constant-expression`* **`)`**

### Parameters

*`constant-expression`*\
A constant expression of type **`bool`** that represents whether the set of potential exception types is empty. The unconditional version is equivalent to `noexcept(true)`.

## Remarks

A *`noexcept-expression`* is a kind of *exception specification*: a suffix to a function declaration that represents a set of types that might be matched by an exception handler for any exception that exits a function. Unary conditional operator `noexcept(constant_expression)` when *`constant_expression`* yields **`true`**, and its unconditional synonym **`noexcept`**, specify that the set of potential exception types that can exit a function is empty. That is, the function never throws an exception and never allows an exception to be propagated outside its scope. The operator `noexcept(constant_expression)` when *`constant_expression`* yields **`false`**, or the absence of an exception specification (other than for a destructor or deallocation function), indicates that the set of potential exceptions that can exit the function is the set of all types.

Mark a function as **`noexcept`** only if all the functions that it calls, either directly or indirectly, are also **`noexcept`** or **`const`**. The compiler doesn't necessarily check every code path for exceptions that might bubble up to a **`noexcept`** function. If an exception does exit the outer scope of a function marked **`noexcept`**, [`std::terminate`](../standard-library/exception-functions.md#terminate) is invoked immediately, and there's no guarantee that destructors of any in-scope objects will be invoked. Use **`noexcept`** instead of the dynamic exception specifier `throw()`. The *dynamic exception specification*, or `throw(optional_type_list)` specification, was deprecated in C++11 and removed in C++17, except for `throw()`, which is an alias for `noexcept(true)`. We recommended you apply **`noexcept`** to any function that never allows an exception to propagate up the call stack. When a function is declared **`noexcept`**, it enables the compiler to generate more efficient code in several different contexts. For more information, see [Exception specifications](exception-specifications-throw-cpp.md).

## Example

A function template that copies its argument might be declared **`noexcept`** on the condition that the object being copied is a plain old data type (POD). Such a function could be declared like this:

```cpp
#include <type_traits>

template <typename T>
T copy_object(const T& obj) noexcept(std::is_pod<T>)
{
   // ...
}
```

## See also

[Modern C++ best practices for exceptions and error handling](errors-and-exception-handling-modern-cpp.md)\
[Exception specifications (`throw`, `noexcept`)](exception-specifications-throw-cpp.md)
