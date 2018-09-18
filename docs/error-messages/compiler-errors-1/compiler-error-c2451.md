---
title: "Compiler Error C2451 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2451"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2451"]
ms.assetid: a64c93a5-ab8d-4d39-ae57-9ee7ef803036
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2451

conditional expression of type 'type' is illegal

The conditional expression evaluates to an integer type.

The following sample generates C2451:

```
// C2451.cpp
class B {};

int main () {
   B b1;
   int i = 0;
   if (b1)   // C2451
   // try the following line instead
   // if (i)
      ;
}
```