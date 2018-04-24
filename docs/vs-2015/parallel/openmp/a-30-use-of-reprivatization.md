---
title: "A.30   Use of Reprivatization | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 26529090-6c39-40f2-b806-e12374d6b5f8
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.30   Use of Reprivatization
[!INCLUDE[blank_token](../../includes/blank-token.md)]

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