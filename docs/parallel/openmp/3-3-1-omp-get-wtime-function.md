---
title: "3.3.1 omp_get_wtime Function | Microsoft Docs"
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
ms.assetid: 90188bd2-c53e-4398-8946-d3ecc92fa0f6
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
# 3.3.1 omp_get_wtime Function
The `omp_get_wtime` function returns a double-precision floating point value equal to the elapsed wall clock time in seconds since some "time in the past".  The actual "time in the past" is arbitrary, but it is guaranteed not to change during the execution of the application program. The format is as follows:  
  
```  
#include <omp.h>  
double omp_get_wtime(void);  
```  
  
 It is anticipated that the function will be used to measure elapsed times as shown in the following example:  
  
```  
double start;  
double end;  
start = omp_get_wtime();  
... work to be timed ...  
end = omp_get_wtime();  
printf_s("Work took %f sec. time.\n", end-start);  
```  
  
 The times returned are "per-thread times" by which is meant they are not required to be globally consistent across all the threads participating in an application.