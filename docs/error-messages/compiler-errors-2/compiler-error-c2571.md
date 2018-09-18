---
title: "Compiler Error C2571 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2571"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2571"]
ms.assetid: c6522616-dee9-4d7d-9bf8-30a7e1deaadf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2571

'function' : virtual function cannot be in union 'union'

A union is declared with a virtual function. You can declare a virtual function only in a class or structure.  Possible resolutions:

1. Change the union to a class or structure.

1. Make the function nonvirtual.

The following sample generates C2571:

```
// C2571.cpp
// compile with: /c
union A {
   virtual void func1();   // C2571
   void func2();   // OK
};
```