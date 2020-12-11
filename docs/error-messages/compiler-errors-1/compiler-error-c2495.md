---
description: "Learn more about: Compiler Error C2495"
title: "Compiler Error C2495"
ms.date: "11/04/2016"
f1_keywords: ["C2495"]
helpviewer_keywords: ["C2495"]
ms.assetid: bb7066fe-3549-4901-97e4-157f3c04dd57
---
# Compiler Error C2495

'identifier' : 'nothrow' can only be applied to function declarations or definitions

The [nothrow](../../cpp/nothrow-cpp.md) extended attribute can be applied to function declarations or definitions only.

The following sample generates C2495:

```cpp
// C2495.cpp
// compile with: /c
__declspec(nothrow) class X {   // C2495
   int m_data;
} x;

__declspec(nothrow) void test();   // OK
```
