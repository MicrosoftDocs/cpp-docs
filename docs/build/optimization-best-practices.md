---
description: "Learn more about: Optimization best practices"
title: "Optimization best practices"
ms.date: "05/06/2019"
helpviewer_keywords: ["C++, optimization", "optimization, best practices"]
ms.assetid: f3433148-7255-4ca6-8a4f-7c31aac88508
---
# Optimization best practices

This document describes some best practices for optimizing C++ programs in Visual Studio.

## Compiler and Linker Options

### Profile-guided optimization

Visual Studio supports *profile-guided optimization* (PGO). This optimization uses profile data from training executions of an instrumented version of an application to drive later optimization of the application. Using PGO can be time consuming, so it may not be something that every developer uses, but we do recommend using PGO for the final release build of a product. For more information, see [Profile-Guided Optimizations](profile-guided-optimizations.md).

In addition, *Whole Program Optimization* (also knows as Link Time Code Generation) and the **`/O1`** and **`/O2`** optimizations have been improved. In general, an application compiled with one of these options will be faster than the same application compiled with an earlier compiler.

For more information, see [`/GL` (Whole Program Optimization)](reference/gl-whole-program-optimization.md) and [`/O1`, `/O2` (Minimize Size, Maximize Speed)](reference/o1-o2-minimize-size-maximize-speed.md).

### Which level of optimization to use

If at all possible, final release builds should be compiled with Profile Guided Optimizations. If it is not possible to build with PGO, whether due to insufficient infrastructure for running the instrumented builds or not having access to scenarios, then we suggest building with Whole Program Optimization.

The **`/Gy`** switch is also very useful. It generates a separate COMDAT for each function, giving the linker more flexibility when it comes to removing unreferenced COMDATs and COMDAT folding. The only downside to using **`/Gy`** is that it can cause issues when debugging. Therefore, it is generally recommended to use it. For more information, see [`/Gy` (Enable Function-Level Linking)](reference/gy-enable-function-level-linking.md).

For linking in 64-bit environments, it is recommended to use the **`/OPT:REF,ICF`** linker option, and in 32-bit environments, **`/OPT:REF`** is recommended. For more information, see [/OPT (Optimizations)](reference/opt-optimizations.md).

It is also strongly recommended to generate debug symbols, even with optimized release builds. It doesn't affect the generated code, and it makes it a lot easier to debug your application, if need be.

### Floating-point switches

The **`/Op`** compiler option has been removed, and the following four compiler options dealing with floating point optimizations have been added:

|Option|Description|
|-|-|
|**`/fp:precise`**|This is the default recommendation and should be used in most cases.|
|**`/fp:fast`**|Recommended if performance is of the utmost importance, for example in games. This will result in the fastest performance.|
|**`/fp:strict`**|Recommended if precise floating-point exceptions and IEEE behavior is desired. This will result in the slowest performance.|
|**`/fp:except[-]`**|Can be used in conjunction with **`/fp:strict`** or **`/fp:precise`**, but not **`/fp:fast`**.|

For more information, see [`/fp` (Specify Floating-Point Behavior)](reference/fp-specify-floating-point-behavior.md).

## Optimization declspecs

In this section we will look at two declspecs that can be used in programs to help performance: `__declspec(restrict)` and `__declspec(noalias)`.

The `restrict` declspec can only be applied to function declarations that return a pointer, such as `__declspec(restrict) void *malloc(size_t size);`

The `restrict` declspec is used on functions that return unaliased pointers. This keyword is used for the C-Runtime Library implementation of `malloc` since it will never return a pointer value that is already in use in the current program (unless you are doing something illegal, such as using memory after it has been freed).

The `restrict` declspec gives the compiler more information for performing compiler optimizations. One of the hardest things for a compiler to determine is what pointers alias other pointers, and using this information greatly helps the compiler.

It is worth pointing out that this is a promise to the compiler, not something that the compiler will verify. If your program uses this `restrict` declspec inappropriately, your program may have incorrect behavior.

For more information, see [`restrict`](../cpp/restrict.md).

The `noalias` declspec is also applied only to functions, and indicates that the function is a semi-pure function. A semi-pure function is one that references or modifies only locals, arguments, and first-level indirections of arguments. This declspec is a promise to the compiler, and if the function references globals or second-level indirections of pointer arguments then the compiler may generate code that breaks the application.

