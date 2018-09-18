---
title: "Compiler Error C3055 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3055"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3055"]
ms.assetid: 60446ee0-18dd-48fc-9059-f0a14229dce8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3055

'symbol' : symbol cannot be referenced before it is used in 'threadprivate' directive

A symbol was referenced and then used in a [threadprivate](../../parallel/openmp/reference/threadprivate.md) clause, which is not allowed.

The following sample generates C3055:

```
// C3055.cpp
// compile with: /openmp
int x, y;
int z = x;
#pragma omp threadprivate(x, y)   // C3055

void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```

Possible resolution:

```
// C3055b.cpp
// compile with: /openmp /LD
int x, y, z;
#pragma omp threadprivate(x, y)

void test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```