---
title: "omp_set_num_threads"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "omp_set_num_threads"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_set_num_threads OpenMP function"
ms.assetid: dae0bf3f-cd7a-4413-89de-6149ac1f4fa7
caps.latest.revision: 9
ms.author: "mithom"
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
Sets the number of threads in subsequent parallel regions, unless overridden by a [num_threads](../parallel/num_threads.md) clause.  
  
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
 For more information, see [3.1.1 omp_set_num_threads Function](../parallel/3.1.1-omp_set_num_threads-function.md).  
  
## Example  
 See [omp_get_num_threads](../parallel/omp_get_num_threads.md) for an example of using `omp_set_num_threads`.  
  
## See Also  
 [Functions](../parallel/openmp-functions.md)