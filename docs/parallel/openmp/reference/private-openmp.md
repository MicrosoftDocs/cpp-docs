---
title: "private (OpenMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "private"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "private OpenMP clause"
ms.assetid: 772904a2-1345-4562-90e6-eb4dc85aea1a
caps.latest.revision: 12
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
# private (OpenMP)
Specifies that each thread should have its own instance of a variable.  
  
## Syntax  
  
```  
private(var)  
```  
  
## Remarks  
 where,  
  
 `var`  
 The variable to have instances in each thread.  
  
## Remarks  
 **private** applies to the following directives:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
-   [single](../../../parallel/openmp/reference/single.md)  
  
 For more information, see [2.7.2.1 private](../../../parallel/openmp/2-7-2-1-private.md).  
  
## Example  
  
```  
// openmp_private.c  
// compile with: /openmp  
#include <windows.h>  
#include <assert.h>  
#include <stdio.h>  
#include <omp.h>  
  
#define NUM_THREADS 4  
#define SLEEP_THREAD 1  
#define NUM_LOOPS 2  
  
enum Types {  
   ThreadPrivate,  
   Private,  
   FirstPrivate,  
   LastPrivate,  
   Shared,  
   MAX_TYPES  
};  
  
int nSave[NUM_THREADS][MAX_TYPES][NUM_LOOPS] = {{0}};  
int nThreadPrivate;  
  
#pragma omp threadprivate(nThreadPrivate)  
#pragma warning(disable:4700)  
  
int main() {  
   int nPrivate = NUM_THREADS;  
   int nFirstPrivate = NUM_THREADS;  
   int nLastPrivate = NUM_THREADS;  
   int nShared = NUM_THREADS;  
   int nRet = 0;  
   int i;  
   int j;  
   int nLoop = 0;  
  
   nThreadPrivate = NUM_THREADS;  
   printf_s("These are the variables before entry "  
           "into the parallel region.\n");  
   printf_s("nThreadPrivate = %d\n", nThreadPrivate);  
   printf_s("      nPrivate = %d\n", nPrivate);  
   printf_s(" nFirstPrivate = %d\n", nFirstPrivate);  
   printf_s("  nLastPrivate = %d\n", nLastPrivate);  
   printf_s("       nShared = %d\n\n", nShared);  
   omp_set_num_threads(NUM_THREADS);  
  
   #pragma omp parallel copyin(nThreadPrivate) private(nPrivate) shared(nShared) firstprivate(nFirstPrivate)  
   {  
      #pragma omp for schedule(static) lastprivate(nLastPrivate)  
      for (i = 0 ; i < NUM_THREADS ; ++i) {  
         for (j = 0 ; j < NUM_LOOPS ; ++j) {  
            int nThread = omp_get_thread_num();  
            assert(nThread < NUM_THREADS);  
  
            if (nThread == SLEEP_THREAD)  
               Sleep(100);  
            nSave[nThread][ThreadPrivate][j] = nThreadPrivate;  
            nSave[nThread][Private][j] = nPrivate;  
            nSave[nThread][Shared][j] = nShared;  
            nSave[nThread][FirstPrivate][j] = nFirstPrivate;  
            nSave[nThread][LastPrivate][j] = nLastPrivate;  
            nThreadPrivate = nThread;  
            nPrivate = nThread;  
            nShared = nThread;  
            nLastPrivate = nThread;  
            --nFirstPrivate;  
         }  
      }  
   }  
  
   for (i = 0 ; i < NUM_LOOPS ; ++i) {  
      for (j = 0 ; j < NUM_THREADS ; ++j) {  
         printf_s("These are the variables at entry of "  
                  "loop %d of thread %d.\n", i + 1, j);  
         printf_s("nThreadPrivate = %d\n",  
                  nSave[j][ThreadPrivate][i]);  
         printf_s("      nPrivate = %d\n",  
                  nSave[j][Private][i]);  
         printf_s(" nFirstPrivate = %d\n",  
                  nSave[j][FirstPrivate][i]);  
         printf_s("  nLastPrivate = %d\n",  
                  nSave[j][LastPrivate][i]);  
         printf_s("       nShared = %d\n\n",  
                  nSave[j][Shared][i]);  
      }  
   }  
  
   printf_s("These are the variables after exit from "  
            "the parallel region.\n");  
   printf_s("nThreadPrivate = %d (The last value in the "  
            "master thread)\n", nThreadPrivate);  
   printf_s("      nPrivate = %d (The value prior to "  
            "entering parallel region)\n", nPrivate);  
   printf_s(" nFirstPrivate = %d (The value prior to "  
            "entering parallel region)\n", nFirstPrivate);  
   printf_s("  nLastPrivate = %d (The value from the "  
            "last iteration of the loop)\n", nLastPrivate);  
   printf_s("       nShared = %d (The value assigned, "  
            "from the delayed thread, %d)\n\n",  
            nShared, SLEEP_THREAD);  
}  
```  
  
```Output  
These are the variables before entry into the parallel region.  
nThreadPrivate = 4  
      nPrivate = 4  
 nFirstPrivate = 4  
  nLastPrivate = 4  
       nShared = 4  
  
These are the variables at entry of loop 1 of thread 0.  
nThreadPrivate = 4  
      nPrivate = 1310720  
 nFirstPrivate = 4  
  nLastPrivate = 1245104  
       nShared = 3  
  
These are the variables at entry of loop 1 of thread 1.  
nThreadPrivate = 4  
      nPrivate = 4488  
 nFirstPrivate = 4  
  nLastPrivate = 19748  
       nShared = 0  
  
These are the variables at entry of loop 1 of thread 2.  
nThreadPrivate = 4  
      nPrivate = -132514848  
 nFirstPrivate = 4  
  nLastPrivate = -513199792  
       nShared = 4  
  
These are the variables at entry of loop 1 of thread 3.  
nThreadPrivate = 4  
      nPrivate = 1206  
 nFirstPrivate = 4  
  nLastPrivate = 1204  
       nShared = 2  
  
These are the variables at entry of loop 2 of thread 0.  
nThreadPrivate = 0  
      nPrivate = 0  
 nFirstPrivate = 3  
  nLastPrivate = 0  
       nShared = 0  
  
These are the variables at entry of loop 2 of thread 1.  
nThreadPrivate = 1  
      nPrivate = 1  
 nFirstPrivate = 3  
  nLastPrivate = 1  
       nShared = 1  
  
These are the variables at entry of loop 2 of thread 2.  
nThreadPrivate = 2  
      nPrivate = 2  
 nFirstPrivate = 3  
  nLastPrivate = 2  
       nShared = 2  
  
These are the variables at entry of loop 2 of thread 3.  
nThreadPrivate = 3  
      nPrivate = 3  
 nFirstPrivate = 3  
  nLastPrivate = 3  
       nShared = 3  
  
These are the variables after exit from the parallel region.  
nThreadPrivate = 0 (The last value in the master thread)  
      nPrivate = 4 (The value prior to entering parallel region)  
 nFirstPrivate = 4 (The value prior to entering parallel region)  
  nLastPrivate = 3 (The value from the last iteration of the loop)  
       nShared = 1 (The value assigned, from the delayed thread, 1)  
```  
  
## See Also  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)