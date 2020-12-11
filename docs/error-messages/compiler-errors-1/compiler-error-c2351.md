---
description: "Learn more about: Compiler Error C2351"
title: "Compiler Error C2351"
ms.date: "11/04/2016"
f1_keywords: ["C2351"]
helpviewer_keywords: ["C2351"]
ms.assetid: 5439ccf6-66f6-4859-964c-c73f5eddfc1b
---
# Compiler Error C2351

obsolete C++ constructor initialization syntax

In a new-style initialization list for a constructor, you must explicitly name each direct base class, even if it is the only base class.

The following sample generates C2351:

```cpp
// C2351.cpp
// compile with: /c
class B {
public:
   B() : () {}   // C2351
   B() {}   // OK
};
```
