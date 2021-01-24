---
description: "Learn more about: Compiler Error C2612"
title: "Compiler Error C2612"
ms.date: "11/04/2016"
f1_keywords: ["C2612"]
helpviewer_keywords: ["C2612"]
ms.assetid: 6faacfd6-4455-41a2-808e-0f6799f84d6d
---
# Compiler Error C2612

trailing 'char' illegal in base/member initializer list

A character appears after the last base or member in an initializer list.

The following sample generates C2612:

```cpp
// C2612.cpp
class A {
public:
   int i;
   A( int ia ) : i( ia ) + {};   // C2612
};
```
