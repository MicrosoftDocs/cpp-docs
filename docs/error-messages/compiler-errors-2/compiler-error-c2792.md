---
description: "Learn more about: Compiler Error C2792"
title: "Compiler Error C2792"
ms.date: "11/04/2016"
f1_keywords: ["C2792"]
helpviewer_keywords: ["C2792"]
ms.assetid: 392cf748-4f5e-4e62-a364-3118d5658408
---
# Compiler Error C2792

'super' : this keyword must be followed by '::'

The only token that can follow the keyword **`__super`** is `::`.

The following sample generates C2792:

```cpp
// C2792.cpp
struct B {
   void mf();
};

struct D : B {
   void mf() {
      __super.();   // C2792

      // try the following line instead
      // __super::mf();
   }
};
```
