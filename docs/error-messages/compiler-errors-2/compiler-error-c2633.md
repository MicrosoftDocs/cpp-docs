---
title: "Compiler Error C2633"
description: "Learn more about: Compiler Error C2633"
ms.date: 11/04/2016
f1_keywords: ["C2633"]
helpviewer_keywords: ["C2633"]
---
# Compiler Error C2633

> 'identifier' : 'inline' is the only legal storage class for constructors

## Remarks

A constructor is declared as a storage class other than inline.

## Example

The following example generates C2633:

```cpp
// C2633.cpp
// compile with: /c
class C {
   extern C();   // C2633, not inline
   inline C();   // OK
};
```
