---
title: "A.28   Use of num_threads Clause | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 26238da1-902c-49b4-9559-0fbc9eaf7f36
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.28   Use of num_threads Clause

The following example demonstrates the `num_threads` clause ([Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8). The parallel region is executed with a maximum of 10 threads.

```
#include <omp.h>
main()
{
    omp_set_dynamic(1);
    ...
    #pragma omp parallel num_threads(10)
    {
        ... parallel region ...
    }
}
```