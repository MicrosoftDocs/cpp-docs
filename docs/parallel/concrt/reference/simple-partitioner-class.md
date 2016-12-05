---
title: "simple_partitioner Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::simple_partitioner"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "simple_partitioner class"
ms.assetid: d7e997af-54d1-43f5-abe0-def72df6edb3
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
# simple_partitioner Class
The `simple_partitioner` class represents a static partitioning of the range iterated over by `parallel_for`. The partitioner divides the range into chunks such that each chunk has at least the number of iterations specified by the chunk size.  
  
## Syntax  
  
```
class simple_partitioner;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[simple_partitioner::simple_partitioner Constructor](#ctor)|Constructs a `simple_partitioner` object.|  
|[simple_partitioner::~simple_partitioner Destructor](#dtor)|Destroys a `simple_partitioner` object.|  
  
## Inheritance Hierarchy  
 `simple_partitioner`  
  
## Requirements  
 **Header:** ppl.h  
  
 **Namespace:** concurrency  
  
##  <a name="dtor"></a>  simple_partitioner::~simple_partitioner Destructor  
 Destroys a `simple_partitioner` object.  
  
```
~simple_partitioner();
```  
  
##  <a name="ctor"></a>  simple_partitioner::simple_partitioner Constructor  
 Constructs a `simple_partitioner` object.  
  
```
explicit simple_partitioner(_Size_type _Chunk_size);
```  
  
### Parameters  
 `_Chunk_size`  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
