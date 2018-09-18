---
title: "Compiler Error C2636 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2636"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2636"]
ms.assetid: 379873ec-8d05-49f8-adf1-b067bc07bdb8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2636

'identifier' : pointer to reference member is illegal

A pointer to a reference member was declared.

The following sample generates C2636:

```
// C2636.cpp
struct S {};
int main() {
   int &S::*prs;   // C2636
   int S::*prs1;   // OK
   int *S::*prs2;   // OK
}
```