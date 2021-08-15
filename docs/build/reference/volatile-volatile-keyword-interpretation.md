---
description: "Learn more about: /volatile (volatile Keyword Interpretation)"
title: "/volatile (volatile Keyword Interpretation)"
ms.date: "11/04/2016"
f1_keywords: ["/volatile:iso", "/volatile:ms", "/volatile"]
helpviewer_keywords: ["/volatile compiler option", "/volatile compiler option [C++]", "-volatile compiler option", "volatile compiler option [C++]", "volatile compiler option", "-volatile compiler option [C++]"]
ms.assetid: 9d08fcc6-5bda-44c8-8151-8d8d54f164b8
---
# /volatile (volatile Keyword Interpretation)

Specifies how the [volatile](../../cpp/volatile-cpp.md) keyword is to be interpreted.

## Syntax

> **/volatile:**{**iso**|**ms**}

## Arguments

**/volatile:iso**<br/>
Selects strict **`volatile`** semantics as defined by the ISO-standard C++ language. Acquire/release semantics are not guaranteed on volatile accesses. If the compiler targets ARM, this is the default interpretation of **`volatile`**.

**/volatile:ms**<br/>
Selects Microsoft extended **`volatile`** semantics, which add memory ordering guarantees beyond the ISO-standard C++ language. Acquire/release semantics are guaranteed on volatile accesses. However, this option also forces the compiler to generate hardware memory barriers, which might add significant overhead on ARM and other weak memory-ordering architectures. If the compiler targets any platform except ARM, this is default interpretation of **`volatile`**.

## Remarks

We strongly recommend that you use **/volatile:iso** along with explicit synchronization primitives and compiler intrinsics when you are dealing with memory that is shared across threads. For more information, see [volatile](../../cpp/volatile-cpp.md).

If you port existing code or change this option in the middle of a project, it may be helpful to enable warning [C4746](../../error-messages/compiler-warnings/compiler-warning-c4746.md) to identify code locations that are affected by the difference in semantics.

There is no `#pragma` equivalent to control this option.

### To set the /volatile compiler option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. In the **Additional options** box, add **/volatile:iso** or **/volatile:ms** and then choose **OK** or **Apply** to save your changes.

## See also

[volatile](../../cpp/volatile-cpp.md)<br/>
[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
