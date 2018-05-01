---
title: "OMP_NESTED | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OMP_NESTED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OMP_NESTED OpenMP environment variable"
ms.assetid: c43f5287-a548-40d0-bd54-0c6b2b9f9a53
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# OMP_NESTED
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Specifies whether nested parallelism is enabled, unless nested parallelism is enabled or disabled with `omp_set_nested`.  
  
## Syntax  
  
```  
set OMP_NESTED[=TRUE | =FALSE]  
```  
  
## Remarks  
 The `OMP_NESTED` environment variable can be overridden by the [omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md) function.  
  
 The default value in the Visual C++ implementation of the OpenMP standard is `OMP_DYNAMIC=FALSE`.  
  
 For more information, see [4.4 OMP_NESTED](../../../parallel/openmp/4-4-omp-nested.md).  
  
## Example  
 The following command sets the `OMP_NESTED` environment variable to TRUE:  
  
```  
set OMP_NESTED=TRUE  
```  
  
 The following command displays the current setting of the `OMP_NESTED` environment variable:  
  
```  
set OMP_NESTED  
```  
  
## See Also  
 [Environment Variables](../../../parallel/openmp/reference/openmp-environment-variables.md)