---
title: "omp_get_nested | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["omp_get_nested"]
dev_langs: ["C++"]
helpviewer_keywords: ["omp_get_nested OpenMP function"]
ms.assetid: e9784847-516e-40d3-89f7-b8b6898d8667
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# omp_get_nested
Returns a value that indicates if nested parallelism is enabled.  
  
## Syntax  
  
```  
int omp_get_nested( );  
```  
  
## Return Value  
 If nonzero, nested parallelism is enabled.  
  
## Remarks  
 Nested parallelism is specified with [omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md) and [OMP_NESTED](../../../parallel/openmp/reference/omp-nested.md).  
  
 For more information, see [3.1.10 omp_get_nested Function](../../../parallel/openmp/3-1-10-omp-get-nested-function.md).  
  
## Example  
 See [omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md) for an example of using `omp_get_nested`.  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)