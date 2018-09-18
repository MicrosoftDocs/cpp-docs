---
title: "Compiler Error C2462 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2462"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2462"]
ms.assetid: a8601bf8-f5ce-41de-9117-e2632bd4996b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2462

'identifier' : cannot define a type in a 'new-expression'

You cannot define a type in the operand field of the `new` operator. Put the type definition in a separate statement.

The following sample generates C2462:

```
// C2462.cpp
int main() {
   new struct S { int i; };   // C2462
}
```