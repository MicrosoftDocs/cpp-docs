---
title: "firstprivate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "firstprivate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "firstprivate OpenMP clause"
ms.assetid: db479766-6d3b-4bbd-b28e-b192d826788c
caps.latest.revision: 8
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
# firstprivate
Specifies that each thread should have its own instance of a variable, and that the variable should be initialized with the value of the variable, because it exists before the parallel construct.  
  
## Syntax  
  
```  
firstprivate(var)  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`var`|The variable to have instances in each thread and that will be initialized with the value of the variable, because it exists before the parallel construct. If more than one variable is specified, separate variable names with a comma.|  
  
## Remarks  
  
## Remarks  
 `firstprivate` applies to the following directives:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
-   [single](../../../parallel/openmp/reference/single.md)  
  
 For more information, see [2.7.2.2 firstprivate](../../../parallel/openmp/2-7-2-2-firstprivate.md).  
  
## Example  
 For an example of using `firstprivate`, see the example in [private](../../../parallel/openmp/reference/private-openmp.md).  
  
## See Also  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)