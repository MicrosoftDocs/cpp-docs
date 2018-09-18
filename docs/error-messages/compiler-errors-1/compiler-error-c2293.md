---
title: "Compiler Error C2293 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2293"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2293"]
ms.assetid: 17e7b4e2-368b-4dd7-a01b-d82be60f8e56
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2293

'identifier': illegal to have a member variable as a __based specifier

Specifiers for `__based` modifier must be nonmember pointers.

The following sample generates C2293:

```
// C2293.cpp
// compile with: /c
class A {
   static int *i;
   void __based(i) *bp;   // C2293
   void *bp2;   // OK
};
```