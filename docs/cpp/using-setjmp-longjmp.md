---
description: "Learn more about: Using setjmp and longjmp"
title: "Using setjmp and longjmp"
ms.date: "08/14/2018"
f1_keywords: ["longjmp_cpp", "setjmp_cpp"]
helpviewer_keywords: ["C++ exception handling, setjmp/longjmp functions", "setjmpex.h", "longjmp function in C++ programs", "setjmp.h", "setjmp function", "setjmp function, C++ programs"]
ms.assetid: 96be8816-f6f4-4567-9a9c-0c3c720e37c5
---
# Using setjmp and longjmp

When [setjmp](../c-runtime-library/reference/setjmp.md) and [longjmp](../c-runtime-library/reference/longjmp.md) are used together, they provide a way to execute a non-local **`goto`**. They are typically used in C code to pass execution control to error-handling or recovery code in a previously called routine without using the standard calling or return conventions.

> [!CAUTION]
> Because `setjmp` and `longjmp` don't support correct destruction of stack frame objects portably between C++ compilers, and because they might degrade performance by preventing optimization on local variables, we don't recommend their use in C++ programs. We recommend you use **`try`** and **`catch`** constructs instead.

If you decide to use `setjmp` and `longjmp` in a C++ program, also include \<setjmp.h> or \<setjmpex.h> to assure correct interaction between the functions and Structured Exception Handling (SEH) or C++ exception handling.

**Microsoft Specific**

If you use an [/EH](../build/reference/eh-exception-handling-model.md) option to compile C++ code, destructors for local objects are called during the stack unwind. However, if you use **/EHs** or **/EHsc** to compile, and one of your functions that uses [noexcept](../cpp/noexcept-cpp.md) calls `longjmp`, then the destructor unwind for that function might not occur, depending on the optimizer state.

In portable code, when a `longjmp` call is executed, correct destruction of frame-based objects is explicitly not guaranteed by the standard, and may not be supported by other compilers. To let you know, at warning level 4, a call to `setjmp` causes warning C4611: interaction between '_setjmp' and C++ object destruction is non-portable.

**END Microsoft Specific**

## See also

[Mixing C (Structured) and C++ Exceptions](../cpp/mixing-c-structured-and-cpp-exceptions.md)
