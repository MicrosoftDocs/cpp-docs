---
title: "Compiler Error C2877 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2877"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2877"]
ms.assetid: 0b54837e-fcae-4d90-9658-623250435e24
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2877

'symbol' is not accessible from 'class'

All members derived from a base class must be accessible in the derived class.

The following sample generates C2877:

```
// C2877.cpp
// compile with: /c
class A {
private:
   int a;
};

class B : public A {
   using A::a;   // C2877
};
```