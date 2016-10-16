---
title: "num_threads"
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
  - "num_threads"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "num_threads OpenMP clause"
ms.assetid: 09a56fc8-25c7-43e4-bbb5-71cb955d0b93
caps.latest.revision: 7
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
# num_threads
Sets the number of threads in a thread team.  
  
## Syntax  
  
```  
num_threads(num)  
```  
  
## Remarks  
 where,  
  
 `num`  
 The number of threads  
  
## Remarks  
 The `num_threads` clause has the same functionality as the [omp_set_num_threads](../parallel/omp_set_num_threads.md) function.  
  
 `num_threads` applies to the following directives:  
  
-   [parallel](../parallel/parallel.md)  
  
-   [for](../parallel/for--openmp-.md)  
  
-   [sections](../parallel/sections--openmp-.md)  
  
 For more information, see [2.3 parallel Construct](../parallel/2.3-parallel-construct.md).  
  
## Example  
 See [parallel](../parallel/parallel.md) for an example of using `num_threads` clause.  
  
## See Also  
 [Clauses](../parallel/openmp-clauses.md)