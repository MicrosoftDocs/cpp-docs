---
title: "2.5.2 parallel sections Construct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 94220e27-14f8-465c-bd8d-eb960b4b5dee
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# 2.5.2 parallel sections Construct

The **parallel sections** directive provides a shortcut form for specifying a **parallel** region containing only a single **sections** directive. The semantics are identical to explicitly specifying a **parallel** directive immediately followed by a **sections** directive. The syntax of the **parallel sections** directive is as follows:

```
#pragma omp parallel sections  [clause[[,] clause] ...] new-line
   {
   [#pragma omp section new-line]
      structured-block
   [#pragma omp section new-linestructured-block  ]
   ...
}
```

The *clause* can be one of the clauses accepted by the **parallel** and **sections** directives, except the **nowait** clause.

## Cross References:

- **parallel** directive, see [Section 2.3](../../parallel/openmp/2-3-parallel-construct.md) on page 8.

- **sections** directive, see [Section 2.4.2](../../parallel/openmp/2-4-2-sections-construct.md) on page 14.