---
title: "OMP_DYNAMIC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OMP_DYNAMIC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OMP_DYNAMIC OpenMP environment variable"
ms.assetid: e306049d-b644-4b73-8b63-46c835bff98b
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
# OMP_DYNAMIC
Specifies whether the OpenMP run time can adjust the number of threads in a parallel region.  
  
## Syntax  
  
```  
set OMP_DYNAMIC[=TRUE | =FALSE]  
```  
  
## Remarks  
 The `OMP_DYNAMIC` environment variable can be overridden by the [omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) function.  
  
 The default value in the Visual C++ implementation of the OpenMP standard is `OMP_DYNAMIC=FALSE`.  
  
 For more information, see [4.3 OMP_DYNAMIC](../../../parallel/openmp/4-3-omp-dynamic.md).  
  
## Example  
 The following command sets the `OMP_DYNAMIC` environment variable to TRUE:  
  
```  
set OMP_DYNAMIC=TRUE  
```  
  
 The following command displays the current setting of the `OMP_DYNAMIC` environment variable:  
  
```  
set OMP_DYNAMIC  
```  
  
## See Also  
 [Environment Variables](../../../parallel/openmp/reference/openmp-environment-variables.md)