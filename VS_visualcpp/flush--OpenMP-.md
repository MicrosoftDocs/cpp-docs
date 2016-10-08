---
title: "flush (OpenMP)"
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
ms.assetid: 150ca46e-d4f7-4423-b0a4-838df40aeb67
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
# flush (OpenMP)
Specifies that all threads have the same view of memory for all shared objects.  
  
## Syntax  
  
```  
#pragma omp flush [(var)]  
```  
  
## Remarks  
 where,  
  
 `var` (optional)  
 A comma-separated list of variables that represent objects you want to synchronize. If `var` is not specified, all memory is flushed.  
  
## Remarks  
 The **flush** directive supports no OpenMP clauses.  
  
 For more information, see [2.6.5 flush Directive](../VS_visualcpp/2.6.5-flush-Directive.md).  
  
## Example  
  
```  
// omp_flush.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
void read(int *data) {  
   printf_s("read data\n");  
   *data = 1;  
}  
  
void process(int *data) {  
   printf_s("process data\n");  
   (*data)++;  
}  
  
int main() {  
   int data;  
   int flag;  
  
   flag = 0;  
  
   #pragma omp parallel sections num_threads(2)  
   {  
      #pragma omp section  
      {  
         printf_s("Thread %d: ", omp_get_thread_num( ));  
         read(&data);  
         #pragma omp flush(data)  
         flag = 1;  
         #pragma omp flush(flag)  
         // Do more work.  
      }  
  
      #pragma omp section   
      {  
         while (!flag) {  
            #pragma omp flush(flag)  
         }  
         #pragma omp flush(data)  
  
         printf_s("Thread %d: ", omp_get_thread_num( ));  
         process(&data);  
         printf_s("data = %d\n", data);  
      }  
   }  
}  
```  
  
 **Thread 0: read data**  
**Thread 1: process data**  
**data = 2**   
## See Also  
 [Directives](../VS_visualcpp/OpenMP-Directives.md)