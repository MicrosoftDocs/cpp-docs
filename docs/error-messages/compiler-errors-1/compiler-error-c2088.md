---
title: "Compiler Error C2088 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2088"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2088"]
ms.assetid: b93f7094-185b-423d-8bb9-507cd757dbf5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2088

'operator' : illegal for 'class-key'

The operator was not defined for the structure or union. This error is only valid for C code.

The following sample generates C2088 three times:

```
// C2088.c
struct S {
   int m_i;
} s;

int main() {
   int i = s * 1;   // C2088
   struct S s2 = +s;   // C2088
   s++;   // C2088
}
```