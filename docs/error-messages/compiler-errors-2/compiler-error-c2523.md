---
description: "Learn more about: Compiler Error C2523"
title: "Compiler Error C2523"
ms.date: "11/04/2016"
f1_keywords: ["C2523"]
helpviewer_keywords: ["C2523"]
ms.assetid: 7951b700-8f37-45a0-beb4-a79ae0ced72e
---
# Compiler Error C2523

'class::~identifier' : destructor/finalizer tag mismatch

The name of the destructor must be the class name preceded by a tilde (`~`). The constructor and destructor are the only members that have the same name as the class.

The following sample generates C2523:

```cpp
// C2523.cpp
// compile with: /c
class A {
   ~B();    // C2523
   ~A();   // OK
};
```
