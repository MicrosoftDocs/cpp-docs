---
title: "OpenMP data types | Microsoft Docs"
ms.custom: ""
ms.date: "10/23/2018"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["OpenMP data types", "omp_lock_t", "omp_nest_lock_t"]
dev_langs: ["C++"]
helpviewer_keywords: ["OpenMP data types", "omp_lock_t OpenMP data type", "omp_nest_lock_t OpenMP data type"]
ms.assetid: cf1e1045-4d12-4d03-80b7-d5843b80ef85
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# OpenMP data types

Provides links to data types used in the OpenMP API.

The Visual C++ implementation of the OpenMP standard includes the following data types.

Data type                           | Description
----------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[omp_lock_t](#omp-lock-t)           | A type that holds the status of a lock, whether the lock is available or if a thread owns a lock.
[omp_nest_lock_t](#omp-nest-lock-t) | A type that holds one of the following pieces of information about a lock: whether the lock is available, and the identity of the thread that owns the lock and a nesting count.

## <a name="omp-lock-t"></a>omp_lock_t

A type that holds the status of a lock, whether the lock is available or if a thread owns a lock.

The following functions use `omp_lock_t`:

- [omp_init_lock](openmp-functions.md#omp-init-lock)
- [omp_destroy_lock](openmp-functions.md#omp-destroy-lock)
- [omp_set_lock](openmp-functions.md#omp-set-lock)
- [omp_unset_lock](openmp-functions.md#omp-unset-lock)
- [omp_test_lock](openmp-functions.md#omp-test-lock)

For more information, see [3.2 Lock functions](../../../parallel/openmp/3-2-lock-functions.md).

### Example

See [omp_init_lock](openmp-functions.md#omp-init-lock) for an example of using `omp_lock_t`.

## <a name="omp-nest-lock-t"></a>omp_nest_lock_t

A type that holds the following pieces of information about a lock: whether the lock is available, and the identity of the thread that owns the lock and a nesting count.

The following functions use `omp_nest_lock_t`:

- [omp_init_nest_lock](openmp-functions.md#omp-init-nest-lock)
- [omp_destroy_nest_lock](openmp-functions.md#omp-destroy-nest-lock)
- [omp_set_nest_lock](openmp-functions.md#omp-set-nest-lock)
- [omp_unset_nest_lock](openmp-functions.md#omp-unset-nest-lock)
- [omp_test_nest_lock](openmp-functions.md#omp-test-nest-lock)

For more information, see [3.2 Lock functions](../../../parallel/openmp/3-2-lock-functions.md).

### Example

See [omp_init_nest_lock](openmp-functions.md#omp-init-nest-lock) for an example of using `omp_nest_lock_t`.
