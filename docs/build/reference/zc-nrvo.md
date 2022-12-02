---
description: "Learn more about the /Zc:nrvo (Control optional NRVO) compiler option."
title: "/Zc:nrvo (Control optional NRVO)"
ms.date: 11/10/2022
f1_keywords: ["/Zc:nrvo"]
helpviewer_keywords: ["-Zc:nrvo compiler option (C++)", "/Zc:nrvo compiler option (C++)"]
---
# `/Zc:nrvo` (Control optional NRVO)

The **`/Zc:nrvo`** compiler option controls Standard C++ optional named return value optimization (NRVO) copy or move elision behavior.

## Syntax

> **`/Zc:nrvo`**\[**`-`**]

## Remarks

In Visual Studio 2022 version 17.4 and later, you can explicitly enable optional copy or move elision behavior by using the **`/Zc:nrvo`** compiler option. This option is off by default, but is set automatically when you compile using the **`/O2`** option, the **`/permissive-`** option, or **`/std:c++20`** or later. Under **`/Zc:nrvo`**, copy and move elision is performed wherever possible. Optional copy or move elision can also be explicitly disabled by using the **`/Zc:nrvo-`** option. These compiler options only control optional copy or move elision. Mandatory copy or move elision (specified by the C++ Standard) can't be disabled.

### Mandatory copy and move elision

The C++ standard requires copy or move elision when the returned value is initialized as part of the return statement. For example, it's required when a function returns an `ExampleType` returned by using `return ExampleType();`. The MSVC compiler always performs copy and move elision for **`return`** statements when it's required, even under **`/Zc:nrvo-`**.

### Optional copy and move elision

When a **`return`** statement contains an expression of non-primitive type, its execution copies the expression result into the return slot of the calling function. The compiler invokes the copy or move constructor of the returned type. Then, as the function is exited, destructors for function-local variables are called, which includes any variables named in the expression.

The C++ standard allows (but doesn't require) the compiler to optionally construct the returned object directly in the return slot of the calling function. This construction skips (or *elides*) the copy or move constructor executed as part of the **`return`** statement. Unlike most other optimizations, this transformation is allowed to have an observable effect on the program's output. Namely, the copy or move constructor and associated destructor are called one less time. The standard still requires that the named returned variable has a defined copy or move constructor, even if the compiler elides the constructor in all cases.

In versions before Visual Studio 2022 version 17.4, when optimizations are disabled (such as under **`/Od`** or in functions marked `#pragma optimize("", off)`) the compiler only performs mandatory copy and move elision. Under **`/O2`**, the older compilers perform optional copy or move elision on return of a named variable in an optimized function when all of these conditions are met: it has no loops or exception handling, it doesn't return multiple symbols with overlapping lifetimes, the type's copy or move constructor doesn't have default arguments.

Visual Studio 2022 version 17.4 increases the number of places where the compiler does optional copy or move elisions under **`/Zc:nrvo`**, whether enabled explicitly, or automatically by using the **`/O2`**, **`/permissive-`**, or **`/std:c++20`** or later options. Under **`/Zc:nrvo`**, the compiler performs optional copy or move elision on return of a named variable for any function when: it has no loops or exception handling (as before); it returns the variable from a loop; it has exception handling; the returned type's copy or move constructor has default arguments. Optional copy or move elisions are never done when **`/Zc:nrvo-`** is applied, or when the function returns multiple symbols with overlapping lifetimes, or for a throw of a named variable.

For more information and examples of mandatory and optional copy elision under **`/Zc:nrvo`**, see [Improving Copy and Move Elision](https://devblogs.microsoft.com/cppblog/improving-copy-and-move-elision) in the C++ Team Blog.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In **Additional options**, add *`/Zc:nrvo`* or  *`/Zc:nrvo-`*. Choose **OK** or **Apply** to save your changes.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[`/O2`](./o1-o2-minimize-size-maximize-speed.md)\
[`/permissive-`](./permissive-standards-conformance.md)\
[`/std` (Specify language standard version)](std-specify-language-standard-version.md)
