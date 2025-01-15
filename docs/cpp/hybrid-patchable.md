---
description: "Learn more about: hybrid_patchable (C++)"
title: "hybrid_patchable (C++)"
ms.date: 1/15/2025
f1_keywords: ["hybrid_patchable"]
helpviewer_keywords: ["__declspec keyword [C++], hybrid_patchable", "hybrid_patchable __declspec keyword"]
---
# `hybrid_patchable` (C++)

**Microsoft Specific**

Use **`__declspec(hybrid_patchable)`** extended attribute which can be used in the declaration of functions.

## Syntax

> `__declspec(hybrid_patchable)`

## Remarks

We recommend that all new code use the [`noexcept`](noexcept-cpp.md) operator rather than `__declspec(nothrow)`.

This attribute tells the compiler that the declared function and the functions it calls never throw an exception. However, it does not enforce the directive. In other words, it never causes [`std::terminate`](../standard-library/exception-functions.md#terminate) to be invoked, unlike **`noexcept`**, or in **`std:c++17`** mode (Visual Studio 2017 version 15.5 and later), `throw()`.

With the synchronous exception handling model, now the default, the compiler can eliminate the mechanics of tracking the lifetime of certain unwindable objects in such a function, and significantly reduce the code size. Given the following preprocessor directive, the three function declarations below are equivalent in **`/std:c++14`** mode:

```cpp
__declspec(hybrid_patchable) int Example() {
    return 1;
}
```

Generates the following fast-forward sequence:

```
EXP+#Example:
  00000001400CE000: 48 8B C4           mov         rax,rsp
  00000001400CE003: 48 89 58 20        mov         qword ptr [rax+20h],rbx
  00000001400CE007: 55                 push        rbp
  00000001400CE008: 5D                 pop         rbp
  00000001400CE009: E9 BA 7A F3 FF     jmp         #Example
  00000001400CE00E: CC                 int         3
  00000001400CE00F: CC                 int         3 
```


In **`/std:c++17`** mode, `throw()` is not equivalent to the others that use `__declspec(nothrow)` because it causes `std::terminate` to be invoked if an exception is thrown from the function.

The `void __stdcall f3() throw();` declaration uses the syntax defined by the C++ standard. In C++17 the `throw()` keyword was deprecated.

**END Microsoft Specific**

## See also

[`__declspec`](../cpp/declspec.md)\
[`noexcept`](noexcept-cpp.md)\
[Keywords](../cpp/keywords-cpp.md)
