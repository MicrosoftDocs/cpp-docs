---
title: "omp_set_num_threads | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_set_num_threads"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_set_num_threads OpenMP function"
ms.assetid: dae0bf3f-cd7a-4413-89de-6149ac1f4fa7
caps.latest.revision: 9
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
# omp_set_num_threads
Sets the number of threads in subsequent parallel regions, unless overridden by a [num_threads](../../../parallel/openmp/reference/num-threads.md) clause.  
  
## Syntax  
  
```  
void omp_set_num_threads(  
   int num_threads  
);  
```  
  
## Remarks  
 where,  
  
 `num_threads`  
 The number of threads in the parallel region.  
  
## Remarks  
 For more information, see [3.1.1 omp_set_num_threads Function](../../../parallel/openmp/3-1-1-omp-set-num-threads-function.md).  
  
## Example  
 See [omp_get_num_threads](../../../parallel/openmp/reference/omp-get-num-threads.md) for an example of using `omp_set_num_threads`.  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)