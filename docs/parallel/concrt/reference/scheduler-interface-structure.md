---
title: "scheduler_interface Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pplinterface/concurrency::scheduler_interface"
dev_langs: 
  - "C++"
ms.assetid: 4de61c78-a2c6-4698-bd47-964baf7fa287
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
|[scheduler_interface::schedule Method](#schedule)||  
  
## Inheritance Hierarchy  
 `scheduler_interface`  
  
## Requirements  
 **Header:** pplinterface.h  
  
 **Namespace:** concurrency  
  
##  <a name="schedule"></a>  scheduler_interface::schedule Method  
  
```
virtual void schedule(
    TaskProc_t,
 void*) = 0;
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
