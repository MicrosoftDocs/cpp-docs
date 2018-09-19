---
title: "nowait | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["nowait"]
dev_langs: ["C++"]
helpviewer_keywords: ["nowait OpenMP clause"]
ms.assetid: 8a74265d-879c-46cf-8071-a1084f24f16e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# nowait

Overrides the barrier implicit in a directive.

## Syntax

```
nowait
```

## Remarks

`nowait` applies to the following directives:

- [for](../../../parallel/openmp/reference/for-openmp.md)

- [sections](../../../parallel/openmp/reference/sections-openmp.md)

- [single](../../../parallel/openmp/reference/single.md)

For more information, see [2.4.1 for Construct](../../../parallel/openmp/2-4-1-for-construct.md), [2.4.2 sections Construct](../../../parallel/openmp/2-4-2-sections-construct.md), and [2.4.3 single Construct](../../../parallel/openmp/2-4-3-single-construct.md).

## Example

```
// omp_nowait.cpp
// compile with: /openmp /c
#include <stdio.h>

#define SIZE 5

void test(int *a, int *b, int *c, int size)
{
    int i;
    #pragma omp parallel
    {
        #pragma omp for nowait
        for (i = 0; i < size; i++)
            b[i] = a[i] * a[i];

        #pragma omp for nowait
        for (i = 0; i < size; i++)
            c[i] = a[i]/2;
    }
}

int main( )
{
    int a[SIZE], b[SIZE], c[SIZE];
    int i;

    for (i=0; i<SIZE; i++)
        a[i] = i;

    test(a,b,c, SIZE);

    for (i=0; i<SIZE; i++)
        printf_s("%d, %d, %d\n", a[i], b[i], c[i]);
}
```

```Output
0, 0, 0
1, 1, 0
2, 4, 1
3, 9, 1
4, 16, 2
```

## See Also

[Clauses](../../../parallel/openmp/reference/openmp-clauses.md)