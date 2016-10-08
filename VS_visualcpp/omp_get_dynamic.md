---
title: "omp_get_dynamic"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: efa843c5-7266-4a75-8db3-22992663d9db
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
 Dynamic adjustment of threads is specified with [omp_set_dynamic](../VS_visualcpp/omp_set_dynamic.md) and [OMP_DYNAMIC](../VS_visualcpp/OMP_DYNAMIC.md).  
  
 For more information, see [3.1.7 omp_set_dynamic Function](../VS_visualcpp/3.1.7-omp_set_dynamic-Function.md).  
  
## Example  
 See [omp_set_dynamic](../VS_visualcpp/omp_set_dynamic.md) for an example of using `omp_get_dynamic`.  
  
## See Also  
 [Functions](../VS_visualcpp/OpenMP-Functions.md)