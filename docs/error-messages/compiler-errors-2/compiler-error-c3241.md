---
title: "Compiler Error C3241"
description: "Learn more about: Compiler Error C3241"
ms.date: 11/04/2016
f1_keywords: ["C3241"]
helpviewer_keywords: ["C3241"]
---
# Compiler Error C3241

> 'method' : this method was not introduced by 'interface'

## Remarks

When you explicitly override a function, the function signature must exactly match the declaration for the function that you are overriding.

## Example

The following example generates C3241:

```cpp
// C3241.cpp
#pragma warning(disable:4199)

__interface IX12A {
   void mf();
};

__interface IX12B {
   void mf(int);
};

class CX12 : public IX12A, public IX12B { // C3241
   void IX12A::mf(int);
};
```
