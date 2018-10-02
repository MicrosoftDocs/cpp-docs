---
title: "Compiler Error C3048 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3048"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3048"]
ms.assetid: 48e07091-94d9-471d-befe-7e2507631edd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3048

Expression following '#pragma omp atomic' has improper form

An atomic directive was incorrectly specified.

The following sample generates C3048:

```
// C3048.cpp
// compile with: /openmp vcomps.lib
#include "omp.h"
#include <stdio.h>

int main() {
   int a[10];
   omp_set_num_threads(4);
   #pragma omp parallel
   {
      #pragma omp atomic
      a[0] = 1;   // C3048
      // try the following line instead
      // a[0] += 1;
   }
}
```