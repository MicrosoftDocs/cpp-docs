---
title: "tile_barrier Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
## <a name=""></a>  tile_barrier Constructor](#tile_barrier__ctor)|Initializes a new instance of the `tile_barrier` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[tile_barrier::wait Method](#tile_barrier__wait)|Instructs all threads in the thread group (tile) to stop executing until all threads in the tile have finished waiting.|  
|[tile_barrier::wait_with_all_memory_fence Method](#tile_barrier__wait_with_all_memory_fence)|Blocks execution of all threads in a tile until all memory accesses have been completed and all threads in the tile have reached this call.|  
|[tile_barrier::wait_with_global_memory_fence Method](#tile_barrier__wait_with_global_memory_fence)|Blocks execution of all threads in a tile until all global memory accesses have been completed and all threads in the tile have reached this call.|  
|[tile_barrier::wait_with_tile_static_memory_fence Method](#tile_barrier__wait_with_tile_static_memory_fence)|Blocks execution of all threads in a tile until all `tile_static` memory accesses have been completed and all threads in the tile have reached this call.|  

  
## Inheritance Hierarchy  
 `tile_barrier`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  

## <a name="tile_barrier__ctor"></a>  tile_barrier Constructor  
 
## <a name="tile_barrier__wait"></a>  wait   
## <a name="tile_barrier__wait_with_all_memory_fence"></a>  wait_with_all_memory_fence   
## <a name="tile_barrier__wait_with_global_memory_fence"></a>  wait_with_global_memory_fence   
## <a name="tile_barrier__wait_with_tile_static_memory_fence"></a>  wait_with_tile_static_memory_fence   

  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
