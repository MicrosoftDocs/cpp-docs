---
description: "Learn more about: Compiler Error C2570"
title: "Compiler Error C2570"
ms.date: "11/04/2016"
f1_keywords: ["C2570"]
helpviewer_keywords: ["C2570"]
ms.assetid: d65d0b32-2fac-464a-bcdf-0ebcedf3bf32
---
# Compiler Error C2570

'identifier' : union cannot have base classes

A union derives from a class, structure, or union. This is not allowed. Declare the derived type as a class or structure instead.

The following sample generates C2570:

```cpp
// C2570.cpp
// compile with: /c
class base {};
union hasPubBase : public base {};   // C2570
union hasNoBase {};   // OK
```
