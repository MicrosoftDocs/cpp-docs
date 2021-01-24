---
description: "Learn more about: Compiler Error C2669"
title: "Compiler Error C2669"
ms.date: "11/04/2016"
f1_keywords: ["C2669"]
helpviewer_keywords: ["C2669"]
ms.assetid: f9cb8111-bcdc-484b-a863-2c42e15a0496
---
# Compiler Error C2669

member function not allowed in anonymous union

[Anonymous unions](../../cpp/unions.md#anonymous_unions) cannot have member functions.

## Example

The following sample generates C2669:

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
