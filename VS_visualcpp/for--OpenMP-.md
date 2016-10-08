---
title: "for (OpenMP)"
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
ms.assetid: 8b54e034-9db2-4c1a-a2b1-72e14e930506
caps.latest.revision: 11
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
# for (OpenMP)
Causes the work done in a for loop inside a parallel region to be divided among threads.  
  
## Syntax  
  
```  
#pragma omp [parallel] for [clauses]  
   for_statement  
```  
  
## Remarks  
 where,  
  
 `clause` (optional)  
 Zero or more clauses. See the Remarks section for a list of the clauses supported by **for**.  
  
 `for_statement`  
 A for loop. Undefined behavior will result if user code in the for loop changes the index variable.  
  
## Remarks  
 The **for** directive supports the following OpenMP clauses:  
  
-   [firstprivate](../VS_visualcpp/firstprivate.md)  
  
-   [lastprivate](../VS_visualcpp/lastprivate.md)  
  
-   [nowait](../VS_visualcpp/nowait.md)  
  
-   [ordered](../VS_visualcpp/ordered--OpenMP-Directives-.md)  
  
-   [private](../VS_visualcpp/private--OpenMP-.md)  
  
-   [reduction](../VS_visualcpp/reduction.md)  
  
-   [schedule](../VS_visualcpp/schedule.md)  
  
 If **parallel** is also specified, `clause` can be any clause accepted by the **parallel** or **for** directives, except **nowait**.  
  
 For more information, see [2.4.1 for Construct](../VS_visualcpp/2.4.1-for-Construct.md).  
  
## Example  
  
```  
// omp_for.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <math.h>  
#include <omp.h>  
  
#define NUM_THREADS 4  
#define NUM_START 1  
#define NUM_END 10  
  
int main() {  
   int i, nRet = 0, nSum = 0, nStart = NUM_START, nEnd = NUM_END;  
   int nThreads = 0, nTmp = nStart + nEnd;  
   unsigned uTmp = (unsigned((abs(nStart - nEnd) + 1)) *   
                               unsigned(abs(nTmp))) / 2;  
   int nSumCalc = uTmp;  
  
   if (nTmp < 0)  
      nSumCalc = -nSumCalc;  
  
   omp_set_num_threads(NUM_THREADS);  
  
   #pragma omp parallel default(none) private(i) shared(nSum, nThreads, nStart, nEnd)  
   {  
      #pragma omp master  
      nThreads = omp_get_num_threads();  
  
      #pragma omp for  
      for (i=nStart; i<=nEnd; ++i) {  
            #pragma omp atomic  
            nSum += i;  
      }  
   }  
  
   if  (nThreads == NUM_THREADS) {  
      printf_s("%d OpenMP threads were used.\n", NUM_THREADS);  
      nRet = 0;  
   }  
   else {  
      printf_s("Expected %d OpenMP threads, but %d were used.\n",  
               NUM_THREADS, nThreads);  
      nRet = 1;  
   }  
  
   if (nSum != nSumCalc) {  
      printf_s("The sum of %d through %d should be %d, "  
               "but %d was reported!\n",  
               NUM_START, NUM_END, nSumCalc, nSum);  
      nRet = 1;  
   }  
   else  
      printf_s("The sum of %d through %d is %d\n",  
               NUM_START, NUM_END, nSum);  
}  
```  
  
 **4 OpenMP threads were used.**  
**The sum of 1 through 10 is 55**   
## See Also  
 [Directives](../VS_visualcpp/OpenMP-Directives.md)