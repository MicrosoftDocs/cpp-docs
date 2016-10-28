---
title: "omp_destroy_nest_lock"
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
  - "omp_destroy_nest_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_destroy_nest_lock OpenMP function"
ms.assetid: 0ab1352b-668f-43dd-b441-31ec4cc53e68
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
# omp_destroy_nest_lock
Uninitializes a nestable lock.  
  
## Syntax  
  
```  
void omp_destroy_nest_lock(  
   omp_nest_lock_t *lock  
);  
```  
  
## Remarks  
 where,  
  
 `lock`  
 A variable of type [omp_nest_lock_t](../parallel/omp_nest_lock_t.md) that was initialized with [omp_init_nest_lock](../parallel/omp_init_nest_lock.md).  
  
## Remarks  
 For more information, see [3.2.2 omp_destroy_lock and omp_destroy_nest_lock Functions](../parallel/3.2.2-omp_destroy_lock-and-omp_destroy_nest_lock-functions.md).  
  
## Example  
 See [omp_init_nest_lock](../parallel/omp_init_nest_lock.md) for an example of using `omp_destroy_nest_lock`.  
  
## See Also  
 [Functions](../parallel/openmp-functions.md)