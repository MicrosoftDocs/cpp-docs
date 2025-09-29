---
title: "Compiler Error C3282"
description: "Learn more about: Compiler Error C3282"
ms.date: 11/04/2016
f1_keywords: ["C3282"]
helpviewer_keywords: ["C3282"]
---
# Compiler Error C3282

> generic parameter lists can only appear on managed or WinRTclasses, structs, or functions

## Remarks

A generic parameter list was used incorrectly.  For more information, see [Generics](../../extensions/generics-cpp-component-extensions.md).

## Example

The following example generates C3282 and shows how to fix it.

```cpp
// C3282.cpp
// compile with: /clr /c
generic <typename T> int x;   // C3282

ref struct GC0 {
   generic <typename T> int x;   // C3282
};

// OK
generic <typename T>
ref class M {};
```
