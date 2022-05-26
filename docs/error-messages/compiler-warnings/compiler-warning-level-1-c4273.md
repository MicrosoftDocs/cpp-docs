---
description: "Learn more about: Compiler Warning (level 1) C4273"
title: "Compiler Warning (level 1) C4273"
ms.date: 05/23/2022
f1_keywords: ["C4273"]
helpviewer_keywords: ["C4273"]
ms.assetid: cc18611d-9454-40a4-ad73-69823d5888fb
---
# Compiler Warning (level 1) C4273

> '*function*' : inconsistent DLL linkage

Two definitions in a file differ in their use of [`dllimport`](../../cpp/dllexport-dllimport.md).

## Examples

The following sample generates C4273, and shows how to fix it.

```cpp
// C4273.cpp
// compile with: /W1 /c
char __declspec(dllimport) c;
char c;   // C4273, delete this line or the line above to resolve
```

The following sample generates C4273. To fix it, delete the redeclaration of `printf_s`.

```cpp
// C4273_b.cpp
// compile with: /W1 /clr /c
#include <stdio.h>
extern "C" int printf_s(const char *, ...);   // C4273
```

## See also

[`dllexport`, `dllimport`](../../cpp/dllexport-dllimport.md)\
[Export C functions for use in C or C++ language executables](../../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)
