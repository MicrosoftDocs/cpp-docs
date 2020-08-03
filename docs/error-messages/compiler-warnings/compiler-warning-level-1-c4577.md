---
title: "Compiler Warning C4577"
description: Compiler warning C4577 description and solution.
ms.date: "09/18/2019"
f1_keywords: ["C4577"]
helpviewer_keywords: ["C4577"]
---
# Compiler Warning (level 1) C4577

> 'noexcept' used with no exception handling mode specified; termination on exception is not guaranteed. Specify /EHsc

The compiler detected a **`noexcept`** specification, but standard C++ exception handling wasn't specified. The compiler doesn't fully support exception handling according to the C++ standard unless the [/EHsc](../../build/reference/eh-exception-handling-model.md) compiler option is specified. To resolve this issue, set the **/EHsc** compiler option.

This warning is new in Visual Studio 2015, and is off by default. For more information, see [Compiler warnings that are off by default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).
