---
title: "lastprivate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "lastprivate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lastprivate OpenMP clause"
ms.assetid: 6ef87b31-375a-47e8-8d0d-281be45fb56a
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
# lastprivate
Specifies that the enclosing context's version of the variable is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).  
  
## Syntax  
  
```  
lastprivate(var)  
```  
  
## Remarks  
 where,  
  
 `var`  
 The variable that is set equal to the private version of whichever thread executes the final iteration (for-loop construct) or last section (#pragma sections).  
  
## Remarks  
 `lastprivate` applies to the following directives:  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [sections](../../../parallel/openmp/reference/sections-openmp.md)  
  
 For more information, see [2.7.2.3 lastprivate](../../../parallel/openmp/2-7-2-3-lastprivate.md).  
  
## Example  
 See [schedule](../../../parallel/openmp/reference/schedule.md) for an example of using `lastprivate` clause.  
  
## See Also  
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)