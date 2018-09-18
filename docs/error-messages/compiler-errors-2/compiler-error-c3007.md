---
title: "Compiler Error C3007 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3007"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3007"]
ms.assetid: e415ef42-bdc9-4f32-8198-5e25b289a089
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3007

'arg' : clause on OpenMP 'directive' directive does not take an argument

An OpenMP directive had an argument, but the directive does not take an argument.

The following sample generates C3007:

```
// C3007.c
// compile with: /openmp
int main()
{
   #pragma omp parallel for ordered(2)   // C3007
}
```