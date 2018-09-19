---
title: "omp_unset_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["omp_unset_lock"]
dev_langs: ["C++"]
helpviewer_keywords: ["omp_unset_lock OpenMP function"]
ms.assetid: 68fcb728-040b-4bad-979e-aaecb9097a4e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# omp_unset_lock

Releases a lock.

## Syntax

```
void omp_unset_lock(
   omp_lock_t *lock
);
```

### Parameters

*lock*<br/>
A variable of type [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) that was initialized with [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md), owned by the thread and executing in the function.

## Remarks

For more information, see [3.2.4 omp_unset_lock and omp_unset_nest_lock Functions](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).

## Example

See [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) for an example of using `omp_unset_lock`.

## See Also

[Functions](../../../parallel/openmp/reference/openmp-functions.md)