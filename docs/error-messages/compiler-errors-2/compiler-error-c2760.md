---
title: "Compiler Error C2760"
ms.date: "11/04/2016"
f1_keywords: ["C2760"]
helpviewer_keywords: ["C2760"]
ms.assetid: 585757fd-d519-43f3-94e5-50316ac8b90b
---
# Compiler Error C2760

syntax error : expected 'name1' not 'name2'

A casting operator is used with an invalid operator.

The following sample generates C2760:

```
// C2760.cpp
class B {};
class D : public B {};

void f(B* pb) {
    D* pd1 = static_cast<D*>(pb);
    D* pd2 = static_cast<D*>=(pb);  // C2760
    D* pd3 = static_cast<D*=(pb);   // C2760
}
```