---
title: "A.23   Examples of the ordered Directive | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: f8fa761b-7fc5-4447-95f9-8571e9ca31bf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.23   Examples of the ordered Directive

It is possible to have multiple ordered sections with a `for` specified with the `ordered` clause. The first example is noncompliant because the API specifies the following:

"An iteration of a loop with a `for` construct must not execute the same `ordered` directive more than once, and it must not execute more than one `ordered` directive." (See [Section 2.6.6](../../parallel/openmp/2-6-6-ordered-construct.md) on page 22)

In this noncompliant example, all iterations execute 2 ordered sections:

```
#pragma omp for ordered
for (i=0; i<n; i++)
{
    ...
    #pragma omp ordered
    { ... }
    ...
    #pragma omp ordered
    { ... }
    ...
}
```

The following compliant example shows a `for` with more than one ordered section:

```
#pragma omp for ordered
for (i=0; i<n; i++)
{
    ...
    if (i <= 10)
    {
        ...
        #pragma omp ordered
        { ... }
    }
    ...
    (i > 10)
    {
        ...
        #pragma omp ordered
        { ... }
    }
    ...
}
```