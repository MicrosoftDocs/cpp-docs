---
description: "Learn more about: Compiler Error C2733"
title: "Compiler Error C2733"
ms.date: 12/02/2021
f1_keywords: ["C2733"]
helpviewer_keywords: ["C2733"]
ms.assetid: 67f83561-c633-407c-a2ee-f9fd16e165bf
---
# Compiler Error C2733

> you cannot overload a function with 'C' linkage

More than one overloaded function is declared with `extern "C"` linkage. When using `"C"` linkage, only one form of a specified function can be external. Since overloaded functions have the same undecorated name, they can't be used with C programs.

This error may occur after an upgrade because of conformance changes in Visual Studio 2019. Starting in Visual Studio 2019 version 16.3, the [`/Zc:externC-`](../../build/reference/zc-externc.md) compiler option relaxes this check. The option must come after any [`/permissive-`](../../build/reference/permissive-standards-conformance.md) option on the command line.

## Example

The following sample generates C2733:

```cpp
// C2733.cpp
extern "C" {
   void F1(int);
}

extern "C" {
   void F1();   // C2733
   // try the following line instead
   // void F2();
}
```

## See also

[Compiler Error C2116](../compiler-errors-1/compiler-error-c2116.md)\
[`extern` (C++)](../../cpp/extern-cpp.md)\
[`/Zc:externC` (Use Standard C++ `extern "C"` rules)](../../build/reference/zc-externc.md)
