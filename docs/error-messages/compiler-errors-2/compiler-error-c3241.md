---
description: "Learn more about: Compiler Error C3241"
title: "Compiler Error C3241"
ms.date: "11/04/2016"
f1_keywords: ["C3241"]
helpviewer_keywords: ["C3241"]
ms.assetid: 2ca14879-bba0-4a23-b22a-72cfff92d6a4
---
# Compiler Error C3241

'method' : this method was not introduced by 'interface'

When you explicitly override a function, the function signature must exactly match the declaration for the function that you are overriding.

The following sample generates C3241:

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
