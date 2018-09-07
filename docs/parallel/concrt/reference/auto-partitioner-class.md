---
title: "auto_partitioner Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["auto_partitioner", "PPL/concurrency::auto_partitioner", "PPL/concurrency::auto_partitioner::auto_partitioner"]
dev_langs: ["C++"]
helpviewer_keywords: ["auto_partitioner class"]
ms.assetid: 7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# auto_partitioner Class
The `auto_partitioner` class represents the default method `parallel_for`, `parallel_for_each` and `parallel_transform` use to partition the range they iterates over. This method of partitioning employes range stealing for load balancing as well as per-iterate cancellation.  
  
## Syntax  
  
```
class auto_partitioner;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[auto_partitioner](#ctor)|Constructs a `auto_partitioner` object.|  
|[~auto_partitioner Destructor](#dtor)|Destroys a `auto_partitioner` object.|  
  
## Inheritance Hierarchy  
 `auto_partitioner`  
  
## Requirements  
 **Header:** ppl.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a> ~auto_partitioner 

 Destroys a `auto_partitioner` object.  
  
```
~auto_partitioner();
```  
  
##  <a name="ctor"></a> auto_partitioner 

 Constructs a `auto_partitioner` object.  
  
```
auto_partitioner();
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
