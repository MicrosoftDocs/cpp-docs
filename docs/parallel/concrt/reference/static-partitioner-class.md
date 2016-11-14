---
title: "static_partitioner Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ppl/concurrency::static_partitioner"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "static_partitioner class"
ms.assetid: 2b3dbdf0-6eb9-49f6-8639-03df1d974143
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
# static_partitioner Class
The `static_partitioner` class represents a static partitioning of the range iterated over by `parallel_for`. The partitioner divides the range into as many chunks as there are workers available to the underyling scheduler.  
  
## Syntax  
  
```
class static_partitioner;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[static_partitioner::static_partitioner Constructor](#static_partitioner__static_partitioner_constructor)|Constructs a `static_partitioner` object.|  
|[static_partitioner::~static_partitioner Destructor](#static_partitioner___dtorstatic_partitioner_destructor)|Destroys a `static_partitioner` object.|  
  
## Inheritance Hierarchy  
 `static_partitioner`  
  
## Requirements  
 **Header:** ppl.h  
  
 **Namespace:** concurrency  
  
##  <a name="static_partitioner___dtorstatic_partitioner_destructor"></a>  static_partitioner::~static_partitioner Destructor  
 Destroys a `static_partitioner` object.  
  
```
~static_partitioner();
```  
  
##  <a name="static_partitioner__static_partitioner_constructor"></a>  static_partitioner::static_partitioner Constructor  
 Constructs a `static_partitioner` object.  
  
```
static_partitioner();
```  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
