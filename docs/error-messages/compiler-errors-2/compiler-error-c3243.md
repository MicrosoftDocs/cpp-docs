---
title: "Compiler Error C3243 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3243"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3243"]
ms.assetid: 35d8ad1a-377d-47df-be9d-c55eea23340f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3243

none of the overload functions were introduced by 'interface'

You tried to [explicitly override](../../cpp/explicit-overrides-cpp.md) a member that does not exist in the specified interface.

The following sample generates C3243:

```
// C3243.cpp
#pragma warning(disable:4199)
__interface IX14A {
   void g();
};

__interface IX14B {
   void f();
   void f(int);
};

class CX14 : public IX14A, public IX14B {
public:
   void IX14A::g();
   void IX14B::f();
   void IX14B::f(int);
};

void CX14::IX14A::f()   // C3243 occurs here
{
}
```