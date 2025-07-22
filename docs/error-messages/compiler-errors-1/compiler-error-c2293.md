---
title: "Compiler Error C2293"
description: "Learn more about: Compiler Error C2293"
ms.date: 11/04/2016
f1_keywords: ["C2293"]
helpviewer_keywords: ["C2293"]
---
# Compiler Error C2293

> 'identifier': illegal to have a member variable as a __based specifier

## Remarks

Specifiers for **`__based`** modifier must be nonmember pointers.

## Example

The following example generates C2293:

```cpp
// C2293.cpp
// compile with: /c
class A {
   static int *i;
   void __based(i) *bp;   // C2293
   void *bp2;   // OK
};
```
