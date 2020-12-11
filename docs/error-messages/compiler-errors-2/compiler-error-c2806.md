---
description: "Learn more about: Compiler Error C2806"
title: "Compiler Error C2806"
ms.date: "11/04/2016"
f1_keywords: ["C2806"]
helpviewer_keywords: ["C2806"]
ms.assetid: 7c9ff1f4-1590-4c47-991d-b1075a173b48
---
# Compiler Error C2806

'operator operator' has too many formal parameters

An overloaded operator has too many parameters.

The following sample generates C2806:

```cpp
// C2806.cpp
// compile with: /c
class X {
public:
   X operator++ ( int, int );   // C2806 more than 1 parameter
   X operator++ ( int );   // OK
} ;
```
