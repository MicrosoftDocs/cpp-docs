---
title: "Compiler Error C3033 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3033"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3033"]
ms.assetid: 8628b6bb-a650-4ed2-af13-57acd2f7ddbb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3033

'var' : variable in 'clause' clause cannot have const-qualified type

Values passed to certain clauses cannot be `const` variables.

The following sample generates C3033:

```
// C3033.cpp
// compile with: /openmp /link vcomps.lib
int main() {
   const int val = 1;
   int val2 = 1;

   #pragma omp parallel reduction(+ : val)   // C3033
   ;

   #pragma omp parallel reduction(+ : val2)   // OK
   ;
}
```