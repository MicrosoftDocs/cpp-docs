---
description: "Learn more about: Compiler Error C2886"
title: "Compiler Error C2886"
ms.date: "11/04/2016"
f1_keywords: ["C2886"]
helpviewer_keywords: ["C2886"]
ms.assetid: c01588a1-484c-4dc9-a3f1-f900c6e44543
---
# Compiler Error C2886

'class::identifier' : symbol cannot be used in a member using-declaration

A **`using`** declaration uses a symbol, such as a namespace name. A **`using`** declaration is for declaring base class members.

The following sample generates C2886:

```cpp
// C2886.cpp
// compile with: /c
namespace Z {
    int i;
}

class B {
protected:
    int i;
};

class D : public B {
    // Error: Z is a namespace
    using Z::i;   // C2886

    // OK: B is a base class
    using B::i;
};
```
