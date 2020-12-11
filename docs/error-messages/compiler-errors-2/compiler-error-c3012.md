---
description: "Learn more about: Compiler Error C3012"
title: "Compiler Error C3012"
ms.date: "11/04/2016"
f1_keywords: ["C3012"]
helpviewer_keywords: ["C3012"]
ms.assetid: cc7040b1-b3fb-4da6-a474-877914d30332
---
# Compiler Error C3012

> '*intrinsic*' : intrinsic function not allowed directly within a parallel region

A [compiler intrinsic](../../intrinsics/compiler-intrinsics.md) function is not allowed in an `omp parallel` region. To fix this issue, move intrinsics out of the region, or replace them with non-intrinsic equivalents.

## Example

The following sample generates C3012, and shows one way to fix it:

```cpp
// C3012.cpp
// compile with: /openmp
#ifdef __cplusplus
extern "C" {
#endif
void* _ReturnAddress();
#ifdef __cplusplus
}
#endif

int main()
{
   #pragma omp parallel
   {
      _ReturnAddress();   // C3012
   }
   _ReturnAddress();      // OK
}
```
