---
title: "WorkerArchetype::Terminate"
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
  - "WorkerArchetype.Terminate"
  - "WorkerArchetype::Terminate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Terminate method"
ms.assetid: 9bb841f2-fed6-4808-a2af-440b25ec91db
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
# WorkerArchetype::Terminate
Called to uninitialize the worker object after all requests have been passed to [Execute](../../atl/reference/workerarchetype-execute.md).  
  
## Syntax  
  
```  
 
    void Terminate(void* pvParam) throw();
```  
  
#### Parameters  
 `pvParam`  
 A custom parameter understood by the worker class. Also passed to [Initialize](../../atl/reference/workerarchetype-initialize.md) and [Execute](../../atl/reference/workerarchetype-execute.md).  
  
## Requirements  
 **Header:** atlutil.h  
  
## See Also  
 [Worker Archetype](../../atl/reference/worker-archetype.md)



