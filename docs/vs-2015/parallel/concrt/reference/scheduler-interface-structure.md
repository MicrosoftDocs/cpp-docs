---
title: "scheduler_interface Structure | Microsoft Docs"
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
  - "pplinterface/concurrency::scheduler_interface"
dev_langs: 
  - "C++"
ms.assetid: 4de61c78-a2c6-4698-bd47-964baf7fa287
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# scheduler_interface Structure
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

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
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