For more information, see [`noalias`](../cpp/noalias.md).

## Optimization pragmas

There are also several useful pragmas for helping optimize code. The first one we'll discuss is `#pragma optimize`:

```cpp
#pragma optimize("{opt-list}", on | off)
```

This pragma allows you to set a given optimization level on a function-by-function basis. This is ideal for those rare occasions where your application crashes when a given function is compiled with optimization. You can use this to turn off optimizations for a single function:

```cpp
#pragma optimize("", off)
int myFunc() {...}
#pragma optimize("", on)
```

For more information, see [`optimize`](../preprocessor/optimize.md).

Inlining is one of the most important optimizations that the compiler performs and here we talk about a couple of the pragmas that help modify this behavior.

`#pragma inline_recursion` is useful for specifying whether or not you want the application to be able to inline a recursive call. By default it is off. For shallow recursion of small functions you may to turn this on. For more information, see [`inline_recursion`](../preprocessor/inline-recursion.md).

Another useful pragma for limiting the depth of inlining is `#pragma inline_depth`. This is typically useful in situations where you're trying to limit the size of a program or function. For more information, see [`inline_depth`](../preprocessor/inline-depth.md).

## `__restrict` and `__assume`

There are a couple of keywords in Visual Studio that can help performance: [__restrict](../cpp/extension-restrict.md) and [__assume](../intrinsics/assume.md).

First, it should be noted that **`__restrict`** and `__declspec(restrict)` are two different things. While they are somewhat related, their semantics are different. **`__restrict`** is a type qualifier, like **`const`** or **`volatile`**, but exclusively for pointer types.

A pointer that is modified with **`__restrict`** is referred to as a *__restrict pointer*. A __restrict pointer is a pointer that can only be accessed through the \__restrict pointer. In other words, another pointer cannot be used to access the data pointed to by the \__restrict pointer.

**`__restrict`** can be a powerful tool for the Microsoft C++ optimizer, but use it with great care. If used improperly, the optimizer might perform an optimization that would break your application.

The **`__restrict`** keyword replaces the **/Oa** switch from previous versions.

With **`__assume`**, a developer can tell the compiler to make assumptions about the value of some variable.

For example `__assume(a < 5);` tells the optimizer that at that line of code the variable `a` is less than 5. Again this is a promise to the compiler. If `a` is actually 6 at this point in the program then the behavior of the program after the compiler has optimized may not be what you would expect. **`__assume`** is most useful prior to switch statements and/or conditional expressions.

There are some limitations to **`__assume`**. First, like **`__restrict`**, it is only a suggestion, so the compiler is free to ignore it. Also, **`__assume`** currently works only with variable inequalities against constants. It does not propagate symbolic inequalities, for example, assume(a < b).

## Intrinsic support

Intrinsics are function calls where the compiler has intrinsic knowledge about the call, and rather than calling a function in a library, it emits code for that function. The header file \<intrin.h> contains all of the available intrinsics for each of the supported hardware platforms.

Intrinsics give the programmer the ability to go deep into the code without having to use assembly. There are several benefits to using intrinsics:

- Your code is more portable. Several of the intrinsics are available on multiple CPU architectures.

- Your code is easier to read, since the code is still written in C/C++.

- Your code gets the benefit of compiler optimizations. As the compiler gets better, the code generation for the intrinsics improves.

For more information, see [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md).

## Exceptions

There is a performance hit associated with using exceptions. Some restrictions are introduced when using try blocks that inhibit the compiler from performing certain optimizations. On x86 platforms there is additional performance degradation from try blocks due to additional state information that must be generated during code execution. On the 64-bit platforms, try blocks do not degrade performance as much, but once an exception is thrown, the process of finding the handler and unwinding the stack can be expensive.

Therefore, it is recommended to avoid introducing try/catch blocks into code that does not really need it. If you must use exceptions, use synchronous exceptions if possible. For more information, see [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md).

Lastly, throw exceptions for exceptional cases only. Using exceptions for general control flow will likely make performance suffer.

## See also

- [Optimizing Your Code](optimizing-your-code.md)
