---
title: "Compiler Error C2886"
description: "Learn more about: Compiler Error C2886"
ms.date: 11/04/2016
f1_keywords: ["C2886"]
helpviewer_keywords: ["C2886"]
---
# Compiler Error C2886

> 'class::identifier' : symbol cannot be used in a member using-declaration

## Remarks

A **`using`** declaration uses a symbol, such as a namespace name. A **`using`** declaration is for declaring base class members.

## Example

The following example generates C2886:

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
