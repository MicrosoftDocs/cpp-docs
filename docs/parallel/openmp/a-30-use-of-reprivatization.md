---
title: "A.30   Use of Reprivatization | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 26529090-6c39-40f2-b806-e12374d6b5f8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.30   Use of Reprivatization
The following example demonstrates the reprivatization of variables. Private variables can be marked `private` again in a nested directive. They do not have to be shared in the enclosing parallel region.  
  
```  
int i, a;  
...  
#pragma omp parallel private(a)  
{  
  ...  
  #pragma omp parallel for private(a)  
  for (i=0; i<10; i++)  
     {  
       ...  
     }  
}  
```