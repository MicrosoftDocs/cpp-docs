---
description: "Learn more about: Fatal Error C1060"
title: "Fatal Error C1060"
ms.date: "11/04/2016"
f1_keywords: ["C1060"]
helpviewer_keywords: ["C1060"]
ms.assetid: feaf305c-c84c-4160-b974-50e283412849
---
# Fatal Error C1060

compiler is out of heap space

The operating system or run-time library cannot fill a request for memory.

### To fix this error try the following possible solutions

1. If the compiler also issues errors [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) and [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md), use the [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) compiler option to lower the memory allocation limit. More heap space is available to your application if you lower the remaining memory allocation.

   If the [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) option is already set, try removing it. Heap space might be exhausted because the memory allocation limit specified in the option is too high. The compiler uses a default limit if you remove the [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) option.

1. If you are compiling on a 64-bit platform, use the 64-bit compiler toolset. For information, see [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).

1. On 32-bit Windows, try using the [/3GB](https://support.microsoft.com/help/833721/available-switch-options-for-the-windows-xp-and-the-windows-server-200) boot.ini switch.

1. Increase the size of the Windows swap-file.

1. Close other running programs.

1. Eliminate unnecessary include files.

1. Eliminate unnecessary global variables, for example, by allocating memory dynamically instead of declaring a large array.

1. Eliminate unused declarations.

1. Split the current file into smaller files.
