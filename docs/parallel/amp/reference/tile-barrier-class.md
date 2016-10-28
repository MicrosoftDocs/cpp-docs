---
title: "tile_barrier Class"
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
  - "amp/Concurrency::tile_barrier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tile_barrier class"
ms.assetid: b4ccdccb-0032-4e11-b7bd-dc9d43445dee
caps.latest.revision: 17
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
# tile_barrier Class
Synchronizes the execution of threads that are running in the thread group (the tile) by using `wait` methods. Only the runtime can instantiate this class.  
  
## Syntax  
  
```  
class tile_barrier;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[tile_barrier::tile_barrier Constructor](../Topic/tile_barrier::tile_barrier%20Constructor.md)|Initializes a new instance of the `tile_barrier` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[tile_barrier::wait Method](../Topic/tile_barrier::wait%20Method.md)|Instructs all threads in the thread group (tile) to stop executing until all threads in the tile have finished waiting.|  
|[tile_barrier::wait_with_all_memory_fence Method](../Topic/tile_barrier::wait_with_all_memory_fence%20Method.md)|Blocks execution of all threads in a tile until all memory accesses have been completed and all threads in the tile have reached this call.|  
|[tile_barrier::wait_with_global_memory_fence Method](../Topic/tile_barrier::wait_with_global_memory_fence%20Method.md)|Blocks execution of all threads in a tile until all global memory accesses have been completed and all threads in the tile have reached this call.|  
|[tile_barrier::wait_with_tile_static_memory_fence Method](../Topic/tile_barrier::wait_with_tile_static_memory_fence%20Method.md)|Blocks execution of all threads in a tile until all `tile_static` memory accesses have been completed and all threads in the tile have reached this call.|  
  
## Inheritance Hierarchy  
 `tile_barrier`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
