---
title: "Compiler Error C2353"
description: "Learn more about: Compiler Error C2353"
ms.date: 11/04/2016
f1_keywords: ["C2353"]
helpviewer_keywords: ["C2353"]
---
# Compiler Error C2353

> exception specification is not allowed

## Remarks

Exception specifications are not allowed on member functions of managed classes.

## Example

The following example generates C2353:

```cpp
// C2353.cpp
// compile with: /clr /c
ref class X {
   void f() throw(int);   // C2353
   void f();   // OK
};
```
