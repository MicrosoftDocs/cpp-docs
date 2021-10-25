---
description: "Learn more about: Fatal Error C1047"
title: "Fatal Error C1047"
ms.date: 10/22/2021
f1_keywords: ["C1047"]
helpviewer_keywords: ["C1047"]
---
# Fatal Error C1047

> The object or library file '*filename*' was created with an older compiler than other objects; rebuild old objects and libraries

This error can happen if you use a new version of the compiler to build your project, but don't do a clean rebuild of existing object files or libraries.

## Remarks

C1047 is caused when object files or libraries built by using **`/GL`** or **`/LTCG`** in different versions of the Visual Studio C/C++ compiler toolset get linked together. For example, you can't link a **`/LTCG`** library built by using Visual Studio 2019 version 16.7 to an app built by using Visual Studio 2019 version 16.8. Both the major and minor update numbers of the toolset used to compile the objects and libraries must match exactly.

To resolve C1047, rebuild all object files or libraries by using the same version of the toolset.

## See also

[`/GL` (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md)\
[`/LTCG` (Link-time code generation)](../../build/reference/ltcg-link-time-code-generation.md)\
[C++ binary compatibility between Visual Studio versions](../../porting/binary-compat-2015-2017.md)
