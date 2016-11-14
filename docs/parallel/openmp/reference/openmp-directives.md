---
title: "OpenMP Directives | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 0562c263-344c-466d-843e-de830d918940
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
# OpenMP Directives
Provides links to directives used in the OpenMP API.  
  
 Visual C++ supports the following OpenMP directives:  
  
|Directive|Description|  
|---------------|-----------------|  
|[atomic](../../../parallel/openmp/reference/atomic.md)|Specifies that a memory location that will be updated atomically.|  
|[barrier](../../../parallel/openmp/reference/barrier.md)|Synchronizes all threads in a team; all threads pause at the barrier, until all threads execute the barrier.|  
|[critical](../../../parallel/openmp/reference/critical.md)|Specifies that code is only executed on one thread at a time.|  
|[flush](../../../parallel/openmp/reference/flush-openmp.md)|Specifies that all threads have the same view of memory for all shared objects.|  
|[for](../../../parallel/openmp/reference/for-openmp.md)|Causes the work done in a for loop inside a parallel region to be divided among threads.|  
|[master](../../../parallel/openmp/reference/master.md)|Specifies that only the master threadshould execute a section of the program.|  
|[ordered](../../../parallel/openmp/reference/ordered-openmp-directives.md)|Specifies that code under a parallelized for loop should be executed like a sequential loop.|  
|[parallel](../../../parallel/openmp/reference/parallel.md)|Defines a parallel region, which is code that will be executed by multiple threads in parallel.|  
|[sections](../../../parallel/openmp/reference/sections-openmp.md)|Identifies code sections to be divided among all threads.|  
|[single](../../../parallel/openmp/reference/single.md)|Lets you specify that a section of code should be executed on a single thread, not necessarily the master thread.|  
|[threadprivate](../../../parallel/openmp/reference/threadprivate.md)|Specifies that a variable is private to a thread.|  
  
## See Also  
 [OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)   
 [Clauses](../../../parallel/openmp/reference/openmp-clauses.md)