---
description: "Learn more about: Compiler Warning (level 1, error) C4430"
title: "Compiler warning (level 1, error) C4430"
ms.date: 04/22/2025
f1_keywords: ["C4430"]
helpviewer_keywords: ["C4430"]
---
# Compiler Warning (level 1, Error) C4430

> missing type specifier - int assumed. Note: C++ does not support default-int

This warning is issued when a type specifier is missing in a declaration. The compiler used to assume the type was `int` in this case. But due to compiler conformance work done for Visual Studio 2005, all declarations must explicitly specify the type.

C4430 is always issued as an error. You can turn off this warning with the `#pragma warning` or `/wd`. For more information, see [`warning`](../../preprocessor/warning.md) or [`/w`, `/W0`, `/W1`, `/W2`, `/W3`, `/W4`, `/w1`, `/w2`, `/w3`, `/w4`, `/Wall`, `/wd`, `/we`, `/wo`, `/Wv`, `/WX` (Warning Level)](../../build/reference/compiler-option-warning-level.md).

## Example

The following sample generates C4430:

```cpp
// compile with: /c
struct CMyClass {
   CUndeclared m_myClass;  // C4430
};

typedef struct {
   someFunction();   // C4430
   unsigned x;
   unsigned y;
} POINT;
```

To fix this code, you'd need to define the type `CUndeclared` and the function `someFunction` prior to their use.
