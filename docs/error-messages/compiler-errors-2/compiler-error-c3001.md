---
title: "Compiler Error C3001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3001"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3001"]
ms.assetid: d0e03478-1b44-47e5-8f5b-70415fa1f8bc
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3001

'error_text' : expected an OpenMP directive name

The `omp` pragma must be followed by a directive.

The following sample generates C3001:

```
// C3001.c
// compile with: /openmp
int main()
{
   #pragma omp   // C3001 missing token
}
```