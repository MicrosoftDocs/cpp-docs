---
title: "Compiler Error C3053 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3053"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3053"]
ms.assetid: ab9a25f3-e341-4f6e-8e69-069b4a963a64
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3053

'symbol' : 'threadprivate' is only valid for global or static data items

Symbols passed to [threadprivate](../../parallel/openmp/reference/threadprivate.md) must either be global or static.

The following sample generates C3053:

```
// C3053.cpp
// compile with: /openmp
void Test() {
   int x, y;
   #pragma omp threadprivate(x, y)   // C3053
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```

Possible resolution:

```
// C3053b.cpp
// compile with: /openmp /LD
int x, y;
#pragma omp threadprivate(x, y)

void Test() {
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }
}
```