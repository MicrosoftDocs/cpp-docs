---
title: "A.1   Executing a Simple Loop in Parallel | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: b8aaacae-b20d-4b16-a540-54ccbf09582b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.1   Executing a Simple Loop in Parallel

The following example demonstrates how to parallelize a simple loop using the `parallel for` directive ([Section 2.5.1](../../parallel/openmp/2-5-1-parallel-for-construct.md) on page 16). The loop iteration variable is private by default, so it is not necessary to specify it explicitly in a private clause.

```
#pragma omp parallel for
    for (i=1; i<n; i++)
        b[i] = (a[i] + a[i-1]) / 2.0;
```