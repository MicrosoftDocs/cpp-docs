---
title: "Compiler Error C3017 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3017"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3017"]
ms.assetid: 12ab2c2a-d0d2-4900-9cbf-39be0af590dd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3017

termination test in OpenMP 'for' statement has improper form

A `for` loop in an OpenMP statement must be fully and explicitly specified.

The following sample generates C3017:

```
// C3017.cpp
// compile with: /openmp
int main()
{
   int i = 0, j = 10;

   #pragma omp parallel
   {
      #pragma omp for
      for (i = 0; i; ++i)   // C3017
      // Try the following line instead:
      // for (i = 0; i < 10; ++i)
         ;
   }
}
```