---
title: "Compiler error C7688"
description: Compiler error C7688 description and solution.
ms.date: 03/01/2023
f1_keywords: ["C7688"]
helpviewer_keywords: ["C7688"]
---
# Compiler error C7688

> '`pragma omp atomic`': expected an expression of scalar type

## Remarks

OpenMP restricts expressions in `#pragma omp atomic` constructs to scalar type.

Compiler error C7688 is new in Visual Studio 2022 version 17.4. In previous compiler versions, the compiler would emit error [C3048](./compiler-error-c3048.md).

## Example

The sample code shows diagnostics generated for non-scalar types in `#pragma omp atomic` constructs.

```cpp
// C7688.cpp
// compile using /c /openmp:llvm
struct S { char c; };
S operator+(S, int);

void test()
{
    S s1, s2;
    #pragma omp atomic capture
    { s1 = s2; s2 = s1 + 1; }
}
/*
When built, the compiler emits:

.\C7688.cpp(10,10): error C7688: '#pragma omp atomic': expected an expression of scalar type
    { s1 = s2; s2 = s1 + 1; }
         ^
.\C7688.cpp(10,10): note: type is 'S'
*/
```

To resolve this issue, use scalar types in `#pragma omp atomic` constructs.
