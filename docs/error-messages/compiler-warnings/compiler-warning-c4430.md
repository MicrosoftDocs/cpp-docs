---
description: "Learn more about: Compiler Warning C4430"
title: "Compiler Warning C4430"
ms.date: "11/04/2016"
f1_keywords: ["C4430"]
helpviewer_keywords: ["C4430"]
ms.assetid: 12efbfff-aa58-4a86-a7d6-2c6a12d01dd3
---
# Compiler Warning C4430

missing type specifier - int assumed. Note: C++ does not support default-int

This error can be generated as a result of compiler conformance work that was done for Visual Studio 2005: all declarations must explicitly specify the type; int is no longer assumed.

C4430 is always issued as an error.  You can turn off this warning with the `#pragma warning` or **/wd**; see [warning](../../preprocessor/warning.md) or [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../../build/reference/compiler-option-warning-level.md) for more information.

## Example

The following sample generates C4430.

```cpp
// C4430.cpp
// compile with: /c
struct CMyClass {
   CUndeclared m_myClass;  // C4430
   int m_myClass;  // OK
};

typedef struct {
   POINT();   // C4430
   // try the following line instead
   // int POINT();
   unsigned x;
   unsigned y;
} POINT;
```
