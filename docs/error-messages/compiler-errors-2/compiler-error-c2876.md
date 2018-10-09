---
title: "Compiler Error C2876 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2876"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2876"]
ms.assetid: 8b674bf1-f9f4-4a8e-8127-e884c1d1708f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2876

'class::symbol' : not all overloads are accessible

All overloaded forms of a function in a base class must be accessible to the derived class.

The following sample generates C2876:

```
// C2876.cpp
// compile with: /c
class A {
public:
   double a(double);
private:
   int a(int);
};

class B : public A {
   using A::a;   // C2876 one overload is private in base class
};
```