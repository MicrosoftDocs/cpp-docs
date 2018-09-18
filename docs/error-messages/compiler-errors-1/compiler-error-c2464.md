---
title: "Compiler Error C2464 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2464"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2464"]
ms.assetid: ace953d6-b414-49ee-bfef-90578a8da00c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2464

'identifier' : cannot use 'new' to allocate a reference

A reference identifier was allocated with the `new` operator. References are not memory objects, so `new` cannot return a pointer to them. Use the standard variable declaration syntax to declare a reference.

The following sample generates C2464:

```
// C2464.cpp
int main() {
   new ( int& ir );   // C2464
}
```