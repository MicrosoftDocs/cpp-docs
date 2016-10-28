---
title: "WorkerArchetype::RequestType"
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
  - "RequestType"
  - "WorkerArchetype.RequestType"
  - "WorkerArchetype::RequestType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RequestType method"
ms.assetid: 22a4a478-9cbe-4230-b0b7-0f85ecb219dc
caps.latest.revision: 12
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
# WorkerArchetype::RequestType
A typedef for the type of work item that can be processed by the worker class.  
  
## Syntax  
  
```  
 
typedef   
MyRequestType  
    RequestType; 
 
```  
  
## Remarks  
 This type must be used as the first parameter of [Execute](../../atl/reference/workerarchetype-execute.md) and must be capable of being cast to and from a ULONG_PTR.  
  
## Requirements  
 **Header:** atlutil.h  
  
## See Also  
 [Worker Archetype](../../atl/reference/worker-archetype.md)



