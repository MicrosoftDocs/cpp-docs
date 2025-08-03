---
title: "Compiler Error C2669"
description: "Learn more about: Compiler Error C2669"
ms.date: 11/04/2016
f1_keywords: ["C2669"]
helpviewer_keywords: ["C2669"]
---
# Compiler Error C2669

> member function not allowed in anonymous union

## Remarks

[Anonymous unions](../../cpp/unions.md#anonymous_unions) cannot have member functions.

## Example

The following example generates C2669:

```cpp
// C2669.cpp
struct X {
   union {
      int i;
      void f() {   // C2669, remove function
         i = 0;
      }
   };
};
```
