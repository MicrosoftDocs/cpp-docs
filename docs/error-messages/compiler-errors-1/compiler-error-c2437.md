---
title: "Compiler Error C2437"
description: "Learn more about: Compiler Error C2437"
ms.date: 11/04/2016
f1_keywords: ["C2437"]
helpviewer_keywords: ["C2437"]
---
# Compiler Error C2437

> 'identifier' : already initialized

## Remarks

An object can be initialized only once.

## Example

The following example generates C2437:

```cpp
// C2437.cpp
// compile with: /c
class A {
public:
   A(int i) {}
};

class B : A {
   B() : A(1), A(2) {}   // C2437
   B() : A(1) {}   // OK
};
```
