---
title: "Compiler Error C3010 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3010"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3010"]
ms.assetid: e959d038-bba6-432a-9c0a-0470474de7d9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3010

'label' : jump out of OpenMP structured block not allowed

Code cannot jump into or out of an OpenMP block.

The following sample generates C3010:

```
// C3010.c
// compile with: /openmp
int main() {
   #pragma omp parallel
   {
      #pragma omp parallel
      {
         goto lbl3;
      }
   }
   lbl3:;   // C3010
}
```