---
title: "Compiler Error C2258"
description: "Learn more about: Compiler Error C2258"
ms.date: 11/04/2016
f1_keywords: ["C2258"]
helpviewer_keywords: ["C2258"]
---
# Compiler Error C2258

> illegal pure syntax, must be '= 0'

## Remarks

A pure virtual function is declared with incorrect syntax.

## Example

The following example generates C2258:

```cpp
// C2258.cpp
// compile with: /c
class A {
public:
   void virtual func1() = 1; // C2258
   void virtual func2() = 0;   // OK
};
```
