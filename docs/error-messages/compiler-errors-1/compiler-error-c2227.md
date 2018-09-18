---
title: "Compiler Error C2227 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2227"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2227"]
ms.assetid: d470e8b8-7e15-468b-84fa-37d1a0132271
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2227

left of '->member' must point to class/struct/union/generic type

The operand to the left of `->` is not a pointer to a class, structure, or union.

The following sample generates C2227:

```
// C2227.cpp
int *pInt;
struct S {
public:
    int member;
} s, *pS = &s;

int main() {
   pInt->member = 0;   // C2227 pInt points to an int
   pS->member = 0;   // OK
}
```