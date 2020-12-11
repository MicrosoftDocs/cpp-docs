---
description: "Learn more about: Compiler Error C2436"
title: "Compiler Error C2436"
ms.date: "11/04/2016"
f1_keywords: ["C2436"]
helpviewer_keywords: ["C2436"]
ms.assetid: ca4cc813-bc1d-4c0a-9a2c-3a5fe673d084
---
# Compiler Error C2436

'identifier' : member function or nested class in constructor initializer list

Member functions or local classes in the constructor initializer list cannot be initialized.

The following sample generates C2436:

```cpp
// C2436.cpp
struct S{
   int f();
   struct Inner{
      int i;
   };
   S():f(10), Inner(0){}   // C2436
};
```
