---
title: "WorkerArchetype::Execute"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "WorkerArchetype.Execute"
  - "WorkerArchetype::Execute"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Execute method"
ms.assetid: f5d1de03-b034-4d54-898f-cbdedd68e04d
caps.latest.revision: 13
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
# WorkerArchetype::Execute
Called to process a work item.  
  
## Syntax  
  
```  
 
    void Execute(
    RequestType request,  
    void* pvWorkerParam,  
    OVERLAPPED* pOverlapped);
```  
  
#### Parameters  
 `request`  
 The work item to be processed. The work item is of the same type as [RequestType](../../atl/reference/workerarchetype-requesttype.md).  
  
 `pvWorkerParam`  
 A custom parameter understood by the worker class. Also passed to [Initialize](../../atl/reference/workerarchetype-initialize.md) and [Terminate](../../atl/reference/workerarchetype-terminate.md).  
  
 `pOverlapped`  
 A pointer to the [OVERLAPPED](http://msdn.microsoft.com/library/windows/desktop/ms684342) structure used to create the queue on which work items were queued.  
  
## Requirements  
 **Header:** atlutil.h  
  
## See Also  
 [Worker Archetype](../../atl/reference/worker-archetype.md)



