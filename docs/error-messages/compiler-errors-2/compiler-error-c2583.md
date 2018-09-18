---
title: "Compiler Error C2583 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2583"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2583"]
ms.assetid: b1c952dc-872c-47e4-9fc8-4dd72bcee6f9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2583

'identifier' : 'const/volatile' 'this' pointer is illegal for constructors/destructors

A constructor or destructor is declared `const` or `volatile`. This is not allowed.

The following sample generates C2583:

```
// C2583.cpp
// compile with: /c
class A {
public:
   int i;
   A() const;   // C2583

   // try the following line instead
   // A();
};
```