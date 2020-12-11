---
description: "Learn more about: Fatal Error C1076"
title: "Fatal Error C1076"
ms.date: "03/08/2019"
f1_keywords: ["C1076"]
helpviewer_keywords: ["C1076"]
ms.assetid: 84ac1180-3e8a-48e8-9f77-7f18a778b964
---
# Fatal Error C1076

> compiler limit : internal heap limit reached; use /Zm to specify a higher limit

This error can be caused by too many symbols, or too many template instantiations. Starting in Visual Studio 2015, this message may result from Windows virtual memory pressure caused by too many parallel build processes. In this case, the recommendation to use the **/Zm** option should be ignored unless you are using a `#pragma hdrstop` directive.

To resolve this error:

1. If your precompiled header uses a `#pragma hdrstop` directive, use the [/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md) option to set the compiler memory limit to the value specified in the [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) error message. For more information that includes how to set this value in Visual Studio, see the Remarks section in [/Zm (Specify Precompiled Header Memory Allocation Limit)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).

1. Consider reducing the number of parallel processes specified by using the **/maxcpucount** option to MSBUILD.EXE in conjunction with the **/MP** option to CL.EXE. For more information, see [Precompiled Header (PCH) issues and recommendations](https://devblogs.microsoft.com/cppblog/precompiled-header-pch-issues-and-recommendations/).

1. If you are using the 32-bit hosted compilers on a 64-bit operating system, use the 64-bit hosted compilers instead. For more information, see [How to: Enable a 64-Bit Visual C++ Toolset on the Command Line](../../build/how-to-enable-a-64-bit-visual-cpp-toolset-on-the-command-line.md).

1. Eliminate unnecessary include files.

1. Eliminate unnecessary global variables—for example, by allocating memory dynamically instead of declaring a large array.

1. Eliminate unused declarations.

If C1076 occurs immediately after the build starts, the value specified for **/Zm** is probably too high for your program. Reduce the **/Zm** value.
