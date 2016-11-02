---
title: "auto_partitioner Class"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::auto_partitioner"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "auto_partitioner class"
ms.assetid: 7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e
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
|[auto_partitioner::auto_partitioner Constructor](#auto_partitioner__auto_partitioner_constructor)|Constructs a `auto_partitioner` object.|  
|[auto_partitioner::~auto_partitioner Destructor](#auto_partitioner___dtorauto_partitioner_destructor)|Destroys a `auto_partitioner` object.|  
  
## Inheritance Hierarchy  
 `auto_partitioner`  
  
## Requirements  
 **Header:** ppl.h  
  
 **Namespace:** concurrency  
  
##  <a name="auto_partitioner___dtorauto_partitioner_destructor"></a>  auto_partitioner::~auto_partitioner Destructor  
 Destroys a `auto_partitioner` object.  
  
```
~auto_partitioner();
```  
  
##  <a name="auto_partitioner__auto_partitioner_constructor"></a>  auto_partitioner::auto_partitioner Constructor  
 Constructs a `auto_partitioner` object.  
  
```
auto_partitioner();
```  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
