---
title: "Compiler Error C2888"
description: "Learn more about: Compiler Error C2888"
ms.date: 11/04/2016
f1_keywords: ["C2888"]
helpviewer_keywords: ["C2888"]
---
# Compiler Error C2888

> 'identifier' : symbol cannot be defined within namespace 'namespace'

## Remarks

A symbol belonging to namespace A must be defined in a namespace that encloses A.

## Example

The following sample generates C2888:

```cpp
// C2888.cpp
// compile with: /c
namespace M {
   namespace N {
      void f1();
      void f2();
   }

   void N::f1() {}   // OK: namespace M encloses N
}

namespace O {
   void M::N::f2() {}   // C2888 namespace O does not enclose M
}
```
