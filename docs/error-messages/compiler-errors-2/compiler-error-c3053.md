---
description: "Learn more about: Compiler Error C3053"
title: "Compiler Error C3053"
ms.date: "11/04/2016"
f1_keywords: ["C3053"]
helpviewer_keywords: ["C3053"]
ms.assetid: ab9a25f3-e341-4f6e-8e69-069b4a963a64
---
# Compiler Error C3053

'symbol' : 'threadprivate' is only valid for global or static data items

Symbols passed to [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) must either be global or static.

The following sample generates C3053:

```cpp
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

```cpp
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
