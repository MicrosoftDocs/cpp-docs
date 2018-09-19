---
title: "copyin | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["copyin"]
dev_langs: ["C++"]
helpviewer_keywords: ["copyin OpenMP clause"]
ms.assetid: 369efa88-613c-4cb1-9e11-7b9ee08a4b25
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# copyin

Allows threads to access the master thread's value, for a [threadprivate](../../../parallel/openmp/reference/threadprivate.md) variable.

## Syntax

```
copyin(var)
```

## Parameters

*var*<br/>
The `threadprivate` variable that will be initialized with the value of the variable in the master thread, as it exists before the parallel construct.

## Remarks

`copyin` applies to the following directives:

- [parallel](../../../parallel/openmp/reference/parallel.md)

- [for](../../../parallel/openmp/reference/for-openmp.md)

- [sections](../../../parallel/openmp/reference/sections-openmp.md)

For more information, see [2.7.2.7 copyin](../../../parallel/openmp/2-7-2-7-copyin.md).

## Example

See [threadprivate](../../../parallel/openmp/reference/threadprivate.md) for an example of using `copyin`.

## See Also

[Clauses](../../../parallel/openmp/reference/openmp-clauses.md)