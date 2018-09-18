---
title: "Compiler Error C3045 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3045"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3045"]
ms.assetid: 9351ba3e-3d3f-455f-ac90-a810fa9fd947
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3045

Expected a compound statement following OpenMP 'sections' directive. Missing '{'

A code block delimited by braces must follow a [sections](../../parallel/openmp/reference/sections-openmp.md) directive.

The following sample generates C3045:

```
// C3045.cpp
// compile with: /openmp /c
#include "omp.h"

int main() {
   int n2 = 2, n3 = 3;

   #pragma omp parallel
   {
      ++n2;

      #pragma omp sections
         ++n2;   // C3045

      #pragma omp sections   // OK
      {
         ++n3;
      }
   }
}
```