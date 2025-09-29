---
title: "Compiler Error C2969"
description: "Learn more about: Compiler Error C2969"
ms.date: 11/04/2016
f1_keywords: ["C2969"]
helpviewer_keywords: ["C2969"]
---
# Compiler Error C2969

> syntax error : 'symbol' : expected member function definition to end with '}'

## Remarks

A template member function definition has an unmatched closing brace.

## Example

The following example generates C2969:

```cpp
// C2969.cpp
// compile with: /c
class A {
   int i;
public:
   A(int i) {}
};

A anA(1);

class B {
   A a;
   B() : a(anA);   // C2969
   // try the following line instead
   // B() : a(anA) {}
};
```
