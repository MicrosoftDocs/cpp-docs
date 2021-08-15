---
description: "Learn more about: Compiler Warning (level 4) C4464"
title: "Compiler Warning (level 4) C4464"
ms.date: "03/13/2018"
f1_keywords: ["C4464"]
helpviewer_keywords: ["C4464"]
---
# Compiler Warning (level 4) C4464

> **relative include path contains '..'**

A `#include` directive has a path that includes a '..' parent directory specifier.

## Remarks

Starting in Visual Studio 2015 Update 1, the compiler can detect an include directive that contains a '..' path segment and issue a warning, if enabled. Code written in this way is usually intended to include headers that exist outside of the project by incorrectly using project-relative paths. This creates a risk that the program could be compiled by including a different source file than the programmer intends, or that these relative paths would not be portable to other build environments. Although there is no specific warning for it, we also recommend that you do not use a parent directory path segment to specify your project include directories.

This warning is new in Visual Studio 2015 Update 1, and is off by default. Use [/Wall](../../build/reference/compiler-option-warning-level.md) to enable all warnings that are off by default, or __/w__*n*__4464__ to enable C4464 as a level *n* warning. For more information, see [Compiler Warnings That Are Off By Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md). For information on how to disable warnings by compiler version, see [Compiler warnings by compiler version](compiler-warnings-by-compiler-version.md).

## Example

Source code files that use '..' path segments can trigger this warning when the **/Wall** option is specified:

```cpp
#include "..\headers\C4426.h"  // emits warning C4464

// To fix this issue, specify only the header file name, and add
// the absolute path to 'headers\' to your project's include directories
#include "C4426.h"
```
