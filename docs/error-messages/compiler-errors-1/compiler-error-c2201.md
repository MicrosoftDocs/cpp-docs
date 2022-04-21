---
description: "Learn more about: Compiler Error C2201"
title: "Compiler Error C2201"
ms.date: 05/03/2021
f1_keywords: ["C2201"]
helpviewer_keywords: ["C2201"]
---
# Compiler Error C2201

> '*identifier*' : must have external linkage in order to be exported/imported

The exported identifier is **`static`**.

## Example

The following sample generates C2286, and shows how to fix it:

```cpp
// C2201.cpp
// compile with: /c
__declspec(dllexport) static void func() {}   // C2201 func() is static
__declspec(dllexport) void func2() {}   // OK
```

## See also

[Types of Linkage](../../cpp/program-and-linkage-cpp.md)
