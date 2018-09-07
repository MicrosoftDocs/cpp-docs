---
title: "atomic | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "reference"
f1_keywords: ["atomic"]
dev_langs: ["C++"]
helpviewer_keywords: ["atomic OpenMP directive"]
ms.assetid: 275e0338-cf2f-4525-97b5-696250000df7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# atomic
Specifies that a memory location that will be updated atomically.  
  
## Syntax  
  
```  
#pragma omp atomic  
   expression  
```  
  
#### Parameters  
 `expression`  
 The statement containing the lvalue whose memory location you want to protect against multiple writes. For more information about legal expression forms, see the OpenMP specification.  
  
## Remarks  
 The `atomic` directive supports no OpenMP clauses.  
  
 For more information, see [2.6.4 atomic Construct](../../../parallel/openmp/2-6-4-atomic-construct.md).  
  
## Example  
  
```  
// omp_atomic.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
#define MAX 10  
  
int main() {  
   int count = 0;  
   #pragma omp parallel num_threads(MAX)  
   {  
      #pragma omp atomic  
      count++;  
   }  
   printf_s("Number of threads: %d\n", count);  
}  
```  
  
```Output  
Number of threads: 10  
```  
  
## See Also  
 [OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)