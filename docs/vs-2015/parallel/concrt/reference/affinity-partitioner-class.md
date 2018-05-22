---
title: "affinity_partitioner Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::affinity_partitioner"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "affinity_partitioner class"
ms.assetid: 31bf7bb1-bd01-491c-9760-d9d60edfccad
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# affinity_partitioner Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The `affinity_partitioner` class is similar to the `static_partitioner` class, but it improves cache affinity by its choice of mapping subranges to worker threads. It can improve performance significantly when a loop is re-executed over the same data set, and the data fits in cache. Note that the same `affinity_partitioner` object must be used with subsequent iterations of a parallel loop that is executed over a particular data set, to benefit from data locality.  
  
## Syntax  
  
```
class affinity_partitioner;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[affinity_partitioner::affinity_partitioner Constructor](#affinity_partitioner__affinity_partitioner_constructor)|Constructs an `affinity_partitioner` object.|  
|[affinity_partitioner::~affinity_partitioner Destructor](#affinity_partitioner___dtoraffinity_partitioner_destructor)|Destroys an `affinity_partitioner` object.|  
  
## Inheritance Hierarchy  
 `affinity_partitioner`  
  
## Requirements  
 **Header:** ppl.h  
  
 **Namespace:** concurrency  
  
##  <a name="affinity_partitioner___dtoraffinity_partitioner_destructor"></a>  affinity_partitioner::~affinity_partitioner Destructor  
 Destroys an `affinity_partitioner` object.  
  
```
~affinity_partitioner();
```  
  
##  <a name="affinity_partitioner__affinity_partitioner_constructor"></a>  affinity_partitioner::affinity_partitioner Constructor  
 Constructs an `affinity_partitioner` object.  
  
```
affinity_partitioner();
```  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
