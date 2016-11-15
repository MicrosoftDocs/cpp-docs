---
title: "omp_get_dynamic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "omp_get_dynamic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "omp_get_dynamic OpenMP function"
ms.assetid: efa843c5-7266-4a75-8db3-22992663d9db
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
# omp_get_dynamic
Returns a value that indicates if the number of threads available in subsequent parallel region can be adjusted by the run time.  
  
## Syntax  
  
```  
int omp_get_dynamic();  
```  
  
## Return Value  
 If nonzero, dynamic adjustment of threads is enabled.  
  
## Remarks  
 Dynamic adjustment of threads is specified with [omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) and [OMP_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md).  
  
 For more information, see [3.1.7 omp_set_dynamic Function](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).  
  
## Example  
 See [omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) for an example of using `omp_get_dynamic`.  
  
## See Also  
 [Functions](../../../parallel/openmp/reference/openmp-functions.md)