---
description: "Learn more about: Compiler Error C3057"
title: "Compiler Error C3057"
ms.date: "11/04/2016"
f1_keywords: ["C3057"]
helpviewer_keywords: ["C3057"]
ms.assetid: b0b2ba88-9c74-4bec-bf60-8fc72eade34c
---
# Compiler Error C3057

'symbol' : dynamic initialization of 'threadprivate' symbols is not currently supported

The initialized value of a symbol used in a [threadprivate](../../parallel/openmp/reference/openmp-directives.md#threadprivate) clause must be known at compile time.

The following sample generates C3057:

```cpp
// C3057.cpp
// compile with: /openmp /c
extern int f();
int x, y = f();
int a, b;
#pragma omp threadprivate(x, y)   // C3057

#pragma omp threadprivate(a, b)

int main() {
   // Delete the following 4 lines to resolve.
   #pragma omp parallel copyin(x, y)
   {
      x = y;
   }

   #pragma omp parallel copyin(a, b)
   {
      a = b;
   }
}
```

The following sample generates C3057:

```cpp
// C3057b.cpp
// compile with: /openmp /c
extern int Initialize();
int main() {
   #pragma omp parallel
   {
      static int var = Initialize();
      #pragma omp threadprivate(var)   // C3057
   }

   // OK
   #pragma omp parallel
   {
      static int var2;
      static bool initialized2;
      #pragma omp threadprivate(var2, initialized2)
      if (!initialized2) {
         var2 = Initialize();
         initialized2 = true;
      }
   }
}
```
