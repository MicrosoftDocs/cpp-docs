---
description: "Learn more about: Compiler Error C2638"
title: "Compiler Error C2638"
ms.date: "11/04/2016"
f1_keywords: ["C2638"]
helpviewer_keywords: ["C2638"]
ms.assetid: 9d4275e8-406d-455e-afee-3a37799230e0
---
# Compiler Error C2638

'identifier' : __based modifier illegal on pointer to member

The **`__based`** modifier cannot be used for pointers to members.

The following sample generates C2638:

```cpp
// C2638.cpp
void *a;

class C {
public:
   int i;
   int j;
   int func();
};
int __based (a) C::* cpi = &C::i;  // C2638
int (__based (a) C::* cpf)() = &C::func; // c2638
```
