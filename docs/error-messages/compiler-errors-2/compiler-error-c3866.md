---
title: "Compiler Error C3866"
description: "Learn more about: Compiler Error C3866"
ms.date: 11/04/2016
f1_keywords: ["C3866"]
helpviewer_keywords: ["C3866"]
---
# Compiler Error C3866

> function call missing argument list

## Remarks

Inside a nonstatic member function, a destructor or finalizer call did not have an argument list.

## Example

The following example generates C3866:

```cpp
// C3866.cpp
// compile with: /c
class C {
   ~C();
   void f() {
      this->~C;   // C3866
      this->~C();   // OK
   }
};
```
