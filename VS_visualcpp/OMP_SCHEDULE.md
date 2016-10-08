---
title: "OMP_SCHEDULE"
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
ms.assetid: 2295a801-e584-4d2f-826f-7ca4c88846a6
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
# OMP_SCHEDULE
Modifies the behavior of the [schedule](../VS_visualcpp/schedule.md) clause when `schedule(runtime)` is specified in a `for` or `parallel for` directive.  
  
## Syntax  
  
```  
set OMP_SCHEDULE[=type[,size]]  
```  
  
## Remarks  
 where,  
  
 `size` (optional)  
 Specifies the size of iterations. `size` must be a positive integer. The default is 1, except when `type` is static. Not valid when `type` is `runtime`.  
  
 `type`  
 The kind of scheduling:  
  
-   `dynamic`  
  
-   `guided`  
  
-   `runtime`  
  
-   `static`  
  
## Remarks  
 The default value in the Visual C++ implementation of the OpenMP standard is `OMP_SCHEDULE=static,0`.  
  
 For more information, see [4.1 OMP_SCHEDULE](../VS_visualcpp/4.1-OMP_SCHEDULE.md).  
  
## Example  
 The following command sets the **OMP_SCHEDULE** environment variable:  
  
```  
set OMP_SCHEDULE="guided,2"  
```  
  
 The following command displays the current setting of the **OMP_SCHEDULE** environment variable:  
  
```  
set OMP_SCHEDULE  
```  
  
## See Also  
 [Environment Variables](../VS_visualcpp/OpenMP-Environment-Variables.md)