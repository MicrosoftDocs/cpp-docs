---
title: "3.1.8 omp_get_dynamic Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: c03e2daf-29c9-49e3-9b67-b980ad1ab195
caps.latest.revision: 7
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
# 3.1.8 omp_get_dynamic Function
The **omp_get_dynamic** function returns a nonzero value if dynamic adjustment of threads is enabled, and returns 0 otherwise. The format is as follows:  
  
```  
#include <omp.h>  
int omp_get_dynamic(void);  
```  
  
 If the implementation does not implement dynamic adjustment of the number of threads, this function always returns 0.  
  
## Cross References:  
  
-   For a description of dynamic thread adjustment, see [Section 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) on page 39.