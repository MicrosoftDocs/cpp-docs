---
description: "Learn more about: Compiler Error C3646"
title: "Compiler Error C3646"
ms.date: "06/14/2018"
f1_keywords: ["C3646"]
helpviewer_keywords: ["C3646"]
ms.assetid: 4391ead2-9637-4ca3-aeda-5a991b18d66d
---
# Compiler Error C3646

> 'specifier' : unknown override specifier

## Remarks

The compiler found a token in the position where it expected to find an override specifier, but the token was not recognized by the compiler.

For example, if the unrecognized *specifier* is **_NOEXCEPT**, replace it with the keyword **`noexcept`**.

For more information, see [Override Specifiers](../../extensions/override-specifiers-cpp-component-extensions.md).

## Example

The following sample generates C3646 and shows a way to fix it:

```cpp
// C3646.cpp
// compile with: /clr /c
ref class C {
   void f() unknown;   // C3646
   // try the following line instead
   // virtual void f() abstract;
};
```
