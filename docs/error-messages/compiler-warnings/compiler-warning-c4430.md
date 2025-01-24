---
description: "Learn more about: Compiler Warning (level 1, error) C4430"
title: "Compiler warning (level 1, error) C4430"
ms.date: "1/25/2025"
f1_keywords: ["C4430"]
helpviewer_keywords: ["C4430"]
---
# Compiler Warning (level 1, Error) C4430

> missing type specifier - int assumed. Note: C++ does not support default-int

This error might be generated due to compiler conformance work done for Visual Studio 2005: all declarations must explicitly specify the type; `int` is no longer assumed.

C4430 is always issued as an error. You can turn off this warning with the `#pragma warning` or `/wd`. For more information, see [`warning`](../../preprocessor/warning.md) or [`/w`, `/W0`, `/W1`, `/W2`, `/W3`, `/W4`, `/w1`, `/w2`, `/w3`, `/w4`, `/Wall`, `/wd`, `/we`, `/wo`, `/Wv`, `/WX` (Warning Level)](../../build/reference/compiler-option-warning-level.md).

## Example

The following sample generates C4430:

```cpp
// compile with: /c
struct CMyClass {
   CUndeclared m_myClass;  // C4430
   int m_myClass;
};

typedef struct {
   someFunction();   // C4430
   unsigned x;
   unsigned y;
} POINT;
```

The following addresses C4430:

```cpp
// compile with: /c

#include "CUndeclared.h" // for `CUndeclared`

struct CMyClass {
   CUndeclared m_myClass;
   int m_myClass;
};

typedef struct {
   int someFunction();
   unsigned x;
   unsigned y;
} POINT;
```