---
title: "scheduler_interface Structure"
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
  - "pplinterface/concurrency::scheduler_interface"
dev_langs: 
  - "C++"
ms.assetid: 4de61c78-a2c6-4698-bd47-964baf7fa287
caps.latest.revision: 6
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
# scheduler_interface Structure
Scheduler Interface  
  
## Syntax  
  
```
struct __declspec(novtable) scheduler_interface;
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_interface::schedule Method](#scheduler_interface__schedule_method)||  
  
## Inheritance Hierarchy  
 `scheduler_interface`  
  
## Requirements  
 **Header:** pplinterface.h  
  
 **Namespace:** concurrency  
  
##  <a name="scheduler_interface__schedule_method"></a>  scheduler_interface::schedule Method  
  
```
virtual void schedule(
    TaskProc_t,
 void*) = 0;
```  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)

