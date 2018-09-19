---
title: "shared (OpenMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["Shared"]
dev_langs: ["C++"]
helpviewer_keywords: ["shared OpenMP clause"]
ms.assetid: 7887dc95-67a2-462f-a3a2-8e0632bf5d04
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# shared (OpenMP)

Specifies that one or more variables should be shared among all threads.

## Syntax

```
shared(var)
```

### Parameters

*var*<br/>
One or more variables to share. If more than one variable is specified, separate variable names with a comma.

## Remarks

Another way to share variables among threads is with the [copyprivate](../../../parallel/openmp/reference/copyprivate.md) clause.

`shared` applies to the following directives:

- [for](../../../parallel/openmp/reference/for-openmp.md)

- [parallel](../../../parallel/openmp/reference/parallel.md)

- [sections](../../../parallel/openmp/reference/sections-openmp.md)

For more information, see [2.7.2.4 shared](../../../parallel/openmp/2-7-2-4-shared.md).

## Example

See [private](../../../parallel/openmp/reference/private-openmp.md) for an example of using `shared`.

## See Also

[Clauses](../../../parallel/openmp/reference/openmp-clauses.md)