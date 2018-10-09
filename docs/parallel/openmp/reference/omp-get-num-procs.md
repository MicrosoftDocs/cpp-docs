---
title: "omp_get_num_procs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["omp_get_num_procs"]
dev_langs: ["C++"]
helpviewer_keywords: ["omp_get_num_procs OpenMP function"]
ms.assetid: 14a10b8f-e59b-4211-a292-687648c9f760
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# omp_get_num_procs

Returns the number of processors that are available when the function is called.

## Syntax

```
int omp_get_num_procs();
```

## Remarks

For more information, see [3.1.5 omp_get_num_procs Function](../../../parallel/openmp/3-1-5-omp-get-num-procs-function.md).

## Example

```
// omp_get_num_procs.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

int main( )
{
    printf_s("%d\n", omp_get_num_procs( ));
    #pragma omp parallel
        #pragma omp master
        {
            printf_s("%d\n", omp_get_num_procs( ));
        }
}
```

```Output
// Expect the following output when the example is run on a two-processor machine:
2
2
```

## See Also

[Functions](../../../parallel/openmp/reference/openmp-functions.md)