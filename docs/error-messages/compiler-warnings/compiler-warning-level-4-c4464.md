---
description: "Learn more about: Compiler Warning (level 4, off) C4464"
title: "Compiler Warning (level 4) C4464"
ms.date: 09/14/2022
f1_keywords: ["C4464"]
helpviewer_keywords: ["C4464"]
---
# Compiler Warning (level 4, off) C4464

> relative include path contains '..'

A `#include` directive has a path that includes a parent directory specifier (a `..` path segment).

## Remarks

In Visual Studio 2015 Update 1 and later versions, if enabled, the compiler can detect and issue a warning for a `#include` directive that contains a parent directory path segment (`..`). Code is sometimes written that uses parent directory relative paths to include headers from external libraries. When these parent directory-relative header paths are specified in source files, it creates a risk: The program could be compiled by including a different header file than the programmer intends. These relative paths may not be portable to other developers' build environments.

Instead, we recommend you specify the paths to such headers in the build environment, such as in the `INCLUDE` environment variable or in parameters to the [`/I` (Additional include directories)](../../build/reference/i-additional-include-directories.md) compiler option. In the Visual Studio IDE, you can set the paths in your project's **Configuration Properties** > **C/C++** > **General** property page, in the **Additional Include Directories** property. Although there's no specific warning for it, we also don't recommend use of parent directory path segments when you specify your project's include directories.

Warning C4464 is new in Visual Studio 2015 Update 1, and is off by default. Use [`/Wall`](../../build/reference/compiler-option-warning-level.md) to enable all warnings that are off by default. Use **`/wN4464`** to enable C4464 as a level `N` warning (where `N` is 1-4). For more information, see [Compiler warnings that are off by default](../../preprocessor/compiler-warnings-that-are-off-by-default.md). For information on how to disable warnings introduced in or after a specific compiler version, see [Compiler warnings by compiler version](compiler-warnings-by-compiler-version.md).

## Example

Source code files that use `..` path segments in `#include` directives can trigger this warning when C4464 is enabled or when the **`/Wall`** option is specified.

In this example, the project source is in *`C:\project\source`* and an external library's header files are in *`C:\other_lib\headers`*:

```cpp
// C:\project\source\C4464.cpp
// Compile by using: cl /w14464 C4464.cpp
#include "..\..\other_lib\headers\other.h"          // C4464
#include "..\..\other_lib\headers\extras\nested.h"  // C4464
// . . .
```

To fix this issue, add the path *`C:\other_lib\headers`* to your project's include directories. Then, change the source to include the header files as external headers:

```cpp
// C:\project\source\C4464b.cpp
// Compile by using: cl /w14464 /I"C:\other_lib\headers" C4464b.cpp
#include <other.h>  // OK
#include <extras\nested.h>  // OK
// . . .
```
