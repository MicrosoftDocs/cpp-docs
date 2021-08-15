---
description: "Learn more about: nothrow (C++)"
title: "nothrow (C++)"
ms.date: "01/03/2018"
f1_keywords: ["nothrow_cpp"]
helpviewer_keywords: ["__declspec keyword [C++], nothrow", "nothrow __declspec keyword"]
ms.assetid: 0a475139-459c-4ec6-99e8-7ecd0d7f44a3
---
# nothrow (C++)

**Microsoft Specific**

A **`__declspec`** extended attribute which can be used in the declaration of functions.

## Syntax

> *return-type* __declspec(nothrow) [*call-convention*] *function-name* ([*argument-list*])

## Remarks

We recommend that all new code use the [noexcept](noexcept-cpp.md) operator rather than `__declspec(nothrow)`.

This attribute tells the compiler that the declared function and the functions it calls never throw an exception. However, it does not enforce the directive. In other words, it never causes [std::terminate](../standard-library/exception-functions.md#terminate) to be invoked, unlike **`noexcept`**, or in **std:c++17** mode (Visual Studio 2017 version 15.5 and later), `throw()`.

With the synchronous exception handling model, now the default, the compiler can eliminate the mechanics of tracking the lifetime of certain unwindable objects in such a function, and significantly reduce the code size. Given the following preprocessor directive, the three function declarations below are equivalent in **/std:c++14** mode:

```cpp
#define WINAPI __declspec(nothrow) __stdcall

void WINAPI f1();
void __declspec(nothrow) __stdcall f2();
void __stdcall f3() throw();
```

In **/std:c++17** mode, `throw()` is not equivalent to the others that use `__declspec(nothrow)` because it causes `std::terminate` to be invoked if an exception is thrown from the function.

The `void __stdcall f3() throw();` declaration uses the syntax defined by the C++ standard. In C++17 the `throw()` keyword was deprecated.

**END Microsoft Specific**

## See also

[__declspec](../cpp/declspec.md)<br/>
[noexcept](noexcept-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
