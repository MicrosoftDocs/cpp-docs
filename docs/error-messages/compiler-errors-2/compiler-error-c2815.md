---
description: "Learn more about: Compiler Error C2815"
title: "Compiler Error C2815"
ms.date: "11/04/2016"
f1_keywords: ["C2815"]
helpviewer_keywords: ["C2815"]
ms.assetid: d0256fd6-0721-4c99-b03c-52d96e77a613
---
# Compiler Error C2815

'operator delete' : first formal parameter must be 'void *', but 'param' was used

Any user-defined [operator delete](../../standard-library/new-operators.md#op_delete) function must take a first formal parameter of type `void *`.

The following sample generates C2815:

```cpp
// C2815.cpp
// compile with: /c
class CMyClass {
public:
   void mf1(int *a);
   void operator delete(CMyClass *);   // C2815
   void operator delete(void *);
};
```
