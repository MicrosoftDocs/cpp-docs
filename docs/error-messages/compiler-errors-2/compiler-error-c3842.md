---
description: "Learn more about: Compiler Error C3842"
title: "Compiler Error C3842"
ms.date: "11/04/2016"
f1_keywords: ["C3842"]
helpviewer_keywords: ["C3842"]
ms.assetid: 41a1a44a-c618-40a2-8d26-7da27d14095d
---
# Compiler Error C3842

'function': 'const' and 'volatile' qualifiers on member functions of WinRT or managed types are not supported

[const](../../cpp/const-cpp.md) and [volatile](../../cpp/volatile-cpp.md) are not supported on member functions of Windows Runtime or managed types.

The following sample generates C3842:

```cpp
// C3842a.cpp
// compile with: /clr /c
public ref struct A {
   void f() const {}   // C3842
   void f() volatile {}   // C3842

   void f() {}
};
```
