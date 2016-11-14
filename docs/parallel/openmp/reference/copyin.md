---
title: "copyin | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "copyin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "copyin OpenMP clause"
ms.assetid: 369efa88-613c-4cb1-9e11-7b9ee08a4b25
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
# copyin
Allows threads to access the master thread's value, for a [threadprivate](../../../parallel/openmp/reference/threadprivate.md) variable.  
  
## Syntax  
  
```  
copyin(var)  
```  
  
## Remarks  
 where,  
  
 `var`  
 The `threadprivate` variable that will be initialized with the value of the variable in the master thread, as it exists before the parallel construct.  
  
## Remarks  
 `copyin` applies to the following directives:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 For more information, see [2.7.2.7 copyin](../../../parallel/openmp/2-7-2-7-copyin.md).  
  
## Example  
 See [threadprivate](../../../parallel/openmp/reference/threadprivate.md) for an example of using `copyin`.  
  
## See Also  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)