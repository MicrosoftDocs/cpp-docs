---
title: "Compiler Error C2511 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2511"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2511"]
ms.assetid: df999efe-fe2b-418b-bb55-4af6a0592631
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2511

'identifier' : overloaded member function not found in 'class'

No version of the function is declared with the specified parameters.  Possible causes:

1. Wrong parameters passed to function.

1. Parameters passed in wrong order.

1. Incorrect spelling of parameter names.

The following sample generates C2511:

```
// C2511.cpp
// compile with: /c
class C {
   int c_2;
   int Func(char *, char *);
};

int C::Func(char *, char *, int i) {   // C2511
// try the following line instead
// int C::Func(char *, char *) {
   return 0;
}
```