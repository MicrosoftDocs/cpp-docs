---
title: "OpenMP Environment Variables"
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
ms.assetid: 2178ce2b-ffa1-45ec-a455-64437711d15d
caps.latest.revision: 9
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
# OpenMP Environment Variables
Provides links to environment variables used in the OpenMP API.  
  
 The Visual C++ implementation of the OpenMP standard includes the following environment variables. These environment variables are read at program startup and modifications to their values are ignored at runtime (for example, using [_putenv, _wputenv](../VS_visualcpp/_putenv--_wputenv.md)).  
  
|Environment variable|Description|  
|--------------------------|-----------------|  
|[OMP_DYNAMIC](../VS_visualcpp/OMP_DYNAMIC.md)|Specifies whether the OpenMP run time can adjust the number of threads in a parallel region.|  
|[OMP_NESTED](../VS_visualcpp/OMP_NESTED.md)|Specifies whether nested parallelism is enabled, unless nested parallelism is enabled or disabled with `omp_set_nested`.|  
|[OMP_NUM_THREADS](../VS_visualcpp/OMP_NUM_THREADS.md)|Sets the maximum number of threads in the parallel region, unless overridden by [omp_set_num_threads](../VS_visualcpp/omp_set_num_threads.md) or [num_threads](../VS_visualcpp/num_threads.md).|  
|[OMP_SCHEDULE](../VS_visualcpp/OMP_SCHEDULE.md)|Modifies the behavior of the [schedule](../VS_visualcpp/schedule.md) clause when `schedule(runtime)` is specified in a `for` or `parallel for` directive.|  
  
## See Also  
 [Library Reference](../VS_visualcpp/OpenMP-Library-Reference.md)