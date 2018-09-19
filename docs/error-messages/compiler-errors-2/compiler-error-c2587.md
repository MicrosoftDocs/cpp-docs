---
title: "Compiler Error C2587 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2587"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2587"]
ms.assetid: 7637a2c7-35d4-4b5a-a8f2-515a7bda98fd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2587

'identifier' : illegal use of local variable as default parameter

Local variables are not allowed as default parameters.

The following sample generates C2587:

```
// C2587.cpp
// compile with: /c
int i;
void func() {
   int j;
   extern void func2( int k = j );  // C2587 -- local variable
   extern void func3( int k = i );   // OK
}
```