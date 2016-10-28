---
title: "barrier"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "barrier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "barrier OpenMP directive"
ms.assetid: 5c73ad4f-c768-443a-8f9e-4fd8bc2253c7
caps.latest.revision: 8
ms.author: "mithom"
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
# barrier
Synchronizes all threads in a team; all threads pause at the barrier, until all threads execute the barrier.  
  
## Syntax  
  
```  
#pragma omp barrier  
```  
  
## Remarks  
 The `barrier` directive supports no OpenMP clauses.  
  
 For more information, see [2.6.3 barrier Directive](../parallel/2.6.3-barrier-directive.md).  
  
## Example  
 For a sample of how to use `barrier`, see [master](../parallel/master.md).  
  
## See Also  
 [Directives](../parallel/openmp-directives.md)