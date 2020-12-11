---
description: "Learn more about: Compiler Error C2549"
title: "Compiler Error C2549"
ms.date: "11/04/2016"
f1_keywords: ["C2549"]
helpviewer_keywords: ["C2549"]
ms.assetid: 29310094-54a3-4605-bc6d-a312a68daf5d
---
# Compiler Error C2549

user-defined conversion cannot specify a return type

The following sample generates C2549:

```cpp
// C2549.cpp
// compile with: /c
class X {
public:
   int operator int() { return value; }   // C2549

   // try the following line instead
   // operator int() { return value; }
private:
   int value;
};
```
