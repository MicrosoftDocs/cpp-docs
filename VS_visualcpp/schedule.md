---
title: "schedule"
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
ms.assetid: 286f1fc3-6598-4837-b4c8-8b1fa3193965
caps.latest.revision: 10
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
# schedule
Applies to the [for](../VS_visualcpp/for--OpenMP-.md) directive.  
  
## Syntax  
  
```  
schedule(type[,size])  
```  
  
#### Parameters  
 `type`  
 The kind of scheduling:  
  
-   `dynamic`  
  
-   `guided`  
  
-   `runtime`  
  
-   `static`  
  
 `size` (optional)  
 Specifies the size of iterations. `size` must be an integer. Not valid when `type` is `runtime`.  
  
## Remarks  
 For more information, see [2.4.1 for Construct](../VS_visualcpp/2.4.1-for-Construct.md).  
  
## Example  
  
```  
// omp_schedule.cpp  
// compile with: /openmp   
#include <windows.h>  
#include <stdio.h>  
#include <omp.h>  
  
#define NUM_THREADS 4  
#define STATIC_CHUNK 5  
#define DYNAMIC_CHUNK 5  
#define NUM_LOOPS 20  
#define SLEEP_EVERY_N 3  
  
int main( )   
{  
    int nStatic1[NUM_LOOPS],   
        nStaticN[NUM_LOOPS];  
    int nDynamic1[NUM_LOOPS],   
        nDynamicN[NUM_LOOPS];  
    int nGuided[NUM_LOOPS];  
  
    omp_set_num_threads(NUM_THREADS);  
  
    #pragma omp parallel  
    {  
        #pragma omp for schedule(static, 1)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nStatic1[i] = omp_get_thread_num( );  
        }  
  
        #pragma omp for schedule(static, STATIC_CHUNK)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nStaticN[i] = omp_get_thread_num( );  
        }  
  
        #pragma omp for schedule(dynamic, 1)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nDynamic1[i] = omp_get_thread_num( );  
        }  
  
        #pragma omp for schedule(dynamic, DYNAMIC_CHUNK)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nDynamicN[i] = omp_get_thread_num( );  
        }  
  
        #pragma omp for schedule(guided)  
        for (int i = 0 ; i < NUM_LOOPS ; ++i)   
        {  
            if ((i % SLEEP_EVERY_N) == 0)   
                Sleep(0);  
            nGuided[i] = omp_get_thread_num( );  
        }  
    }  
  
    printf_s("------------------------------------------------\n");  
    printf_s("| static | static | dynamic | dynamic | guided |\n");  
    printf_s("|    1   |    %d   |    1    |    %d    |        |\n",  
             STATIC_CHUNK, DYNAMIC_CHUNK);  
    printf_s("------------------------------------------------\n");  
  
    for (int i=0; i<NUM_LOOPS; ++i)   
    {  
        printf_s("|    %d   |    %d   |    %d    |    %d    |"  
                 "    %d   |\n",  
                 nStatic1[i], nStaticN[i],  
                 nDynamic1[i], nDynamicN[i], nGuided[i]);  
    }  
  
    printf_s("------------------------------------------------\n");  
}  
```  
  
 **------------------------------------------------**  
**&#124; static &#124; static &#124; dynamic &#124; dynamic &#124; guided &#124;**  
**&#124;    1   &#124;    5   &#124;    1    &#124;    5    &#124;        &#124;**  
**------------------------------------------------**  
**&#124;    0   &#124;    0   &#124;    0    &#124;    2    &#124;    1   &#124;**  
**&#124;    1   &#124;    0   &#124;    3    &#124;    2    &#124;    1   &#124;**  
**&#124;    2   &#124;    0   &#124;    3    &#124;    2    &#124;    1   &#124;**  
**&#124;    3   &#124;    0   &#124;    3    &#124;    2    &#124;    1   &#124;**  
**&#124;    0   &#124;    0   &#124;    2    &#124;    2    &#124;    1   &#124;**  
**&#124;    1   &#124;    1   &#124;    2    &#124;    3    &#124;    3   &#124;**  
**&#124;    2   &#124;    1   &#124;    2    &#124;    3    &#124;    3   &#124;**  
**&#124;    3   &#124;    1   &#124;    0    &#124;    3    &#124;    3   &#124;**  
**&#124;    0   &#124;    1   &#124;    0    &#124;    3    &#124;    3   &#124;**  
**&#124;    1   &#124;    1   &#124;    0    &#124;    3    &#124;    2   &#124;**  
**&#124;    2   &#124;    2   &#124;    1    &#124;    0    &#124;    2   &#124;**  
**&#124;    3   &#124;    2   &#124;    1    &#124;    0    &#124;    2   &#124;**  
**&#124;    0   &#124;    2   &#124;    1    &#124;    0    &#124;    3   &#124;**  
**&#124;    1   &#124;    2   &#124;    2    &#124;    0    &#124;    3   &#124;**  
**&#124;    2   &#124;    2   &#124;    2    &#124;    0    &#124;    0   &#124;**  
**&#124;    3   &#124;    3   &#124;    2    &#124;    1    &#124;    0   &#124;**  
**&#124;    0   &#124;    3   &#124;    3    &#124;    1    &#124;    1   &#124;**  
**&#124;    1   &#124;    3   &#124;    3    &#124;    1    &#124;    1   &#124;**  
**&#124;    2   &#124;    3   &#124;    3    &#124;    1    &#124;    1   &#124;**  
**&#124;    3   &#124;    3   &#124;    0    &#124;    1    &#124;    3   &#124;**  
**------------------------------------------------**   
## See Also  
 [Clauses](../VS_visualcpp/OpenMP-Clauses.md)