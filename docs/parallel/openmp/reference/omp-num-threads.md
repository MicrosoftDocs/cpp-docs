---
title: "OMP_NUM_THREADS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OMP_NUM_THREADS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OMP_NUM_THREADS OpenMP environment variable"
ms.assetid: 4b558124-1387-4c30-a6a5-ff5345a9ced6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# OMP_NUM_THREADS
Sets the maximum number of threads in the parallel region, unless overridden by [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) or [num_threads](../../../parallel/openmp/reference/num-threads.md).  
  
## Syntax  
  
```  
set OMP_NUM_THREADS[=num]  
```  
  
## Remarks  
 where,  
  
 `num`  
 The maximum number of threads you want in the parallel region, up to 64 in the Visual C++ implementation.  
  
## Remarks  
 The **OMP_NUM_THREADS** environment variable can be overridden by the [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) function or by [num_threads](../../../parallel/openmp/reference/num-threads.md).  
  
 The default value of `num` in the Visual C++ implementation of the OpenMP standard is the number of virtual processors, including hyperthreading CPUs.  
  
 For more information, see [4.2 OMP_NUM_THREADS](../../../parallel/openmp/4-2-omp-num-threads.md).  
  
## Example  
 The following command sets the **OMP_NUM_THREADS** environment variable to 16:  
  
```  
set OMP_NUM_THREADS=16  
```  
  
 The following command displays the current setting of the **OMP_NUM_THREADS** environment variable:  
  
```  
set OMP_NUM_THREADS  
```  
  
## See Also  
 [Environment Variables](../../../parallel/openmp/reference/openmp-environment-variables.md)