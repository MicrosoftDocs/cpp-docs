---
description: "Learn more about: Compiler Error C3859"
title: "Compiler Error C3859"
ms.date: "03/08/2019"
f1_keywords: ["C3859"]
helpviewer_keywords: ["C3859"]
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
---
# Compiler Error C3859

> virtual memory range for PCH exceeded; please recompile with a command line option of '-Zm*value*' or greater

The virtual memory allocated for your precompiled header is too small for the amount of data the compiler is trying to put in it. Starting in Visual Studio 2015, the **/Zm** recommendation is only significant when using the `#pragma hdrstop` directive. In other cases, it's a spurious error that indicates Windows virtual memory pressure issues.

If your precompiled header uses a `#pragma hdrstop` directive, use the **/Zm** compiler flag to specify a larger value for the precompiled header file. Otherwise, consider reducing the number of parallel compilation processes in your build. For more information, see [/Zm (Specify Precompiled Header Memory Allocation Limit)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).
