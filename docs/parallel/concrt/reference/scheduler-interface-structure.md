---
title: "scheduler_interface Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["scheduler_interface", "PPLINTERFACE/concurrency::scheduler_interface", "PPLINTERFACE/concurrency::scheduler_interface::scheduler_interface::schedule"]
dev_langs: ["C++"]
ms.assetid: 4de61c78-a2c6-4698-bd47-964baf7fa287
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
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
|[scheduler_interface::schedule](#schedule)||  
  
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
